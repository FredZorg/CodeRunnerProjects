#include <iostream>

using namespace std;

int main(){
    //initialize one ints called choice
    int choice = 0;
    //Prompt the user "Select a category: (1)Brass (2)Woodwind (3)Percussion" endl and assign it to choice
    cout << "Select a category: (1)Brass (2)Woodwind (3)Percussion" << endl;
    cin >> choice;

    //switch statement (choice)
    switch (choice){
        case 1: //case 1 cout "Select an instrument: (1)Trumpet (2)Trombone" and assign it to choice
            cout << "Select an instrument: (1)Trumpet (2)Trombone"  << endl;
            cin >> choice;
            switch (choice){
                case 1: //case 1 cout "Your instrument will be $570"
                    cout << "Your instrument will be $570" << ".";
                    break;

                case 2: //case 2 cout "Your instrument will be $500"
                    cout << "Your instrument will be $500" << ".";
                    break;

                default: //defualt "Please enter a valid input."
                    cout << "Please enter a valid input.";
            }
        break;

        case 2: //choice 2 cout "Select an instrument: (1)Flute (2)Saxophone" and assign it to choice
            cout << "Select an instrument: (1)Flute (2)Saxophone"  << endl;
            cin >> choice;
            switch (choice){
                case 1: //cout "Your instrument will be $425"
                    cout << "Your instrument will be $425" << ".";
                    break;

                case 2: //cout "Your instrument will be $225"
                    cout << "Your instrument will be $225" << ".";
                    break;

                default: //defualt "Please enter a valid input."
                    cout << "Please enter a valid input.";
            }
        break;

        case 3: //choice 3 cout "Select an instrument: (1)Snare Drum (2)Cymbals" and assign it to choice
            cout << "Select an instrument: (1)Snare Drum (2)Cymbals"  << endl;
            cin >> choice;
            switch (choice){
                case 1: //choice 1 cout "Your instrument will be $275"
                    cout << "Your instrument will be $275" << ".";
                    break;

                case 2: //choice 2 cout "Your instrument will be $350"
                    cout << "Your instrument will be $350" << ".";
                    break;

                default: //defualt "Please enter a valid input."
                    cout << "Please enter a valid input.";
            }
        break;
    
        default: //default for if the first input does not work
            cout << "Please enter a valid input.";
        }

    return 0;
}