// Basic calculator V1 Airidas Rupšas

#include <iostream>

using namespace std;

int main()
{

float x, y, z; // Skaičiai
char zenklas;

        // Sužinome pagrindinius duomenis
    cout << "Basic calculator V1" << endl << "Sveiki. Įveskite pirmą skaičių: " << endl;
    cin >> x;
    cout << "Pasirinkite ženklą (+, -, *, /): " << endl;
    cin >> zenklas;
    cout << "Įveskite antrą skaičių: " << endl;
    cin >> y;

    switch(zenklas) {
        case '+':
        cout << "Atsakymas: " << x + y << endl << "Geros dienos. ";
        break;

        case '-':
        cout << "Atsakymas: " << x - y << endl << "Geros dienos. ";
        break;

        case '*':
        cout << "Atsakymas: " << x * y << endl << "Geros dienos. ";
        break;

        case '/':
        cout << "Atsakymas: " << x / y << endl << "Geros dienos. ";
        break;

        default: 
        cout << "Įvestas neteisingas ženklas, bandykite iš naujo. ";
    }

    return 0;
}