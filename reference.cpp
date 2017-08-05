#include <iostream>
using namespace std;

void changeSomething (doule &value){
	value=123.4
}

int main(){
	int value1=8;
	int &value2=value1;

	value2=10;

	cout<<"Value1:"<<value1<< endl;  //10
	cout<< "Value2:"<< value2<< endl;  //10

	double value=4.321;
	changeSomething(value);
	cout<< value<<endl; //4.321

	return 0;
}
