using System;

class Program
{
    static void Main()
    {
        Random nambers = new Random();
        int rows = 10;
        int cols = 10;
        double[,] matrix = new double[rows, cols];
        for (int r = 0; r < rows; r++)
        {
            for (int c = 0; c < cols; c++)
            {
                matrix[r, c] = Math.Round(nambers.NextDouble() * (99.0 - 10.0) + 10.0, 2);
            }
        }
        Console.WriteLine("Початкова матриця : ");
        Console.WriteLine();
        for (int ro = 0; ro < rows; ro++)
        {
            for (int co = 0; co < cols; co++)
            {
                Console.Write(matrix[ro, co] + " ");
            }
            Console.WriteLine();
        }
        Console.WriteLine("");
        Console.WriteLine("");
        for (int r = 0; r < rows; r++)
        {
            int maxindex = 0;
            int minindex = 0;
            for (int c = 1; c < cols; c++)
            {
                if (matrix[r, c] > matrix[r, maxindex])
                {
                    maxindex = c;
                }
                if (matrix[r, c] < matrix[r, minindex])
                {
                    minindex = c;
                }
            }
            double temp_max = matrix[r, 0];
            matrix[r, 0] = matrix[r, maxindex];
            matrix[r, maxindex] = temp_max;

            double temp_min = matrix[r, cols - 1];
            matrix[r, cols - 1] = matrix[r, minindex];
            matrix[r, minindex] = temp_min;
        }
        Console.WriteLine("\nМодифікований масив");
        PrintMatrix(matrix);
    }
    static void PrintMatrix(double[,] matrix)
    {
        for (int r = 0; r < matrix.GetLength(0); r++)
        {
            for (int c = 0; c < matrix.GetLength(1); c++)
            {
                Console.Write(matrix[r, c] + " ");
            }
            Console.WriteLine();
        }
    }
}
