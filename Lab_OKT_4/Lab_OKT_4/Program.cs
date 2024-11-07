using System;
using System.Numerics;
using Microsoft.VisualBasic;

class Program
{
    // Метод обміну елементів
    static void Swap(ref int e1, ref int e2)
    {
        var temp = e1;
        e1 = e2;
        e2 = temp;
    }

    // Сортування змішуванням (шейкерне сортування)
    static int[] ShakerSort(int[] arrayNumbers)
    {
        for (var i = 0; i < arrayNumbers.Length / 2; i++)
        {
            var swapFlag = false;
            // Прохід зліва направо
            for (var j = i; j < arrayNumbers.Length - i - 1; j++)
            {
                if (arrayNumbers[j] > arrayNumbers[j + 1])
                {
                    Swap(ref arrayNumbers[j], ref arrayNumbers[j + 1]);
                    swapFlag = true;
                }
            }

            // Прохід справа наліво
            for (var j = arrayNumbers.Length - 2 - i; j > i; j--)
            {
                if (arrayNumbers[j - 1] > arrayNumbers[j])
                {
                    Swap(ref arrayNumbers[j - 1], ref arrayNumbers[j]);
                    swapFlag = true;
                }
            }

            // Якщо обмінів не було
            if (!swapFlag)
            {
                break;
            }
        }
        return arrayNumbers;
    }

    // Метод бінарного пошуку з використанням циклу
    static int BinarySearch(int[] array, int searchedValue, out int comparisons)
    {
        int left = 0;
        int right = array.Length - 1;
        comparisons = 0;

        // Поки не зійшлись межі робочої зони масиву
        while (left <= right)
        {
            comparisons++;
            // Індекс середнього елементу
            var middle = (left + right) / 2;

            if (searchedValue == array[middle])
            {
                return middle;
            }
            else if (searchedValue < array[middle])
            {
                // Звуження робочої зони масиву справа
                right = middle - 1;
            }
            else
            {
                // Звуження робочої зони масиву зліва
                left = middle + 1;
            }
        }
        // Нічого не знайдено
        return -1;
    }

    static void Main()
    {
        int size = 10000;
        int[] testArray = new int[size];
        Random rand = new Random();
        Console.WriteLine("\n=====================================================================");
        Console.WriteLine("Початковий масив: -->");
        for (int a = 0; a < testArray.Length; a++){
            testArray[a] = rand.Next(0, 10000);
            Console.Write(testArray[a] + ", ");
        }      
        Console.WriteLine("\n=====================================================================");
        ShakerSort(testArray); //Викликаю функцію для сортування
        Console.WriteLine("Масив впорядкований шейкерним способом:  ");
        foreach (int num in testArray)
        {
            Console.Write(num + ", ");
        }
            Console.WriteLine("\n=====================================================================");
        // Введення випадкового шуканого числа
        int wanted_number = rand.Next(0, 10000); // випадкове число для пошуку в масиві
        int comparisons;
        
        // Бінарний пошук невідомого числа
        int resultIndex = BinarySearch(testArray, wanted_number, out comparisons);

        // Виведення результату пошуку
        if (resultIndex != -1)
        {
            Console.WriteLine("Значення " + wanted_number + " знайдено :) на індексі " + resultIndex);
        }
        else
        {
            Console.WriteLine("Значення " + wanted_number + " не знайдено в масиві :(");
        }
        Console.Write("Кількість порівнянь під час бінарного пошуку: " + comparisons);
        Console.WriteLine("\n=====================================================================");   
    }
}