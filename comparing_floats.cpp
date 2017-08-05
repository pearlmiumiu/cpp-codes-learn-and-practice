#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float value1=1.1;

	/dont use == to compare float

	if(value1==1.1){
		cout<< "equals"<< endl;

	}else{
		cout<<"not equal"<<endl;
	}

	cout << setprecion(10)<<value1 << endl;
}


int main(){
	float value1=1.1;

	if(value1<1.1){
		cout<< "equals"<< endl;

	}else{
		cout<<"not equal"<<endl;
	}

	cout << setprecion(10)<<value1 << endl;
}