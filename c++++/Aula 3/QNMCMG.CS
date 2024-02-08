using System;

class Program {
    static void line() {
        Console.WriteLine("----------------------");
    }

    static void heart() {
        Console.WriteLine("  ---   ---  ");
        Console.WriteLine(" ----- ----- ");
        Console.WriteLine("*************");
        Console.WriteLine(" *********** ");
        Console.WriteLine("  *********  ");
        Console.WriteLine("   *******   ");
        Console.WriteLine("    *****    ");
        Console.WriteLine("     ***     ");
        Console.WriteLine("      *      ");
    }

    static void Main() {
        line();
        Console.WriteLine("Quer casar comigo? [s/n]");
        Console.WriteLine("Digite S ou N e Enter para confirmar");
        line();
        string simnao = Console.ReadLine();
        if (simnao == "s" || simnao == "S") {
            line();
            heart();
            Console.WriteLine("Vai ter que me dar o cuzin, certeza?");
            Console.WriteLine("Digite S ou N e Enter para confirmar");
            line();
            string simnaoo = Console.ReadLine();
            if (simnaoo == "s" || simnaoo == "S") {
                line();
                Console.WriteLine("Também quero casar, te dou o meu também.");
                line();
                
            } else {
                Console.WriteLine("Vai casar sim");
            }
        } else {
            Console.WriteLine("Vai casar sim");
        }
        Console.WriteLine("Pressione Enter para sair...");
        Console.ReadLine(); // Pause before exiting
    }
}