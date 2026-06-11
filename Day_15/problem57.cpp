#include<iostream>
using namespace std;

void reversearray(int a1[], int a2[], int n)
{
    for(int i = 0; i < n; i++)
    {
        a2[i] = a1[n - i - 1];
    }

    for(int i = 0; i < n; i++)
    {
        cout << a2[i] << " ";
    }
}

int main()
{
    int n;

    cout << "Enter the size of array : ";
    cin >> n;

    int *a = new int[n];
    int *b = new int[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter the element : ";
        cin >> a[i];
    }

    cout << "The reverse array : ";
    reversearray(a, b, n);

    delete[] a;
    delete[] b;

    return 0;
}