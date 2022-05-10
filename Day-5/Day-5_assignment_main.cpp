#include "Day-5_assignment_1.cpp"

class Main
{
	public:		
		void func()
		{
			using namespace namespace_1;
			Name obj;
			obj.getname("Zoho");
			obj.printname();
			// To call the nested namespace
			Math::area();
			Math::perimeter();
			// Namespace Aliasing
			namespace new_namespace = namespace_1;
			// To call the inline namespace
			new_namespace::display();
		}
			
};

int main()
{
	Main obj1;
	obj1.func();
	return 0;
}
