#include <iostream> //Imports information so that your code can use cout and cin

using namespace std; //makes it so you dont need to use std for everything

int main(){
    //Create three variables int budget, int miles, int nights, double tCost = 0, double wholeTrip
    int budget, miles, nights = 0; //creates all three variables and assignes them all 0
    double tCost = 0; //Will hold the total cost
    double wholeTrip = 0; //Will say how much money is left after costs for where people stay

    //Prompt the user for the three inputs
    //What is your budget?, How many miles will you drive?, How many nights do you want to spend there?
    cout << "What is your budget?" << endl; //endl is the same as \n it acts as a return key
    cin >> budget;

    cout << "How many miles will you drive?" << endl;
    cin >> miles;

    cout << "How many nights do you want to spend there?" << endl;
    cin >> nights;

    //make sure each are valid inputs (no negatives)
    //|| means or you can use either or or || as seen by using both
    if (budget < 0 || miles < 0 or nights < 0){ //checks if any one of these or more are negative
        cout << "Invalid input(s).";
        return 0; //return 0 will then stop the program if there are invalid inputs by returning 0
    }

    //add the miles * 0.16 to the tCost
    tCost += miles * 0.16;

    //subtract Budget - tCost = wholeTrip
    wholeTrip = budget - tCost;

    //divide wholeTrip by the number of nights
    wholeTrip /= nights;

    //if whole trip is less than 20$ cant go, if less than 50$ you can go camping, if less than 100$ you can afford a cheaper motel, else nice hotel.
    if (wholeTrip < 20){ 
        cout << "This trip is outside your budget.";
    } else if (wholeTrip < 50){//counts backwards so you don't need to do wholeTrip >= 20 && < 50 just less than 50
        cout << "You can afford to go camping on this trip.";
    } else if (wholeTrip < 100){
        cout << "You can afford to stay in a cheap motel on this trip.";
    } else {
        cout << "You can afford to stay in a nice hotel on this trip.";
    }

    return 0; //ends the program if not already ended by invalid inputs
}





