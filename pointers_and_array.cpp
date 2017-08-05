#include <iostream>

int main(){
	int array[5]={9,7,5,3,1};
	std:: cout <<" the array has address: " << array << endl;
	std:: cout << "Element 0 has address: "<< &array[0]<<endl;  //reference to array's address

	return 0;
}


int array[5]={9,7,5,3,1};
 cout<< *array; // will print 9

 char name[]="Jason";
 cout << *name; //will print "J"


 int main(){

 	int array[5]={9,7,5,3,1};
 	std:: cout<< sizeof(array)<< "\n";  // will print sizeof(int) * array length

 	  int * ptr=array;
 	  std:: cout << sizeof(ptr)<< "\n"; // will print the size of a pointer

 }


 int main()
{
	int array[5] = { 9, 7, 5, 3, 1 };
        std::cout << *array; // will print 9
 
        int *ptr = array;
        std::cout << *ptr; // will print 9
 
	return 0;
}