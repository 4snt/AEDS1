using System;

class aula04 {
    static void line() {
        Console.WriteLine("----------------------");
    }

    static void Main() {
        while (true) {
            line();
            Console.WriteLine("Escolha a operação:");
            Console.WriteLine("[1]- adição--------");
            Console.WriteLine("[2]- subtração-----");
            Console.WriteLine("[3]- Multiplicação-");
            Console.WriteLine("[4]- Divisão-------");
            Console.WriteLine("Digite S ou N e Enter para confirmar");
            line();
            int operacao = int.Parse(Console.ReadLine());

            switch (operacao) {
                case 1:
                    int n1 = 0, n2 = 0;
                    line();
                    Console.WriteLine("Digite o N1 da soma");
                    line();
                    n1 = int.Parse(Console.ReadLine());
                    line();
                    Console.WriteLine("Digite o N2 da soma");
                    line();
                    n2 = int.Parse(Console.ReadLine());
                    line();
                    Console.WriteLine("O Resultado é:" + (n1 + n2));
                    line();
                    break;
                case 2:
                    int s1 = 0, s2 = 0;
                    line();
                    Console.WriteLine("Digite o N1 da subtração");
                    line();
                    s1 = int.Parse(Console.ReadLine());
                    line();
                    Console.WriteLine("Digite o N2 da subtração");
                    line();
                    s2 = int.Parse(Console.ReadLine());
                    line();
                    Console.WriteLine("O Resultado é:" + (s1 - s2));
                    line();
                    break;
                case 3:
                    int x1 = 0, x2 = 0;
                    line();
                    Console.WriteLine("Digite o N1 da Multiplicação");
                    line();
                    x1 = int.Parse(Console.ReadLine());
                    line();
                    Console.WriteLine("Digite o N2 da Multiplicação");
                    line();
                    x2 = int.Parse(Console.ReadLine());
                    line();
                    Console.WriteLine("O Resultado é:" + (x1 * x2));
                    line();
                    break;
                case 4:
                    int d1 = 0, d2 = 0;
                    line();
                    Console.WriteLine("Digite o N1 da Divisão");
                    line();
                    d1 = int.Parse(Console.ReadLine());
                    line();
                    Console.WriteLine("Digite o N2 da Divisão");
                    line();
                    d2 = int.Parse(Console.ReadLine());
                    line();
                    Console.WriteLine("O Resultado é:" + (d1 / d2));
                    line();
                    break;
            }

            Console.WriteLine("Deseja continuar? (s/n)");
            string simnao = Console.ReadLine();
            if (simnao != "s" && simnao != "S")
                break;
        }
    }
}
