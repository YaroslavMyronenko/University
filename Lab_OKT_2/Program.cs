using System;

class HelloWorld {
    static void Main() {
       int a = 20;
       int b = 15;
       int c = 25;
       double p,s;
       p=(a+b+c)/2;
       s=Math.Sqrt(p*(p-a)*(p-b)*(p-c));

       Console.Write("Площа трикутника- {0}см2",s);

    }

    }



