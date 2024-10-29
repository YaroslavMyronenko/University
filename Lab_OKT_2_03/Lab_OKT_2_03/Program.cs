using System;

class HelloWorld {
    static void Main () {
        double x, y, d;      
        x=Convert.ToDouble(Console.ReadLine());
        y=Convert.ToDouble(Console.ReadLine());
        if (y==x){
            d=Math.Pow((y+Math.Cos(x)),3)+0.5;
        }
        else if (y>x) {
            d=Math.Pow((y-Math.Cos(x)),3)+Math.Atan(Math.Cos(x));
        }
        else {
            d=Math.Pow((Math.Cos(x)-y),3)+Math.Atan(Math.Cos(x));
        }

        Console.WriteLine("За моїми розрахунками d = {0}",d);
    }
}
