#include <bits/stdc++.h>
using namespace std;

int DFS(int N,int M,int i,int j,int **members,bool **visited,int path[4][2])
{
	int row,column,result=0;
	if (i<0 || i>N-1 || j<0 || j>M-1 || visited[i][j] || members[i][j]==0)
	    return 0;
    
    	visited[i][j]=true;
    
    	// To check the Left element.
	row = i + path[0][0];
	column = j + path[0][1];
    	result = result + DFS(N,M,row,column,members,visited,path);
    	// To check the Top element.
    	row = i + path[1][0];
	column = j + path[1][1];
    	result = result + DFS(N,M,row,column,members,visited,path);
    	// To check the Right element.
	row = i + path[2][0];
	column = j + path[2][1];
    	result = result + DFS(N,M,row,column,members,visited,path);
    	// To check the Bottom element.
	row = i + path[3][0];
	column = j + path[3][1];
    	result = result + DFS(N,M,row,column,members,visited,path);
    
    	return members[i][j]+result;
}


int* count_group_members(int N,int M,int **members,bool **visited,int path[4][2], int groups[]) 
{
	int i,j,result,k=0;
	memset(groups,0,N*M);
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if (!visited[i][j] && members[i][j]!=0)
            		{
                		result = DFS(N,M,i,j,members,visited,path);
                		groups[k++]=result;
            		}
		}
	}
	return groups;
}

int leader_group(int* groups)
{
	int max=INT_MIN;
	for(int i=0;groups[i];i++)
	{
		if(max<groups[i])
			max=groups[i];
	}
	return max;
}


int main()
{
	int N,M,i,j;
	cout<<"Enter the number of rows(N): ";
	cin>>N;
	cout<<"Enter tbe number of columns(M): ";
	cin>>M;
	int **members = new int *[N];
	bool **visited = new bool *[N];
	int path[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
    	int *groups = new int[N*M];
    	int leadergroup = 0;
    
    	for(i=0;i<N*M;i++)
		groups[i]=0;
	
	for(i=0;i<N;i++)
	{
		members[i] = new int[M];
		visited[i] = new bool[M];
	}
	
	cout<<"Enter the number of persons in a family: "<<endl;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			cin>>members[i][j];
			visited[i][j] = false;
		}
	}
	
	count_group_members(N,M,members,visited,path,groups);
	leadergroup = leader_group(groups);
		
	
	cout<<"\nThe groups are: "<<endl;
	for(i=0;groups[i];i++)
		cout<<groups[i]<<" ";
	cout<<endl;
	
	cout<<"\nThe leader group is: ";
	cout<<leadergroup<<endl;
	
	
	for(i=0;i<N;i++)
	{
		delete[] members[i];
		delete[] visited[i];
	}
	delete[] members;
	delete[] visited;
	delete[] groups;
	
	return 0;	
}
