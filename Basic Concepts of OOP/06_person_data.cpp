#include<iostream>
using namespace std;

class Person
{
	private:
		string name,country;
		int age;
		
	public:
		void get_info()
		{
			cout<<"\t Enter Name of Person : ";
			cin>>name;
			cout<<"\n\t Enter Age of Person : ";
			cin>>age;
			cout<<"\n\t Enter Country of Person : ";
			cin>>country;
		}
		void print_data()
		{
			cout<<"\n\t Enter Name of Person : "<<name;
			cout<<"\n\t Enter Age of Person : "<<age;
			cout<<"\n\t Enter Country of Person : "<<country;
		}
};
main()
{
	Person P;
	P.get_info();
	P.print_data();
}

