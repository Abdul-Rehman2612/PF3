#include <iostream>
using namespace std;
main()
{
	int wins,draws,losses,points;
	string team;
	cout << "Enter the name of the cricket team: ";
	cin >> team;
	cout << "Enter the number of wins: ";
	cin >> wins ;
	wins=3*wins;
	cout << "Enter the number of draws: ";
	cin >> draws ;
	draws=1*draws;
	cout << "Enter the number of losses: ";
	cin >> losses ;
	losses=losses*0;
	points=losses+wins+draws;
	cout << team << " has obtained " << points << " points in the Asia cup tournament." ;
}