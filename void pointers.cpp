int nValue;
float fValue;

struct Something{
	int n;
	float f;

};

Something sValue;

void *ptr;
ptr=&nValue;
ptr=&fValue;
ptr=&sValue;

// because the void pointer does not know what type of object it is pointing to, 
//it cannot be dereferenced directly!
// Rather, the void pointer must first be explicitly cast 
//to another pointer type before it is dereferenced.

int value=5;
void *voidPtr=&value;

int *intPtr=static_cast<int*> (voidPtr);

cout<< *intPtr<<endl;

#include <iostream>

enum Type{
	INT, FLOAT, CSTRING
};

void printValue(void *ptr, Type type){
	switch(type)
	{
		case INT:
			std::cout<<*static_cast<int*>(ptr)<<'\n';
		case FLOAT:
			std::cout<<*static_cast<float*>(ptr)<<'\n';
		case CSTRING:
			std::cout<<static_cast<char*>(ptr)<<'\n';
		break;
	}
}

int main()
{
	int nValue=5;
	float fValue=7.5;
	char szValue[]="Mollie";

	printValue(&nValue, INT);
	printValue(&fValue, FLOAT);
	printValue(szValue, CSTRING);

	return 0;
}


