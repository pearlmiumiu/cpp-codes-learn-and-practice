#include <iostream>
using namespace std;

// cout<<”the number of adults to be served”<<endl;
// cin<<adultNum<<endl;

// cout<<”the number of children to be served”<<endl;
// cin<<childNum<< endl;



struct customerBill {
	int numOfAdult;
	int numOfChildren;
	double adultCost;
	double childCost;
	double dessertCost;
	double roomFee;
	double tiptaxRate;
	int depositAmount


	customerBill(int n_adult,
				int n_Children,
				double aCost,
				double cCost,
				double dCost,
				double rFee,
				double tRate
				int deposit){
		numOfAdult = n_adult;
		numOfChildren = n_Children;
		adultCost = aCost;
		childCost = cCost;
		dessertCost = dCost;
		roomFee = rFee;
		tiptaxRate = tRate;
		depositAmount=deposit
	}

	void printBill(){
		double totalcost = 0;
		std::cout << "Total cost for adult meals: $ " << numOfAdult * adultCost  << std::endl;
		std::cout << "Total cost for child meals: $ " << numOfChildren * childCost << std::endl;
		std::cout << "Total cost for dessert    : $ " << (numOfAdult+numOfChildren) * dessertCost << std::endl;
		totalcost += numOfAdult * adultCost;
		totalcost += numOfChildren * childCost;
		totalcost += (numOfAdult+numOfChildren) * dessertCost;
		std::cout << "Total food cost.          : $ " << totalcost << std::endl;
		std::cout << "Plus tip and tax          : $ " << totalcost * tiptaxRate << std::endl;
		totalcost += totalcost * tiptaxRate;
		std::cout << "Plus room fee.            : $ " << roomFee << std::endl;
		totalcost += roomFee;
		std::cout << "Less deposit              : $ " << deposit<< std::endl;
		totalcost -= deposit; 
		std::cout << "Balance Due               : $ " << totalcost << std::endl;

	}
};

int main() {


// cout<<”the number of children to be served”<<endl;
// cin<<childNum<< endl;
	int numOfAdult;
	int numOfChildren ;
	double adultCost;
	double childCost;
	double dessertCost;
	double roomFee;
	double tiptaxRate;
	int depositAmount

	cout<<"the number of adults to be served"<<endl;
	cin >> numOfAdult;

	cout<<"the number of children to be served"<<endl;
	cin >> numOfChildren;

	cout<<"the cost per adult's meal"<<endl;
	cin >> adultCost;

	cout<<"the cost per child's meal"<<endl;
	cin >> childCost;

	cout<<"the cost for dessert"<<endl;
	cin >> dessertCost;


	cout<<"the cost for room"<<endl;
	cin >> roomFee;

	cout<<"the percentage for tip and tax"<<endl;
	cin >> tiptaxRate;

	cout<<"the deposit deducted from the room fee"<<endl;
	cin >> depositAmount;




	customerBill* pbill = new customerBill(numOfAdult, 
		numOfChildren, adultCost, childCost, 
		dessertCost, roomFee, tiptaxRate);

	pbill->printBill();
	
}