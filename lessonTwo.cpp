// lessonTwo.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

//Stops the requirement to type std before commands
using namespace std;

int main()
{
	//Variable to hold the total grade and average grade
	int totalGrade = 0;
	float averageGrade = 0;

	//For loop to collect and add the grades
	for (int counter = 1; counter <= 5; counter++) {
		//Variable to hold the grade
		int grade = 0;

		//Input to collect the grade
		cout << "Please enter grade " << counter << ": ";
		cin >> grade;

		//Adds grade to the totalGrade counter
		totalGrade = totalGrade + grade;
	}

	//Seperates the input and output
	cout << "\n";

	//Calculates the average grade
	averageGrade = totalGrade / 5;

	//IF Statement to show the grade boundaries
	if (averageGrade >= 0 && averageGrade < 40) {
		cout << "This is a fail";
	}
	else if (averageGrade >= 40 && averageGrade < 60) {
		cout << "This is OK";
	}
	else if (averageGrade >= 60 && averageGrade < 70) {
		cout << "This is good";
	}
	else if (averageGrade > 70 && averageGrade <= 100) {
		cout << "This is excellent";
	}
	else {
		cout << "Grade must be higher than 0 but lower than 100";
	}
}