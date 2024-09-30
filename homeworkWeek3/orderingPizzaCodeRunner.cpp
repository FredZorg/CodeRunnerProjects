#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    //Innitialize a Char variable for the pizza size and a int variable for the topping amount and a double for the price
    char size;
    int toppings = 0;
    double price = 0;

    //prompt the user for both the Char and the int variable
    //for char What size pizza would you like to order?
    cout << "What size pizza would you like to order?" << endl;
    cin >> size;
    
    //for int How many toppings do you want?
    cout << "How many toppings do you want?" << endl;
    cin >> toppings;

    //make sure size is upper case
    size = toupper(size);

    // make sure the int is non negative and the char is valid
    if (toppings < 0 && (size != 'S' && size != 'M' && size != 'L' )){
        cout << "Invalid pizza size and number of toppings.";
        return 0;
    } else if (size != 'S' && size != 'M' && size != 'L' ) { //can use either && or and
        cout << "Invalid pizza size.";
        return 0;
    } else if (toppings < 0) {
        cout << "Invalid number of toppings.";
        return 0;
    }

    if (size == 'S'){

        price += 8.00;

    } else if (size == 'M') {

        price += 10.00;

    } else if (size == 'L') {

        price += 14.00;

    }
    

    //charge .99 for s, 1.99 for m, 2.99 for large per topping
    if (size == 'S'){

        price += toppings * 0.99;
        cout << "Your total is $" << fixed << setprecision(2) << price;

    } else if (size == 'M') {

        price += toppings * 1.99;
        cout << "Your total is $" << fixed << setprecision(2) << price;

    } else if (size == 'L') {

        price += toppings * 2.99;
        cout << "Your total is $" << fixed << setprecision(2) << price;

    }

    


    return 0;
}
