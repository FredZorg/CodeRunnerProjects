#include <iostream>

using namespace std;

double calculateRoomArea(double l, double w){
    if((l <= 0) or (w <= 0)){
        return -1;
    }

    return l * w;
}

int main(){
    double l, w;

    cout << "Enter the length of the room in ft:" << endl;
    cin >> l;

    cout << "Enter the width of the room in ft:" << endl;
    cin >> w;

    double area = calculateRoomArea(l, w);

    if (area < 0){
        cout << "Length or width is invalid. Area cannot be calculated.";
    } else {
        cout << "The area is: "<< area << " sq ft.";
    }

    return 0;
}