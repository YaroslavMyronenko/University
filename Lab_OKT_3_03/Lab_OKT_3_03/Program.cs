using System;
using System.Globalization;

class Program
{
    static void Main()
    {
        Console.WriteLine("Введітть рядок символів :-->");
        string symvols = Console.ReadLine();
        Console.WriteLine("Цифри в рядку");
        foreach (char numbers in symvols)
        {
            if (char.IsDigit(numbers))
            {
                Console.Write(numbers);
            }
        }
    }
}
