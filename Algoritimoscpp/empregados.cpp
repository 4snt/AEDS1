#include <iostream>
#include <string>
using namespace std;

char sn;
struct Ficha {
    string rua, nome;
    string inscri;
    string cep;
    int numero;
    long long cpf;  
};

int main() {
    const int MaxEmpregados = 1000;
    Ficha empregados[MaxEmpregados];

    cout << "--------------------------------\n";
    cout << "Bem vindo a ficha de empregados-\n";
    cout << "Digite a matricula do empregado:\n";
    cout << "--------------------------------\n";
    
    int matricula;
    cin >> matricula;
    
    if (matricula >= 0 && matricula < MaxEmpregados) {

        cout << "--------------------------------\n";
        cout << "Ficha do colaborador Matricula: [" << matricula << "]\n";
        cout << "Rua: " << empregados[matricula].rua << "\n";
        cout << "Nome: " << empregados[matricula].nome << "\n";
        cout << "Inscricao: " << empregados[matricula].inscri << "\n";
        cout << "CEP: " << empregados[matricula].cep << "\n";
        cout << "Numero: " << empregados[matricula].numero << "\n";
        cout << "CPF: " << empregados[matricula].cpf << "\n";
        cout << "--------------------------------\n";
        cout << "Deseja alterar algum dado do funcionario?[s/n]";
        cin >> sn;
        if (sn==s || sn== S){
            cout << "------------------------------\n";
            cout << "Escolha oque deseja alterar na ficha do funcionario\n";
        }
        
        cout << "--------------------------------\n";
        cout << "-Digite as informacoes do empregado:\n";
        cout << "Rua: ";
        cin >> empregados[matricula].rua;
        cout << "Nome: ";
        cin >> empregados[matricula].nome;
        cout << "Inscricao: ";
        cin >> empregados[matricula].inscri;
        cout << "CEP: ";
        cin >> empregados[matricula].cep;
        cout << "Numero: ";
        cin >> empregados[matricula].numero;
        cout << "CPF: ";
        cin >> empregados[matricula].cpf;
    } else {
        cout << "Matricula invalida. Digite novamente:\n";
        cin >> matricula;
    }
    
    return 0;
}
