#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	char carType;
	int daysRenting = 0;
	double total = 0.0;

	//prompt the user for carType 
	//Which car type (A, B, C, or D) would you like to rent?
	cout << "Which car type (A, B, C, or D) would you like to rent?" << endl;
	cin >> carType;

	//prompt the user for daysRenting
	//How many days would you like to rent this car?
	cout << "How many days would you like to rent this car?" << endl;
	cin >> daysRenting;

	//check that both carType and daysRenting are valid ie daysRenting is positive and carType is A, B, C, or D
	if (!((carType == 'A') or (carType == 'B') or (carType == 'C') or (carType == 'D')) or (daysRenting < 1)){
		cout << "Please enter valid input.";
		return 0;
	}	

	//Total = 1.23 × (base price + no. of days × price per day)
        //make a switch and then change total based off of each carType
	switch (carType){
		case 'A':
			total =  1.23 * (80 + daysRenting * 15);
			break;

		case 'B':
                        total =  1.23 * (110 + daysRenting * 25);
                        break;

		case 'C':
                        total =  1.23 * (160 + daysRenting * 35);
                        break;

		case 'D':
                        total =  1.23 * (220 + daysRenting * 45);
                        break;
		default:
			cout << "Please enter valid input.";
			return 0;
		}
	cout << "Your total is $" << fixed << setprecision(2) << total; 

	//print Your total is $ round to the nearest 100th
	return 0;
}




