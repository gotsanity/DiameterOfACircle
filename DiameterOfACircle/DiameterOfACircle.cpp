#include <iostream>

using namespace std;

const double PI = 3.1415;

double GetCircumference(double radius);
void GetResults();

int main()
{
	bool isRunning = true;

	cout << "Welcome to the circumference calculator.\n";

	while (isRunning) {
		int input;

		cout << "-----Main Menu-----\n";
		cout << "1. Calculate a circumference\n";
		cout << "0. Exit\n";
		cout << "\n\nWhat would you like to do? ";

		cin >> input;

		//if (input == 1) {
		//	// calculate
		//}
		//else if (input == 0) {
		//	// exit
		//}
		//else {
		//	// please try again
		//}

		switch (input) {
		case 1:
			GetResults();
			break;
		case 0:
			isRunning = false;
			cout << "Jobs done.\n";
			break;
		default:
			cout << "Please try again\n";
			break;
		}
	}
}

double GetCircumference(double radius)
{
	// 2 * Radius * PI
	return 2 * radius * PI;
}

void GetResults()
{
	// algorithm

	double answer;

	// prompt
	cout << "What is the the radius of the circle?\n";
	cin >> answer;

	cout << "Lets find the circumference of a " << answer << " inch radius circle.\n";

	double result = GetCircumference(answer);

	cout << "The circumference of the circle is: " << result << " inches around.\n";
}
