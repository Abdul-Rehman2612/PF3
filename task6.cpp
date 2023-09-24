#include <iostream>
using namespace std;
main()
{
	double mb,kb,byte,bit;
	cout << "Enter the size in megabytes (MB): " ;
	cin >> mb ;
	kb=mb*1024;
	byte=kb*1024;
	bit=byte*8;
	cout << mb << " MB is equivalent to " << bit << " bits." ;
}