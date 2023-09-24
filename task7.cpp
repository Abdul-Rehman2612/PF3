#include <iostream>
using namespace std;
main()
{
	int hour,minute,second;
	cout << "Enter the number of hours: " ;
	cin >> hour ;
	minute=hour*60;
	second=minute*60;
	cout << hour << " hours is equivalent to " << second << " seconds." ;
}