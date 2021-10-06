#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b;
    string choice;
    const double PI = 3.1415;

    cout << "Enter 2 Numbers: ";
    cin >> a >> b;
    cout << "Enter Your choice please between(-+/*Rad Cos Cot Tan Sin Fact)";
    cin >> choice;

    if (choice == "+")
        cout << "Result: " << a + b;
    if (choice == "-")
        cout << "Result: " << a - b;
    if (choice == "*")
        cout << "Result: " << a * b;
    if (choice == "/")
    {
        if (b != 0)
            cout << "Result: " << a / b;
        else
            cout << "ERROR!!";
    }
    if (choice == "Rad")
        cout << "Result: " << sqrt(a);

    if (choice == "Cos")
    {
        a = a * PI / 180;
        cout << "Result: " << cos(a);
    }
    if (choice == "Sin")
    {
        a = a * PI / 180;
        cout << "Result: " << sin(a);
    }
    if (choice == "Tan")
    {
        a = a * PI / 180;
        cout << "Result: " << tan(a);
    }

    if (choice == "Cot")
    {
        a = a * PI / 180;
        double x = tan(a);
        cout << "Result: " << 1 / x;
    }

    if (choice == "Fact")
    {
        double fact = 1;
        int i = 1;
        while (i <= a)
        {
            fact *= i;
            i++;
        }
        cout << "Result: " << fact;
    }
    return 0;
}