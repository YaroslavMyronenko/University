using System;

class Program
{
    static void Main()
    {

        double[] numbers = new double[25];
        Random rnd = new Random();
        Console.WriteLine("Масив: ");
        for (int a = 0; a < numbers.Length; a++)
        {
            numbers[a] = Math.Round(rnd.NextDouble() * 100.0, 2);
            Console.Write(numbers[a] + ", ");
        }
        int min_index = 0;
        for (int b = 1; b < numbers.Length; b++)
        {
            if (numbers[b] < numbers[min_index])
            {
                min_index = b;
            }
        }
        Console.WriteLine("\nНовий масив");
        Console.WriteLine("Найменший елемент:", min_index);      
        double temp = numbers[0];
        numbers[0] = numbers[min_index];
        numbers[min_index] = temp;
        for (int j = 0; j < numbers.Length; j++)
        {
            Console.Write(numbers[j] + ", ");
        }
    }
}