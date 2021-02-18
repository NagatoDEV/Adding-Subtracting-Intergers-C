// James Justin Calderon
// 2/18/2021
// This program allows the end user to input 2 numeric values
// Additionally this program outputs the sum and diffrence between 2 values.
// *********************************************************************

#include <iostream>

using namespace std;

int main()

{
	// Variable declarations

	int number1; // First number that will be inputed by the user.
	int number2; // second interger that will be inputed by the user.
	int totalSum; // This will eqauate the total sum from the 2 numeric inputs.
	int totalDifference; // This will equate the diffrence from the 2 numeric inputs.

	cout << "Please enter your first number: "; // Prompt the end user to input a numeric value.
	cin >> number1; // read the first number inputed by the end user.

	cout << "Please enter your second number: "; // Prompt the end user to input a numeric value.
	cin >> number2; // read the second number inputed by the end user.

	totalSum = number1 + number2; // arithmetic function
	totalDifference = number1 - number2; 

	cout << "And the sum is: " << totalSum << endl; // displays the sum for end user.
	cout << "And the difference is: " << totalDifference << endl; //displays the sum for end user.

	return 0;

}