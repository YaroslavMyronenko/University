using System;
using System.Reflection;
using System.Text;
using System.Xml.Linq;
// Клас Людини з властивостями: рік народження, стать, ім’я; методами: вік на даний момент
public class Person
{
    public string Name;
    public int BirthYear;
    public string Gender;

    public Person(string name, int birthYear, string gender)
    {
        Name = name;
        BirthYear = birthYear;
        Gender = gender;
    }

    public int GetAge()
    {
        return DateTime.Now.Year - BirthYear;
    }
}

// Клас Співробітник з властивостями: посада, дата прийняття, зар. платня; методами: стаж роботи в установі, розмір податку
public class Employee
{
    public string Position;
    public DateTime HireDate;
    public decimal Salary;

    public Employee(string position, DateTime hireDate, decimal salary)
    {
        Position = position;
        HireDate = hireDate;
        Salary = salary;
    }

    public int GetWorkExperience()
    {
        return (DateTime.Today - HireDate).Days / 365;
    }

    public decimal CalculateTax()
    {
        return Salary * 0.6m; // Податок 6%
    }
}

// Клас Співробітник ІТ відділу з властивостями: спеціалізація, логін/пароль; методи: заміна логіна/пароля
public class ITEmployee
{
    public string Specialization;
    public string Login;
    public string Password;

    public ITEmployee(string specialization, string login, string password)
    {
        Specialization = specialization;
        Login = login;
        Password = password;
    }

    public void ChangeCredentials(string newLogin, string newPassword)
    {
        Login = newLogin;
        Password = newPassword;
    }
}

// Ієрархія класів
class Program
{
    static void Main(string[] args)
    {
        Console.OutputEncoding = Encoding.UTF8;

        Console.WriteLine("Введіть ПІБ: ");
        string name = Console.ReadLine();
        Console.WriteLine("Введіть рік народження: ");
        int birthYear = int.Parse(Console.ReadLine());
        Console.WriteLine("Введіть вашу стать: ");
        string gender = Console.ReadLine();

        Console.WriteLine("Вевдіть вашу посаду: ");
        string position = Console.ReadLine();
        Console.WriteLine("Введіть дату прийняття на роботу (у форматі yyyy-MM-dd): ");
        DateTime hireDate = DateTime.Parse(Console.ReadLine());
        Console.WriteLine("Введіть вашу зарплату: ");
        decimal salary = decimal.Parse(Console.ReadLine());   

        Console.WriteLine("Вкажіть спеціалізацію: ");
        string specialization = Console.ReadLine();
        Console.WriteLine("Вкажіть ваш логін: ");
        string login = Console.ReadLine();
        Console.WriteLine("Вкажіть ваш пароль: ");
        string password = Console.ReadLine();

        Console.WriteLine("Вкажіть новий логін");
        string newLogin = Console.ReadLine();
        Console.WriteLine("Вкажіть новий пароль");
        string newPassword = Console.ReadLine();

        var person = new Person(name, birthYear, gender);
        Console.WriteLine("\n ||ПІБ: " + person.Name + "\n ||Вік: " + person.GetAge() + " років " + "\n ||Cтать: " + person.Gender);
        var employee = new Employee(position, hireDate, salary);
        Console.WriteLine(" ||Посада: " + employee.Position + "\n ||Стаж: " + employee.GetWorkExperience() + "\n ||День прийняття: " + employee.HireDate.ToString("dd.MM.yyyy") + "\n ||Зарплата: " + employee.Salary + " років\n ||Податок: " + employee.CalculateTax());
        var itEmployee = new ITEmployee(specialization, login, password);
        Console.WriteLine(" ||Спеціалізація: " + itEmployee.Specialization + "\n ||Логін: " + itEmployee.Login + "\n ||Пароль: " + itEmployee.Password);
        itEmployee.ChangeCredentials(newLogin, newPassword);
        Console.WriteLine(" ||Новий логін: " + itEmployee.Login + "\n ||Новий пароль: " + itEmployee.Password);
    }
}
//
