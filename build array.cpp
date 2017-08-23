#include <iostream>
#include <array>

void printLength(const std::aray<double,5> &myarray)
{
	std::cout<< "length:" <<myarray.size();
}

int main(){
	std::aray<double, 5> myarray {9.0, 7.4, 3.2, 5.6, 1.8};
	printLength(myyarray);

	return 0;
}

#include <iostream>
#include <array>
#include <algorithm>

int main(){
	std::array<int, 5> myarray {7,3,1,9,5};
	std::sort(myarray.begin(), myarray.end());

	for (const auto &element : myarray)
		std::cout <<element << " ";
	return 0;
}
