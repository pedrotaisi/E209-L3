#include <iostream>

using namespace std;

void Info(int vetor[]) {

    int pares = 0;
    int impares = 0;
    int positivos = 0;
    int negativos = 0;

    for (int i = 0; i < 5; i++) {

        if (vetor[i] % 2 == 0)
            pares++;
        else
            impares++;

        if (vetor[i] >= 0)
            positivos++;
        else
            negativos++;
    }

    cout << "Quantidade de numeros pares: " << pares << endl;
    cout << "Quantidade de numeros impares: " << impares << endl;
    cout << "Quantidade de numeros positivos : " << positivos << endl;
    cout << "Quantidade de numeros negativos : " << negativos << endl;

}

int main() {

    int vetor[10];
    int number;

    cout << "Entrada: ";

    cin >> number;

    for(int j = 0; j < number; j++){

        for(int i = 0; i < 5; i++)
            cin >> vetor[i];

        cout << "Saida: " << endl;
        Info(vetor);
    }



    return 0;
}
