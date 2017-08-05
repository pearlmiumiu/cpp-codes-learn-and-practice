#include <iostream>
using namespace std;

int main(){
	cout<< "1.\t Add new record." << endl;
	cout<< "2.\tDelete record." <<endl;
	cout<< "3.\t View record." << endl;
	cout<< "4.\t Search record."<<endl;
	cout<< "5.\tQuit." << endl;

	cout <<" Enter your selction> " flush;
	int value;
	cin>>value;
	if(value<3){
		cout<< "Insufficient privileges to use these menu option." <<endl;

	}else{
		cout << "privileges level sufficient."<<endl;

	}

	if(value==5){
		cout<<"Quiting..." << endl;

	}else{
		cout<<"Not quitting" <<endl;
	}

	return 0;

}