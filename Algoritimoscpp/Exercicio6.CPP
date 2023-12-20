#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int escolha;

    cout << "Escolha uma opcao (1 a 6): ";
    cin >> escolha;

    switch (escolha) {
        case 1: {
            int vet[20];
            for (int i = 0; i < 20; i++) {
                cout << "Digite o " << i + 1 << "º número: ";
                cin >> vet[i];
            }
            cout << "Números digitados: ";
            for (int i = 0; i < 20; i++) {
                int j=i-1;
                if (vet[i]=!vet[j]){
                cout << vet[i] << " ";
                }
            }
            cout << endl;

            break;
        }
        case 2:
            // Code for case 2
            break;
        case 3:
            // Code for case 3
            break;
        case 4:
            // Code for case 4
            break;
        case 5:
            // Code for case 5
            break;
        case 6:
            // Code for case 6
            break;
        default:
            cout << "Escolha inválida." << endl;
            break;
    }

    return 0;
}
