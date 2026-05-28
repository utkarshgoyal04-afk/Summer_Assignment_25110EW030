#include <iostream>
using namespace std;
int main()
{
    int number, temp, sum = 0;
    cout << "Enter the number : ";
    cin >> number;
    int result = number;
    while (number > 0)
    {
        temp = number % 10;
        sum = sum * 10 + temp;
        number /= 10;
    }
    if (sum == result)
    {
        cout << "The given number is pallindrome";
    }
    else
    {
        cout << "The given number is not pallindrome";
    }
    return 0;
}