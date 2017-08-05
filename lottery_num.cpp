#include <iostream>
using namespace std;

bool search_linear(int lotteryNum[], int target){
	bool hasfound=false;
	for (int j=0; j<5; j++){
		if (target==lotteryNum[j]){
			hasfound=true;
		}
	}
	return hasfound;
}

bool search_binary(int lotteryNum[], int target){
	//int items[5]={1,2,3,4,5};
	int first=0;
	int last=5;
	//bool found=false;
	//int target=7;
	int mid;
	while(first<last){
		mid=(first+last)/2;
		if (lotteryNum[mid]>target)
			last=mid-1;
		else if (lotteryNum[mid]<target){
			first=mid+1;
		}else{
			return true;
		}
	}
	return false;
}


int main(){

	int lotteryNum[5]={5,32,26,9,17};
	int index=0;
	int length=5;
	int temp, smallIndex, minIndex;
	for (index=0; index<length-1; index++){
		smallIndex=index;
		for (minIndex=index+1; minIndex<length; minIndex++){
			if(lotteryNum[minIndex]<lotteryNum[smallIndex]){
				smallIndex=minIndex;
			}
		}
		temp=lotteryNum[smallIndex];
		lotteryNum[smallIndex]=lotteryNum[index];
		lotteryNum[index]=temp;
	}

	for (int k=0; k<5; k++){
		cout<<lotteryNum[k]<<",";
	}
	cout<<endl;

	int guessNum[5];
	cout<< "please enter five numbers between 1 to 40"<<endl;
	for (int i=0; i<5; i++){
		cin>> guessNum[i];
	}
	cout<<"line 26"<<endl;

	int i=0;
	int j=0;
	int last=5;
	bool hasfound;
	for (i=0; i<last; i++){
		// hasfound=false;
		// for (j=0; j<last; j++){
		// 	if (guessNum[i]==lotteryNum[j]){
		// 		hasfound=true;
		// 	}
		// }
		hasfound = search_binary(lotteryNum, guessNum[i]);

		if (hasfound==true){
			continue;	

		}else{
			cout<<"you lose!"<<endl;
		    cout<<"the lottery numbers are";
		    for (int k=0; k<5; k++){
		    	cout<<lotteryNum[k]<<",";
		    }
		    cout<<endl;
		    return 0;
		}

			

	}
	cout<<"you win"<<endl;

	return 0;
	
}