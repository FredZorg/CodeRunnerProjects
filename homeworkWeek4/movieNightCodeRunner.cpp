#include <iostream>

using namespace std;

int main(){
    //initialize one ints called choice
    int choice = 0;
    //Prompt the user "Select a category: (1)Brass (2)Woodwind (3)Percussion" endl and assign it to choice
    cout << "Select the genre: (1) Animation (2) Adventure" << endl;
    cin >> choice;

    //switch statement (choice)
    switch (choice){
        case 1: //case 1 cout "Select the director: (1) Pete Docter (2) Brad Bird (3) Andrew Stanton" and assign it to choice
            cout << "Select the director: (1) Pete Docter (2) Brad Bird (3) Andrew Stanton"  << endl;
            cin >> choice;
            
                switch (choice){
                    case 1: //Select the movie
                        cout << "Select the movie: (1) Monsters, Inc. (2) Inside Out" << endl;
                        cin >> choice;
                            switch (choice){
                                case 1:
                                    cout << "You have reserved the movie: Monsters, Inc.";
                                    break; 

                                case 2:
                                    cout << "You have reserved the movie: Inside Out";
                                    break;

                                default:
                                    cout << "Please enter a valid input";
                            }
                        break;

                    case 2: //Select the movie
                        cout << "Select the movie: (1) The Incredibles (2) Ratatouille" << endl;
                        cin >> choice;
                            switch (choice){
                                case 1:
                                    cout << "You have reserved the movie: The Incredibles";
                                    break; 

                                case 2:
                                    cout << "You have reserved the movie: Ratatouille";
                                    break;

                                default:
                                    cout << "Please enter a valid input";
                                }
                            break;

                    case 3: //Select the movie
                        cout << "Select the movie: (1) Finding Nemo (2) WALL-E" << endl;
                        cin >> choice;
                            switch (choice){
                                case 1:
                                    cout << "You have reserved the movie: Finding Nemo";
                                    break; 

                                case 2:
                                    cout << "You have reserved the movie: WALL-E";
                                    break;

                                default:
                                    cout << "Please enter a valid input";
                            }
                        break;

                        default: 
                            cout << "Please enter a valid input";
            }
        break;

        case 2: //case 1 cout "Select the director: (1) Steven Spielberg (2) Jon Favreau (3) Robert Zemeckis" and assign it to choice
            cout << "Select the director: (1) Steven Spielberg (2) Jon Favreau (3) Robert Zemeckis" << endl;
            cin >> choice;
            
                switch (choice){
                    case 1: //Select the movie
                        cout << "Select the movie: (1) E.T. the Extra-Terrestrial (2) The BFG" << endl;
                        cin >> choice;
                            switch (choice){
                                case 1:
                                    cout << "You have reserved the movie: E.T. the Extra-Terrestrial";
                                    break; 

                                case 2:
                                    cout << "You have reserved the movie: The BFG";
                                    break;

                                default:
                                    cout << "Please enter a valid input";
                            }
                        break;

                    case 2: //Select the movie
                        cout << "Select the movie: (1) The Jungle Book (2016) (2) Elf" << endl;
                        cin >> choice;
                            switch (choice){
                                case 1:
                                    cout << "You have reserved the movie: The Jungle Book (2016)";
                                    break; 

                                case 2:
                                    cout << "You have reserved the movie: Elf";
                                    break;

                                default:
                                    cout << "Please enter a valid input";
                                }
                            break;

                    case 3: //Select the movie
                        cout << "Select the movie: (1) Back to the Future (2) Who Framed Roger Rabbit" << endl;
                        cin >> choice;
                            switch (choice){
                                case 1:
                                    cout << "You have reserved the movie: Back to the Future";
                                    break; 

                                case 2:
                                    cout << "You have reserved the movie: Who Framed Roger Rabbit";
                                    break;
                                
                                default:
                                    cout << "Please enter a valid input";
                            }
                        break;

                        default: 
                            cout << "Please enter a valid input";
            }
        break;

        
        default: //default for if the first input does not work "Please enter a valid input"
            cout << "Please enter a valid input";
        }

    return 0;
}