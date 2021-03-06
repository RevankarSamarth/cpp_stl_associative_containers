// cpp_stl_associative_containers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include "stdafx.h"
#include <string>
#include <fstream>
#include <iostream>
#include <map>

using namespace std;

int main() {
	map<pair<int, int>, string> pins;  //Map to hold latitude, longitude as the key and location as corresponding value
	int temp = 0;
	string str;
	pair<pair<int, int>, string> p;   //First create the pair to be inserted in map
	pair<int, int> landmark;          //For generating latitude - longitude key value pair

	cout << "Inserting...\n";
	while (temp >= 0) {               // While loop will terminate once a negative value is entered
		cout << "Enter latitude: ";
		getline(cin, str);
		temp = stoi(str);
		if (temp >= 0) {
			landmark.first = temp;
			cout << "Enter longitude: ";
			getline(cin, str);
			temp = stoi(str);
			landmark.second = temp;
			p.first = landmark;
			cout << "Enter name: ";
			getline(cin, str);
			p.second = str;
			pins.insert(p);
		}
	}

	cout << "{   ";
	for (auto it = pins.begin(); it != pins.end(); it++)
		cout << it->first.first << "," << it->first.second << "->" << it->second << "   "; // Print the value in the map at respective iterator positions
	cout << "}\n";
	cin.get();
	return 0;
}

