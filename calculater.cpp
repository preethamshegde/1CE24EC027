#include <iostream>
#include <cmath>  
#include <limits> 

using namespace std;

void showMenu() {
    cout << "\n--- Scientific Calculator ---\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power (x^y)\n";
    cout << "6. Square root\n";
    cout << "7. Sine (sin x)\n";
    cout << "8. Cosine (cos x)\n";
    cout << "9. Tangent (tan x)\n";
    cout << "10. Logarithm (log base 10)\n";
    cout << "11. Natural log (ln)\n";
    cout << "0. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    int choice;
    double a, b;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << a + b << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << a - b << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << a * b << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                if (b == 0)
                    cout << "Error: Division by zero.\n";
                else
                    cout << "Result: " << a / b << endl;
                break;
            case 5:
                cout << "Enter base and exponent: ";
                cin >> a >> b;
                cout << "Result: " << pow(a, b) << endl;
                break;
            case 6:
                cout << "Enter a number: ";
                cin >> a;
                if (a < 0)
                    cout << "Error: Negative input.\n";
                else
                    cout << "Result: " << sqrt(a) << endl;
                break;
            case 7:
                cout << "Enter angle in degrees: ";
                cin >> a;
                cout << "Result: " << sin(a * M_PI / 180) << endl;
                break;
            case 8:
                cout << "Enter angle in degrees: ";
                cin >> a;
                cout << "Result: " << cos(a * M_PI / 180) << endl;
                break;
            case 9:
                cout << "Enter angle in degrees: ";
                cin >> a;
                cout << "Result: " << tan(a * M_PI / 180) << endl;
                break;
            case 10:
                cout << "Enter a number: ";
                cin >> a;
                if (a <= 0)
                    cout << "Error: Logarithm undefined.\n";
                else
                    cout << "Result: " << log10(a) << endl;
                break;
            case 11:
                cout << "Enter a number: ";
                cin >> a;
                if (a <= 0)
                    cout << "Error: Natural log undefined.\n";
                else
                    cout << "Result: " << log(a) << endl;
                break;
            case 0:
                cout << "Exiting calculator.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
