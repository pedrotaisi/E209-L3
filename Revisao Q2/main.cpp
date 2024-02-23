#include <iostream>

using namespace std;

int main() {

    int number;

    cout << "Entrada: ";

    while (true) {
        cin >> number;

        if (number >= 0 and number <= 50)
            break;
        else
            cout << "numero invalido" << endl;
    }

    cout << "Saida: " << endl;

    for(int i = 1; i <= number; i++){

        cout << "Resto da divisao por " << number << " " << " por " << i << ": " << number%i << endl;
    }
    return 0;
}
