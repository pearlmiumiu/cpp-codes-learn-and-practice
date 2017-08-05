#include <iostream>
using namespace std;

void showMenu(){
	cout<< "1. search" << endl;
	cout<< "2. view record"<< endl;
	cout<< "3. quit." <<endl;

}

void processSelection(){
	cout<< "Enter selections: "<<endl;

	int input;
	cin>> input;

	switch(input){
		case 1: 
		    cout << "searching...." << endl;
		    break;
		case 2:
			cout << "viewing..." << endl;
			break;
        case 3:
        	cout << "quiting..." << endl;
        	break;
        default:
        	cout << "please selct an item from the menu." << endl;


	}
}

int main(){
	showMenu();
	processSelection();
	return 0;
}