//given a sorted array and target to find if the target is in the array
//return a boolean value
#include <iostream>
using namespace std;

bool searchTarget(){
	int items[5]={1,2,3,4,5};
	int first=0;
	int last=5;
	//bool found=false;
	int target=7;
	int mid;
	while(first<last){
		mid=(first+last)/2;
		if (items[mid]>target)
			last=mid-1;
		else if (items[mid]<target){
			first=mid+1;
		}else{
			
			return true;
		}

	
	}
	return false;
}
int main(){
	cout<<searchTarget()<<endl;

	return 0;
	
}