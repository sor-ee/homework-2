#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string Name , Surname ;
	int Salary , Sale , Commission , Total;
	cout << "*********Homework 2**********\n";
	cout << "Enter name : " ;
	cin >> Name >> Surname ;
	cout << "Enter salary : " ;
	cin >> Salary ;
	cout << "Enter sale : " ;
	cin >> Sale ;
	cout << "Enter commission percent: " ;
	cin >> Commission; 
	cout <<"------output----------\n";
	cout << "Your name = " << Name << " " << Surname << endl ;
	Total = (Sale * Commission /100)+Salary ;
	cout << "Total revenue = " << Total << " Bath\n " ;
	cout << "--------------------------------------------\n" ;
	return 0;
}