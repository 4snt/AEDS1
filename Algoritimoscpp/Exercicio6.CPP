#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int escolha;
    cout << "[1]- Verificador de numeros repetidos: \n";
    cout << "[2]- Identificador de numeros divisiveis:\n";
    cout << "[3]- Produto escalar de 2 vetores\n";
    cout << "[4]- Selecionador de maior matriz \n";
    cout << "[5]- Soma da diagonal principal \n";
    cout << "[6]- Gerador de Matriz Transposta \n";
    cout << "Escolha uma opcao (1 a 6): ";
    cin >> escolha;

    switch (escolha) {
        case 1: {
            int tamanho = 20;
            int vet[tamanho] ={-1};
            for (int i = 0; i < 20; i++) {
                cout << "Digite o " << i + 1 << "º número: ";
                cin >> vet[i];
            }
            cout << "Números digitados: ";
            for (int i = 0; i < 20; i++) {
                int j=i-1;
                if (vet[i]!=vet[j]){
                cout << vet[i] << " ";
                }
            }
            cout << endl;

            break;
        }
        case 2:{
            int tamanho = 10;
            int divisor;
            int vet[tamanho] ={-1};
            for (int i = 0; i < 10; i++) {
                cout << "Digite o " << i + 1 << "º número: ";
                cin >> vet[i];
            }
            cout << "digite o numero divisor:";
            cin  >> divisor;
            for (int i=0; i<10; i++){
                if (vet[i]%divisor ==0)
                    cout << vet[i] <<endl;
            }
        }
            break;
        case 3:{
            int tamanho=5;
            int produtoescalar=0;
            int veta[tamanho] ={-1};
            int vetb[tamanho] ={-1};
            for (int i=0; i<5; i++){
                cout << "Digite o " << i + 1 << "º número do vetor A: ";
                cin >> veta[i];
            }
            for (int i=0; i<5; i++){
                cout << "Digite o " << i + 1 << "º número do vetor B: ";
                cin >> vetb[i];
            }
            for (int i=0; i<5; i++){
                produtoescalar=produtoescalar+veta[i]*vetb[i];
            }
            cout << produtoescalar;
        }
            
            break;
        case 4:{
            int matrixa[4][4];
            int matrixb[4][4];
            int matrixmaior [4][4];
            cout << "A matriz A e:\n";
            srand(time(0));
            for (int i=0; i<4; i++){
                for (int j=0; j<4; j++){
                matrixa[i][j] = rand() %99+1;
                cout << matrixa[i][j] << " ";
                }
                cout << endl;
            }
            cout << "A matriz B e:\n";
            srand(time(0)+1);
            for (int i=0; i<4; i++){
                for (int j=0; j<4; j++){
                matrixb[i][j] = rand() %99+1;
                cout << matrixb[i][j] << " ";
                }
                cout << endl;
            }
            cout << "A matriz com os maiores numeros e:\n";
            for (int i=0; i<4; i++){
                for (int j=0; j<4; j++){
                if (matrixa[i][j] < matrixb [i][j]){
                    matrixmaior[i][j]=matrixb[i][j];
                }
                else{
                    matrixmaior[i][j]=matrixa[i][j];
                }
                cout << matrixmaior[i][j] <<" ";
                }
                cout << endl;
            }
        }
            break;
        case 5:{
            int matrix[3][3];
            for (int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cout << "Escreva o elemento [" << i <<"][" << j <<"] da matriz"<< endl;
                    cin  >> matrix[i][j];  
                }
            }
           for (int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cout << "[" << matrix[i][j] <<"]";
                }
                cout << endl;
           }
                cout << "A soma dos numeros acima da diagonal principal e:"<< matrix[0][1]+matrix[1][0]<< endl;
        }
            break;
        case 6:{
            struct matriz{
                int matrizinicial[3][3];
                int matriztransposta[3][3];
            };
            matriz matriz;
            for (int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cout << "Escreva o elemento [" << i <<"][" << j <<"] da matriz"<< endl;
                    cin  >> matriz.matrizinicial[i][j];
                }
            }
            for (int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    matriz.matriztransposta[j][i]=matriz.matrizinicial[i][j];
                }
            }
            cout <<"Sua Matriz é:\n";
            for (int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cout << "[" << matriz.matrizinicial[i][j] <<"]";
                }
                cout << endl;
            }
            cout <<"Sua Matriz Transposta é:\n";
            for (int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cout << "[" << matriz.matriztransposta[i][j] <<"]";
                }
                cout << endl;
            }

        }
            break;
        default:
            cout << "Escolha inválida." << endl;
            break;
    }

    return 0;
}
