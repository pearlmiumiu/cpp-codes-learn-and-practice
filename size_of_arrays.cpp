#include <iostream>
using namespace std;

int main() {

	int values[] = {4, 7, 3, 4};

	cout << sizeof(values) << endl;
	cout << sizeof(int) << endl;

	for(unsigned int i=0; i < sizeof(values)/sizeof(int); i++) {
		cout << values[i] << " " << flush;
	}

	cout << endl;




	string animals[][3] = {
			{ "fox", "dog", "cat" },
			{ "mouse", "squirrel", "parrot" }
	};



	for(unsigned int i=0; i< sizeof(animals)/sizeof(animals[0]); i++) {

		for(unsigned int j=0; j< sizeof(animals[0])/sizeof(string); j++) {
			cout << animals[i][j] << " " << flush;
		}

		cout << endl;
	}

	return 0;
}
