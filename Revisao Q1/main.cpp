#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int orange;

    cout << "Entrada: ";

    cin >> orange;

    cout << endl;
    cout << "Saida: " << endl;

    cout << fixed << setprecision(2);

    if (orange >= 12) {
        cout << "preco da unidade: R$0.65" << endl;
        cout << "preco total: " << orange * 0.65 << endl;
    } else {
        cout << "preco da unidade: R$0.80" << endl;
        cout << "preco total: " << orange * 0.80 << endl;
    }


    return 0;
}
