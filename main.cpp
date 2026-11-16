#include <iostream>
#include <vector>
using namespace std;

int main() {

    // VARIABLE DECLARATION
    int a, op;
    double result;

    // INPUT: NUMBER OF VALUES
    cout << "================================\n";
    cout << "      MENU-DRIVEN CALCULATOR\n";
    cout << "================================\n";

    cout << "\nHow many numbers do you want to operate? ";
    cin >> a;

    // VALIDATE NUMBER OF INPUTS
    if (a <= 0) {
        cout << "\nInvalid Input!";
        return 0;
    }

    // TAKE NUMBERS FROM USER
    vector<double> b(a);

    cout << "\nEnter your numbers:\n";

    for (int i = 0; i < a; i++) {
        cin >> b[i];
    }

    // SELECT OPERATION
    cout << "\n========== OPERATIONS ==========\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Square\n";
    cout << "6. Cube\n";

    cout << "\nEnter your choice: ";
    cin >> op;

    // CALCULATIONS

    if (op == 1) {                  // ADDITION

        result = 0;
        for (int i = 0; i < a; i++) {
            result += b[i];
        }
        cout << "\nResult = " << result << endl;
    }

    else if (op == 2) {             // SUBTRACTION

        result = b[0];

        for (int i = 1; i < a; i++) {
            result -= b[i];
        }
        cout << "\nResult = " << result << endl;
    }

    else if (op == 3) {             // MULTIPLICATION

        result = 1;

        for (int i = 0; i < a; i++) {
            result *= b[i];
        }
        cout << "\nResult = " << result << endl;
    }

    else if (op == 4) {             // DIVISION

        if (a != 2) {
            cout << "\nPlease enter exactly 2 numbers for division!";
            return 0;
        }

        if (b[1] == 0) {
            cout << "\nCannot divide by zero!";
            return 0;
        }

        result = b[0] / b[1];
        cout << "\nResult = " << result << endl;
    }

    else if (op == 5) {             // SQUARE

        if (a != 1) {
            cout << "\nPlease enter exactly 1 number for square!";
            return 0;
        }

        result = b[0] * b[0];
        cout << "\nResult = " << result << endl;
    }

    else if (op == 6) {             // CUBE

        if (a != 1) {
            cout << "\nPlease enter exactly 1 number for cube!";
            return 0;
        }

        result = b[0] * b[0] * b[0];
        cout << "\nResult = " << result << endl;
    }

    else {                          // INVALID OPERATION

        cout << "\nInvalid Operation!";
        return 0;
    }

    cout << "\nThank you for using the calculator!\n";
    return 0;
}
