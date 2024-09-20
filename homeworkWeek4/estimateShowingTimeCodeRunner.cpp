#include <iostream>

using namespace std;

double calculateSowingTime(double area, char sMachine){
    if (area < 0){
        return 0;
    }

    switch(sMachine){
        case 'W':
            return (area * 12.0) / 8.0; 
            break;

        case 'X':
            return (area * 10.0) / 3; 
            break;

        case 'Y':
            return (area * 7.0) / 2.0; 
            break;

        case 'Z':
            return (area * 8.0) / 7.0; 
            break;

        default:
            return 0;
    }

    return 0;
}

int main(){
    char sMachine;
    double area;
    double time;

    cout << "Enter area of the farmland in sq ft:" << endl;
    cin >> area;

    cout << "Enter the type of sowing machine to be used:" << endl;
    cin >> sMachine;

    time = calculateSowingTime(area, sMachine);

    if (time <= 0){
        cout << "Area or machine type is invalid. Time cannot be calculated.";
    } else {
        cout << "The time taken is: " << time << " minutes.";
    }

    


    return 0;
}