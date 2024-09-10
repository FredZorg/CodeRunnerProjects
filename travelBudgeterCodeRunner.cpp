#include <iostream>

using namespace std;

int main(){
    //Create three variables int budget, int miles, int nights, double tCost = 0, double wholeTrip
    int budget, miles, nights = 0;
    double tCost = 0;
    double wholeTrip = 0;

    //Prompt the user for the three inputs
    //What is your budget?, How many miles will you drive?, How many nights do you want to spend there?
    cout << "What is your budget?" << endl;
    cin >> budget;

    cout << "How many miles will you drive?" << endl;
    cin >> miles;

    cout << "How many nights do you want to spend there?" << endl;
    cin >> nights;

    //make sure each are valid inputs (no negatives)
    if (budget < 0 || miles < 0 || nights < 0){
        cout << "Invalid input(s).";
        return 0;
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
    } else if (wholeTrip < 50){
        cout << "You can afford to go camping on this trip.";
    } else if (wholeTrip < 100){
        cout << "You can afford to stay in a cheap motel on this trip.";
    } else {
        cout << "You can afford to stay in a nice hotel on this trip.";
    }

    return 0;
}





