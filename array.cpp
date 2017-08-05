#include <iostream>
using namespace std;

int main(){
	int scores[25], sum=0, counter;
	double avg;
	cout<< "how many student in class?\n";
	cin>>counter;
	cout<< "enter scores for" << counter << "stdents\n";

	for (int a=0; a<counter; a++){
		cin>> scores[a];
		sum=sum+scores[a];

	}

	avg=sum/counter;
	cout<<"average is " << avg << endl;

	cout << "you entered following scores\n";

	for (int a=0; a< counter; a++){
		cout<< scores[a]<< endl;

		
	}
	return 0;

}
