using System;
class HelloWorld {
    static void Main() {
        double x=0.4*Math.Pow(10,4);
        double y=-0.875;
        double g=-0.475*Math.Pow(10,-3);
        double w=1.9873,w1;
        w1=Math.Pow(Math.Abs(Math.Cos(x) - Math.Cos(y)), 1 + 2 * Math.Pow(Math.Sin(y), 2)) * (1 + g + Math.Pow(g, 2) / 2 + Math.Pow(g, 3) / 3 + Math.Pow(g, 4) / 4);
          
          Console.Write("За моїми розрахунками w1 ={0} для порівняння w={1} ",w1,w);

    } 
}
