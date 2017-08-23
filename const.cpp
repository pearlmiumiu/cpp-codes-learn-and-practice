#include <iostream>
using namespace std;

class Animal{

private:
	string name;

public:
	void setName(string name) {this->name= name;}
	void speak() const {cout << "My name is :"<< name<<endl;}

};

int main(){
	const double PI=3.141592;
	cout<<PI<<end;

	Animal animal;
	animal.setName("Freddy");
	animal.speak();

	int value=8;

	int*pValue=&value;

	cout<<*pValue<<endl;

	int number=11;
	pValue=&number; //error with: int *const pValue=&value


	*pValue=12; //error with: const int *pValue=&value
	cout<<*pValue<<end;

	return 0;
}