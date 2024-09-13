#include <iostream>

using namespace std;

int main(){
	//Initialize three doubles temp1, temp2, temp3 set them equal to 0 in case they are left empty so that the code doesn't break
	double temp1 = 0, temp2 = 0, temp3 = 0; 

	//Initialize a double variable tempChange1 to hold the difference between temp1 and temp2 and a double tempChange2 to hold the difference between temp2 and temp 3 and tempChangeChange the difference between each tempChange 
	double tempChange = 0;

	//prompt the user and then assign the variables
	cout << "Enter temperatures over the last three days:" << endl;
	cin >> temp1 >> temp2 >> temp3;		
	
	//validate all three temperatures are non negative. If negative cout. Invalid temperature input.
	if((temp1 < 0) or (temp2 < 0) or (temp3 <0)){
		cout << "Invalid temperature input";
		return 0;
	}

	//measure the first change in temperature by subtracting t1 from t2 and then assign that value to tempChange1 do the same for tempChange3 with temp1 and temp3
	tempChange = temp1 - temp2;

	//check if the temp is negative but random or possitive but random and makes sure that no two teperatures are the same
	//if (tempChange1 < tempChange2 
	// cout The temperature is changing unpredictably. and return 0 to end the program.
	if(((tempChange < 0) and (temp3 < temp2 or temp2 < temp1)) or ((tempChange > 0) and (temp3 > temp2 or temp2 > temp1)) or  (temp1 == temp2 or temp1 == temp3 or temp2 == temp3 )){
		cout << "The temperature is changing unpredicatbly.";
		return 0;
	} else if (tempChange < 0) {
		cout << "It's getting warmer!";
	} else if (tempChange > 0) {
		cout << "It's getting cooler!";
	}

	//if (tempChange1 < 0 and tempChange1 < tenoChange2) It's getting cooler! inverse for tempChange1 > 0
	//else if (tempChange2 > 0) It's getting warmer! -- same thing as above


	

	return 0;
}
