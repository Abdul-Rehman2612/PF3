#include <iostream>
using namespace std;
main()
{
	int year,days;
	cout << "Enter your age in years: ";
	cin >> year ;
	days=365*year;
	cout << "Your age in days is approximately " << days << " days." ;
}