using System;

class Program
{
    static void Main()
    {
        //Ініціалізація масиву
        int[] numbers = new int[25];
        Random rnd = new Random();
        for (int a = 0; a < numbers.Length; a++)
        {
            numbers[a] = rnd.Next(1, 100);
            Console.WriteLine($"{a + 1}: {numbers[a]:F2}");
        }
        int min_index = 0;
        for (int a = 1; a < numbers.Length; a++)
        {
            if (numbers[a] < numbers[min_index])
            {
                min_index = a;
            }
        }
            Console.WriteLine($"\nНайменший елемент: {numbers[min_index]:F2}");
            int temp = numbers[0];
            numbers[0] = numbers[min_index];
            numbers[min_index] = temp;
            Console.WriteLine("Новий масив");
            for (int j = 0; j < numbers.Length; j++)
            {
                Console.WriteLine($"{j + 1}: {numbers[j]:F2}");
            }
        
    }
}

