#include <iostream>
usisng namespace std;

class Animal{
private:
	string name;
public:
	Animal(){cout<<"Animal created."<<endl;};
	Animal (const Animal &other):name(other.name){cout<<"animal crated by copy constructor"<endl;};
	void setName(string name) {this->name=name;};
	void speak() const {cout<<"my name is:"<<name<<endl;};


};

int main(){
	Animal animal1;
	animal1.setName("mimi");

	Animal animal2=animal1; //copy constructor
	animal2.speak();
	animal2.setName("bob");

	animal1.speak();
	animal2.speak();

	Animal animal3(animal1);
	animal3.speak();

	return 0;
}