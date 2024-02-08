using System;

class CampoMinado {
    static Random rnd = new Random(); // Declara um objeto Random para gerar números aleatórios
    static int tamanho = 6; // Define o tamanho da grade

    static void PreencherMatriz(int[,] matriz) {
        for (int i = 0; i < tamanho; ++i) {
            for (int j = 0; j < tamanho; ++j) {
                matriz[i, j] = rnd.Next(2); // Gera números aleatórios entre 0 e 1
            }
        }
    }

    static void ImprimirMatriz(int[,] matriz) {
        for (int i = 0; i < tamanho; ++i) {
            for (int j = 0; j < tamanho; ++j) {
                Console.Write(matriz[i, j] + " "); // Usa Console.Write em vez de Console.WriteLine para imprimir na mesma linha
            }
            Console.WriteLine(); // Move WriteLine aqui para imprimir cada linha em uma nova linha
        }
    }

    static int ContadorMatriz(int[,] matriz, int row, int col) {
        int contador = 0;
        for (int i = Math.Max(0, row - 1); i <= Math.Min(tamanho - 1, row + 1); ++i) {
            for (int j = Math.Max(0, col - 1); j <= Math.Min(tamanho - 1, col + 1); ++j) {
                if (i != row || j != col) {
                    contador += matriz[i, j];
                }
            }
        }
        return contador;
    }

    static void Main() {
        int[,] campoMinado = new int[tamanho, tamanho]; // Declaração correta do array
        string simOuNao; // Declaração correta da variável
        do {
            PreencherMatriz(campoMinado);
            Console.WriteLine("Campo Minado:");
            ImprimirMatriz(campoMinado);
            // Calcula e imprime a quantidade de minas nas vizinhanças dos elementos não minados
            Console.WriteLine("Quantidade de minas nas vizinhanças dos elementos não minados:");
            for (int i = 0; i < tamanho; ++i) {
                for (int j = 0; j < tamanho; ++j) {
                    if (campoMinado[i, j] == 0) {
                        Console.WriteLine("a[" + i + "][" + j + "]: " + ContadorMatriz(campoMinado, i, j) + " minas");
                    }
                }
            }
            Console.WriteLine("Deseja jogar novamente? (sim/nao)");
            simOuNao = Console.ReadLine();
        } while (simOuNao.ToLower() == "sim"); // Usa ToLower() para converter a entrada em minúsculas para comparação sem diferenciação de maiúsculas e minúsculas
    }
}