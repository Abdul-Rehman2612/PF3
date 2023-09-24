#include <iostream>
using namespace std;
main()
{
	long int population,n;
	cout << "Enter the current world population: ";
	cin >> population;
	cout << "Enter the monthly birth rate (number of births per month): ";
	cin >> n ;
	n=n*12*30;
	population=n+population;
	cout << "The population in three decades will be: " << population ;
	
	
}