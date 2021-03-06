#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <iomanip>

#define M_PI 3.1415; 

using namespace std;

int main() {
	ios::fmtflags f(cout.flags());
	string input = "";


	getline(cin, input);
	double radius = atof(input.c_str());
	double volume = 0.75*radius*radius*radius*M_PI;
	cout << volume << endl;
	

	cout << "0" << endl;
	getline(cin, input);
	if (atof(input.c_str()) == 1) {
		cout << "10" << endl;
		getline(cin, input);
		if (atof(input.c_str()) == 11) {
			cout << "100" << endl;
			getline(cin, input);
			if (atof(input.c_str()) == 101) {
				cout << "You pass the test." << endl;
			}
		}
	}


	getline(cin, input);
	double rounded = atof(input.c_str());
	cout << setprecision(0) << fixed << rounded << endl;
	cout.flags(f);


	getline(cin, input);
	int scores = atof(input.c_str());
	double added = 0;
	for (int i = 0; i < scores; i++) {
		getline(cin, input);
		added += atof(input.c_str());
	}
	double average = added / scores;
	cout << average << endl;


	getline(cin, input);
	int sec = atof(input.c_str());
	int hours = seconds / 3600;
	int minutes = (sec % 3600) / 60;
	int seconds = (sec % 3600) % 60;
	cout << hours << ":" << minutes << ":" << seconds << endl;


	/*
	#include <iomanip>
	#include <cmath>
	
	int main() {
		const double PI = 3.14159;
		double radius;
		double height;
	
		cout << "Enter the radius of the base of the cylinder: ";
		cin >> radius;
		cout << endl;
	
		cout << "Enter the height of the cylinder: ";
		cin >> height;
		cout << endl;
		
		cout << fixed << showpoint << setprecision(2);
		cout << "Volume of the cylinder = " << PI * pow(radius, 2.0)*height << endl;
		cout << "Surface area: " << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0) << endl;
	
		return 0;
	}
	*/


	string lastName;
	string firstName;
	string salary;
	string percent;
	ifstream inFile;
	ofstream outFile;
	inFile.open("Ch3_Ex6Data");
	outFile.open("Ch3_Ex6Output");
	for (int i = 0; i < 3; i++) {
		inFile >> lastName >> firstName >> salary >> percent;
		int updatedSalary = atof(salary.c_str()) * (1 + atof(percent.c_str()));
		outFile << firstName << lastName << updatedSalary << endl;
	}
	inFile.close();
	outFile.close();


	getline(cin, input);
	return 0;
}