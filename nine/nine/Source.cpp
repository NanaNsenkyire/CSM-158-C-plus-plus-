#include <iostream>

using namespace std;

int main() {

	// Arrays- A collection of elements grouped into one "variable"

	int numbers[50] = {};//Make 50 integers all with value 0
	int numbers2[6] = { 12,34,5,7,123,4 };//6 elements with initialised values
	int numbers3[7] = { 9,2 };//first two elements initialized with the remaining ones defaulted to 0

	int numberArray[] = { 45,12,4 };//Assumes from the initialised amount as 3

	string words[] = { "Booty", "Clappeers" };

	//Arrays are zero based
	string bookList[4] = {
		"Unbroken",//0
		"Can't hurt me",//1
		"The Godfather",//2
		"Supermarket"//3
	};
	cout << "This is third book: " + bookList[2] << endl;

	bookList[0] = "Booty";
	cout << "This is third book: " + bookList[0] << endl;

	int ages[] = { 13,17,12,134,67 };
	cout << ages[3] << endl;
	ages[3] = ages[3] + 1;
	cout << ages[3] << endl;

	cout << "Size of the age array: " << (sizeof(int) * 5) << "bytes" << endl;


	return 0;
}