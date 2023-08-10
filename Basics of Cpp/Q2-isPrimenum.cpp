// WAP to print whether an entered number is prime or not

#include <bits/stdc++.h>
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
        cout << "This is Prime Number";
    else
        cout << "This is Not Prime Number";

    return 0;
}