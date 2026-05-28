 // MOKOENA MANTWA 9310010734089
#include <iostream>
using namespace std;

int main() {

    // Variables to store temperature readings
    int firstTemp, secondTemp, thirdTemp;

    // Input first temperature
    cout << "Enter first temperature: ";
    cin >> firstTemp;

    // Input second temperature
    cout << "Enter second temperature: ";
    cin >> secondTemp;

    // Check temperature increase
    if ((secondTemp - firstTemp) > 50) {

        cout << "Reduce fryer heat before taking third reading." << endl;

    }
    else if ((secondTemp - firstTemp) < 10) {

        cout << "Increase fryer heat before taking third reading." << endl;
    }

    // Input third temperature
    cout << "Enter third temperature: ";
    cin >> thirdTemp;

    // Check if oil temperature is correct
    if (thirdTemp >= 150 && thirdTemp <= 190) {

        cout << "You may start frying the Magwinyas." << endl;
    }
    else {

        cout << "Oil is not ready for frying." << endl;
    }

    return 0;
}
