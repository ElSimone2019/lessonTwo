// lessonTwo.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

//Stops the requirement to type std before commands
using namespace std;

int main()
{
	//Variable to hold the user choice
	string choice = " ";

	//While loop to keep the menu going until the user types stop
	while (choice != "stop" || choice != "Stop") {

		//Output for the menu options
		cout << "What would you like to see?\n*Square\n*Rectangle\n*Horizontal Line\n*Vertical Line\n*Stop Program\n: "

		//Input to get the users menu choice
		cin >> choice;
		cout << "\n";

		//IF Statement to show correct output
		if (choice == "Square" || choice == "square") {
			cout << " -----\n|     |\n|     |\n -----\n";
		}
	}
}