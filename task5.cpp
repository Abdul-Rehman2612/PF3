#include <iostream>
using namespace std;
main()
{
	string name;
	float inter_marks,matric_marks,ecat_marks,aggregate;
	cout << "Enter the student's name: " ;
	cin >> name ;
	cout << "Enter matriculation marks (out of 1100): " ;
	cin >> matric_marks ;
	cout << "Enter intermediate marks (out of 550): " ;
	cin >> inter_marks ;
	cout << "Enter Ecat marks (out of 400): " ;
	cin >> ecat_marks ;
	aggregate=(matric_marks/1100)*10+(inter_marks/550)*40+(ecat_marks/400)*50;
	cout << "Aggregate score for "<< name << " in UET is: " << aggregate << "%";
}