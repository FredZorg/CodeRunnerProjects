#include <iostream>

using namespace std;

int main(){
    //create char fLetter
    char fLetter;

    //prompt the user "Enter the first letter of the company:" endl and assign it to fLetter
    cout << "Enter the first letter of the company:" << endl;
    cin >> fLetter;

    //switch statement for each letter
    cout << "Automobile manufacturer chosen: ";
    switch(fLetter){
        case 'B': //for B cout "BMW"
            cout << "BMW";
            break;

        case 'H': //for H cout "Honda"
            cout << "Honda";
            break;

        case 'V': //for V cout "Volkswagen"
            cout << "Volkswagen";
            break;

        case 'T': //for T cout "Tesla"
            cout << "Tesla";
            break;

        default: //defualt "Invalid"
            cout << "Invalid";
    }
    
    return 0;
}