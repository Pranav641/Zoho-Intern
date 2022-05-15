#include <bits/stdc++.h>
using namespace std;

int group_index=1, leader_group_index=0, leadergroup=INT_MIN;

int DFS(int N,int M,int i,int j,int **members,int **visited)
{
	int result=0;
	if (i<0 || i>N-1 || j<0 || j>M-1 || visited[i][j] || members[i][j]==0)
	    return 0;
    
    visited[i][j]=group_index;    
    // To check the top element
    result = result + DFS(N,M,i-1,j,members,visited);
    // To check the right element
    result = result + DFS(N,M,i,j+1,members,visited);
    // To check the bottom element
    result = result + DFS(N,M,i+1,j,members,visited);
    // To check the left element
    result = result + DFS(N,M,i,j-1,members,visited);
    
    return members[i][j]+result;
}

// min_distance calculates the shortest path from the leader group to others using DFS
void min_distance(int N,int M,int i,int j,int** visited,int* group_distance,int leader_group_index,int c)
{
    if(i<0 || i>N-1 || j<0 || j>M-1 || visited[i][j] == leader_group_index || visited[i][j] == -1 || group_distance[visited[i][j]-1] == 1)
		return;
    if(visited[i][j] != 0)
	{
        group_distance[visited[i][j]-1] = min(group_distance[visited[i][j]-1],c);
        return;
    }
    c++;
    visited[i][j] = -1;
    
    min_distance(N,M,i-1,j,visited,group_distance,leader_group_index,c);	// To check the top element
    min_distance(N,M,i,j+1,visited,group_distance,leader_group_index,c);    // To check the right element
    min_distance(N,M,i+1,j,visited,group_distance,leader_group_index,c);    // To check the bottom element
    min_distance(N,M,i,j-1,visited,group_distance,leader_group_index,c);    // To check the left element
    
    visited[i][j] = 0;
}


int* count_group_members(int N,int M,int **members,int **visited, int groups[]) 
{
	int i,j,result,k=0;
	memset(groups,0,N*M);
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if (visited[i][j]==0 && members[i][j]!=0)
    		{
        		result = DFS(N,M,i,j,members,visited);
        		groups[k] = result;
				if(leadergroup<groups[k])
				{
					leadergroup = groups[k];
					leader_group_index = group_index;
				}
				k++;
				group_index++;
	   		}
		}
	}
	group_index--; // Decrement group_index to know the actual number of groups
	return groups;
}


int main()
{
	int N,M,i,j;
	cout<<"Enter the number of rows(N): ";
	cin>>N;
	cout<<"Enter tbe number of columns(M): ";
	cin>>M;
	int **members = new int *[N];
	int **visited = new int *[N];
	int *groups = new int[N*M];
	int *group_distance = new int[group_index];

	
	for(i=0;i<N;i++)
	{
		members[i] = new int[M];
		visited[i] = new int[M];
	}
	
	cout<<"Enter the number of persons in a family: "<<endl;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			cin>>members[i][j];
			visited[i][j] = 0;
		}
	}
	
	count_group_members(N,M,members,visited,groups);
	
	cout<<"\nThe groups are: "<<endl;
	for(i=0;groups[i];i++)
		cout<<groups[i]<<" ";
	cout<<endl;
	
	cout<<"\nThe leader group is: ";
	cout<<leadergroup<<endl;
	
	// group_distance stores the minimum distance from the leadergroup to all the groups
    for(i=0;i<group_index;i++)
        group_distance[i] = INT_MAX;
    
    for(i=0;i<N;i++)
	{
        for(j=0;j<M;j++)
		{
            if(visited[i][j] == leader_group_index)
			{
                min_distance(N,M,i-1,j,visited,group_distance,leader_group_index,0);
                min_distance(N,M,i,j+1,visited,group_distance,leader_group_index,0);
                min_distance(N,M,i+1,j,visited,group_distance,leader_group_index,0);
                min_distance(N,M,i,j-1,visited,group_distance,leader_group_index,0);
            }
        }
    }
    cout<<"\nShortest path to all other groups :"<<endl;
    for(i=0;i<group_index;i++)
	{
        if(leadergroup != groups[i])
        	cout<<group_distance[i]<<"  ";
    }
		
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
