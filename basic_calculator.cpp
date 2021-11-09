// Basic calculator V1 Airidas Rupšas

#include <iostream>

using namespace std;

int main()
{

float x, y, z; // Numbers
char zenklas;

        // Inputting data
    cout << "Basic calculator V1" << endl << "Hello, please input your first number: " << endl;
    cin >> x;
    cout << "Select a operator (+, -, *, /): " << endl;
    cin >> zenklas;
    cout << "Input your second number: " << endl;
    cin >> y;

    switch(zenklas) {
        case '+':
        cout << "Answer: " << x + y << endl << "Have a good day. ";
        break;

        case '-':
        cout << "Answer: " << x - y << endl << "Have a good day. ";
        break;

        case '*':
        cout << "Answer: " << x * y << endl << "Have a good day. ";
        break;

        case '/':
        cout << "Answer: " << x / y << endl << "Have a good day. ";
        break;

        default: 
        cout << "You have entered an invalid operator. Please try again. ";
    }

    return 0;
}