 int *ptr;

 int **ptrptr;

 int value=5;
 int *ptr=&value;
 std::cout<<*ptr;   //5

 int **ptrptr=&ptr;
 std::cout<<**ptrptr;  //5

 //array of pointers

int **array= new int*[10] //allocate an array of 10 int pointers

int array[10][5]
int (*array)[5]=new int[10][5];

int **array=new int*[10];
for (int count=0; count<10; ++count)
array[count]= new int[5]; //these are columns

//deallocate
for (int count=0; count<10; ++count)
	delete[] array[count];
delete[] array; //this needs to be done last

//flatten array
int *array = new int[50];

int getSingleIndex(int row, int col, int numOfColInArr)
{
	return (row*numOfColInArr)+col;
}






