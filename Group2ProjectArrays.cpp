// GroupProjectTotalScaleUp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

//constexpr used to specify the array length
constexpr int arrayLength = 12;

//Code for - 1."Display"
void optionDisplay(int arr[])
{
	cout << "\nPlease input 12 numbers:\nPress ENTER to confirm each selection.\nUse a range from 0 to 100:\n";
	for (int i = 0; i < 12; i++) // @K0032557_Osman_Dzhelilov_Task_"DISPLAY": We have to made user type their own numbers, that software should not be hardcoded, so, below code that populate user's numbers into var BUNDLE mailboxes
	{
		cin >> arr[i];
	}
	cout << "These numbers have been saved in the array!\n";
	cout << "The numbers in the array are: \n\n";
	for (int i = 0; i < 12; i++) // @K0032557_Osman_Dzhelilov_Task_"DISPLAY": this code show output of task DISPLAY. Literally it output on the screen the number was populated into mailboxes of BUNDLE 1d-array from user's keyboard in previous executings.
	{
		cout << arr[i] << " ";
	}
	cout << "\n\n";
}
//Code for - 2."Total" - Jeffrey Enright - K00325652
void optionTotal(int arr[])
{
	int total = 0;
	for (int i = 0; i < 12; i++) {
		total += arr[i];
	}
	cout << "The total of all elements within the array is: " << total << "\n\n";
}
//Code for - 3."Average" - Noah Ezzine - K00325213
void optionAverage(int arr[])
{
	int total = 0;
	for (int i = 0; i < 12; i++) {
		total += arr[i];
	}
	double average = static_cast<double>(total) / 12;
	cout << "Average: " << average << endl;
}
//Code for - 4."Largest" - Julian Donatus - K00319279
int optionLargest(int arr[])
{

	/*
	*    for (int i = 0; i < SIZE; i++) {
	*		cin >> scores[i];
	*    }
	*
		// Initialize largest and smallest
		int largest = scores[0];
		int smallest = scores[0];
		// Find largest and smallest scores

		for (int i = 1; i < SIZE; i++) {
			if (scores[i] > largest) {
				largest = scores[i];
			}
			if (scores[i] < smallest) {
				smallest = scores[i];
			}
		}
		// Display results

		cout << "Largest score: " << largest << endl;
		cout << "Smallest score: " << smallest << endl;

*/

	int largestNum = 0;
	for (int i = 0; i < 12; i++)
	{
		if (largestNum < arr[i])
		{
			largestNum = arr[i];
		}
	}
	return largestNum;
}
//Code for - 5."Smallest" - Julian Donatus - K00319279
void optionSmallest(int arr[])
{
	/*
	*    for (int i = 0; i < SIZE; i++) {
	*		cin >> scores[i];
	*    }
	*
		// Initialize largest and smallest
		int largest = scores[0];
		int smallest = scores[0];
		// Find largest and smallest scores

		for (int i = 1; i < SIZE; i++) {
			if (scores[i] > largest) {
				largest = scores[i];
			}
			if (scores[i] < smallest) {
				smallest = scores[i];
			}
		}
		// Display results

		cout << "Largest score: " << largest << endl;
		cout << "Smallest score: " << smallest << endl;

*/

	int smallestNum = 100;
	for (int i = 0; i < 12; i++)
	{
		if (smallestNum > arr[i])
		{
			smallestNum = arr[i];
		}
	}
	cout << "The smallest within the array is: " << smallestNum << endl;
}
//Code for - 6."Occurrence of value"
void optionOccurence(int arr[], int occurent_number)
{
	int occurrences[101] = { 0 };  // @K0032557_Osman_Dzhelilov_Task_"OCCURANCES": Array to store occurrences, assuming numbers are between 0 and 100
	// ---- DIVIDER OF SOFT :: DISPLAY ABOVE :: OCCURENCES BELOW ----

// @K0032557_Osman_Dzhelilov_Task_"OCCURENCES": Count occurrences of numbers in mailboxes BUNDLE by checking each number and updating the count if they are less then 100
	for (int i = 0; i < 12; i++) {
		if (arr[i] >= 0 && arr[i] <= 100) {
			occurrences[arr[i]]++;
		}
	}

	// @K0032557_Osman_Dzhelilov_Task_"OCCURENCES": Output occurrences to users display
	cout << "\n\n Occurrences of each number:\n";
	for (int i = 0; i <= 100; i++) {
		if (occurrences[i] > 0) {  // @K0032557_Osman_Dzhelilov_Task_"OCCURENCES": Will show numbers that have appeared at least once.
			cout << "Number " << i << " occurred " << occurrences[i] << " time(s).\n";
		}
	}
}
//Code for - 7."Scale Up" - Jeffrey Enright - K00325652
void optionScaleFactor(int arr[])
{
	int scaleFactor;
	cout << "Enter the factor to multiply each element within the array\n";
	cin >> scaleFactor;
	int total = 0;
	for (int i = 0; i < 12; i++)
	{
		cout << "Multiplying value: " << arr[i] << " by a scale of " << scaleFactor;
		arr[i] = arr[i] * scaleFactor;
		cout << " Value has become: " << arr[i] << "\n";
	}
}
//Code for - 8."Reverse" - Noah Ezzine - K00325213
void optionReverse(int arr[])
{
	int temp;
	for (int i = 0; i < 12 / 2; i++) {
		temp = arr[i];
		arr[i] = arr[12 - 1 - i];
		arr[12 - 1 - i] = temp;

	}

	cout << "Array reversed." << endl;
}
//Code for - 9."Zero Base" - Noah Ezzine - K00325213
void optionZeroBase(int arr[])
{
	/* 	int zeroBase(int array[], int size) {
		int offset = smallest(array, size);

		for (int i=0; i<size; ++i) {
			array[i] -= offset;
		}	*/

		// Find the smallest value in the array
	int minValue = arr[0]; // Assume the first number is the smallest
	for (int i = 1; i < 12; i++) {
		if (arr[i] < minValue) {
			minValue = arr[i]; // Update minValue if a smaller number is found
		}
	}

	// Adjust the array by subtracting the smallest value from each element
	for (int i = 0; i < 12; i++) {
		arr[i] -= minValue;
	}

	// Output the adjusted array
	cout << "After adjusting, the numbers in the array are: \n\n";
	for (int i = 0; i < 12; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";


	// END OF PROG ZERO BASE 7707171
	int smallestNum = 100;
	for (int i = 0; i < sizeof(arr); i++)
	{
		if (smallestNum < arr[i])
		{
			smallestNum = i;

		}

	}
	arr[smallestNum] = 0;
}

//Start of main
int main()
{
	//Array initialised
	int arr[12];

	//Declared variable for the option selected (selection)
	int selection;

	//The menu - Displays each option and what they will output
	do
	{

		cout << "1. Input array elements - They will then be displayed.\n\n";
		cout << "2. Display the total of all values in the collection.\n";
		cout << "3. Display the average of all values in the collection.\n";
		cout << "4. Display the largest value in the collection.\n";
		cout << "5. Display the smallest value in the collection.\n";
		cout << "6. Display the number of occurence of a particular value in the collection.\n";
		cout << "7. Display the multiplication of each value in the collection depending on the scale factor entered.\n";
		cout << "8. Display all values in the collection in reverse order\n";
		cout << "9. Display all values in the collection so that the smallest values will be zero.\n\n";
		cout << "10. Exit\n";
		cout << "11. Just print array as it is right out from the memory.\n\n";
		cin >> selection;

		//Switch statement used for selection of menu options
		switch (selection) {
		case 1:
			optionDisplay(arr);
			break;

		case 2:
			optionTotal(arr);
			break;

		case 3:
			optionAverage(arr);
			break;

		case 4:
			// This works because optionLargest has a return of that is an int when a
			cout << "The largest number in this set is: " << optionLargest(arr) << endl;
			// function has a return type that is void i.e int/string/bool, it needs to be used.

			// If one was to change the return type from int to void and get rid of the return line, then one can just write the following:
			// optionLargest(arr)
			break;

		case 5:
			optionSmallest(arr);
			break;

		case 6:
			optionOccurence(arr, 27);
			break;

		case 7:
			optionScaleFactor(arr);
			break;

		case 8:
			optionReverse(arr);
			break;

		case 9:
			optionZeroBase(arr);
			break;
			//This will exit the program - Julian Donatus - K00319279
		case 10:
			cout << "Goodbye!";
			break;
		case 11: // First input is only selfexecution, so first step of program is COLLECT and Display. The step 11 is just do DISPLAY of the memory of the array if it exist.
			cout << "\n";
			for (int i = 0; i < 12; ++i) {
				std::cout << arr[i] << " ";
			}

			cout << "\n Here we go, your numbers displayed above.\n\n";
			break;

		default:
			cout << "Invalid choice - Please select the following option:" << endl;
			break;

		}
	}

	while (selection != 10);

	return 0;

	//End of program
}