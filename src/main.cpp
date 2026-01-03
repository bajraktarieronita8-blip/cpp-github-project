#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Shkruaj nje numer pozitiv: ";
    cin >> num;

    if (num <= 0) {
        cout << "Numri nuk eshte pozitiv!" << endl;
    } else {
        cout << "Numrat nga 1 deri ne " << num << " jane:" << endl;
        int i = 1;
        while (i <= num) {
            cout << i << " ";
            i++;
        }
        cout << endl; // shton një linjë të re në fund
    }

    return 0;
}
