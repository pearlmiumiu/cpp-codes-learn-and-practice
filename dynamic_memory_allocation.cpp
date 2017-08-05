#include <iostream>

int main(){
	int *ptr=new int;
	*ptr=7;

	delete ptr; // return the meory ot the ops. ptr is now a dangling pointer.
	std::cout << *ptr; // Dereferencing a dangling pointer will cause undefined behavior
	delete ptr; // trying to deallocate the memory again will also lead to undefined behavior.

	return 0;
}


int main()
{
    int *ptr = new int; // dynamically allocate an integer
    int *otherPtr = ptr; // otherPtr is now pointed at that same memory location
 
    delete ptr; // return the memory to the operating system.  ptr and otherPtr are now dangling pointers.
    ptr = 0; // ptr is now a nullptr
 
    // however, otherPtr is still a dangling pointer!
 
    return 0;
}


int *value=new (std::nothrow) int;
if (!value){
	std::cout<<"Could not allocate memory";
}


int value = 5;
int *ptr = new int; // allocate memory
ptr = &value; // old address lost, memory leak results


int value = 5;
int *ptr = new int; // allocate memory
delete ptr; // return memory back to operating system
ptr = &value; // reassign pointer to address of value


int *ptr = new int;
ptr = new int; // old address lost, memory leak results
