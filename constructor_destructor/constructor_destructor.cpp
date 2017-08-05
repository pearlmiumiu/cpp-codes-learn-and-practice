#include <iostream>
#include "Cat.h"
using namespace std;

int main(){
	cout << "starting program..." << endl;
	{
		Cat bob;
		bob.speak();
	}

	cout << "Ending program..." << endl;
	return 0;
}