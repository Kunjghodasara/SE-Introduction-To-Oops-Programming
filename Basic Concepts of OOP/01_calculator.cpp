#include<iostream>
using namespace std;

class SimpleCalculator
{
    private:
        int num1, num2;

    public:
        void getValues()
        {
            cout << "\n\t Enter Value of num1 : ";
            cin >> num1;
            cout << "\n\t Enter Value of num2 : ";
            cin >> num2;
        }
        void add()
        {
            cout << "\n\t Sum is : " << num1 + num2;
        }
        void subtract()
        {
            cout << "\n\t Subtraction is : " << num1 - num2;
        }
        void multiply()
        {
            cout << "\n\t Multiplication is : " << num1 * num2;
        }
        void divide()
        {
            if (num2 != 0)
                cout << "\n\t Division is : " << num1 / num2;
            else
                cout << "\n\t Division by zero is not allowed.";
        }
        int getChoice()
        {
            int choice;
            cout << "\n\t Enter 1 for Addition";
            cout << "\n\t Enter 2 for Subtraction";
            cout << "\n\t Enter 3 for Multiplication";
            cout << "\n\t Enter 4 for Division";
            cout << "\n\t Enter Your Choice : ";
            cin >> choice;
            return choice;
        }
};

int main()
{
    SimpleCalculator calc;
    calc.getValues();
    int choice = calc.getChoice();
    switch(choice)
    {
        case 1 : calc.add();
                 break;

        case 2 : calc.subtract();
                 break;

        case 3 : calc.multiply();
                 break;

        case 4 : calc.divide();
                 break;

        default : cout << "\n\t Invalid choice...";
                  break;
    }
    return 0;
}

