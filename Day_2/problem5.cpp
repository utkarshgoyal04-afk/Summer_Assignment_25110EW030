#include <iostream>
using namespace std;
int main()
{
    int number, temp, sum = 0;
    cout << "Enter the number : ";
    cin >> number;
    while (number > 0)
    {
        temp = number % 10;
        sum += temp;
        number /= 10;
    }
    cout << "The sum of digits are : " << sum;
}