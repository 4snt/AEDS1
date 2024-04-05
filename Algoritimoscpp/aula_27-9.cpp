#include<iostream>
using namespace std;

int main() {
    int pesodoboi, boi_mais_gordo, segundo_boi_mais_gordo, boi_mais_magro, segundo_boi_mais_magro;
    char sn;
    boi_mais_gordo=-2;
    segundo_boi_mais_gordo=-2;
    boi_mais_magro=999999999;
    segundo_boi_mais_magro=999999998;

    do {
        cout << "Digite o peso do boi:\n";
        cin >> pesodoboi;
        boi_mais_gordo = (pesodoboi > boi_mais_gordo) ? pesodoboi : boi_mais_gordo;
        segundo_boi_mais_gordo = (pesodoboi < boi_mais_gordo && pesodoboi > segundo_boi_mais_gordo) ? pesodoboi : segundo_boi_mais_gordo;
        boi_mais_magro = (pesodoboi < boi_mais_magro) ? pesodoboi : boi_mais_magro;
            segundo_boi_mais_magro = (pesodoboi < segundo_boi_mais_magro && pesodoboi > boi_mais_magro) ? pesodoboi : segundo_boi_mais_magro;
        cout << "Deseja continuar?[s/n]\n";
        cin >> sn;

    } while (sn != 'n' && sn != 'N');

    cout << "---------------------------------------------------\n";
    cout <<"Peso do boi mais gordo: "<< boi_mais_gordo << "\n";
    cout << "Peso do segundo boi mais gordo: " << segundo_boi_mais_gordo << "\n";
    cout <<"Peso do boi mais magro: "<< boi_mais_magro << "\n";
    cout << "Peso do segundo boi mais magro: " << segundo_boi_mais_magro <<"\n";
    cout << "---------------------------------------------------\n";

    return 0;
}
