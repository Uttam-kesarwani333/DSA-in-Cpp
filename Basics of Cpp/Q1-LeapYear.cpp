#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int n)
{

    if (n % 4 == 0)
    {
        if (n % 100 == 0)
        {
            if (n % 400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    if (isLeapYear(n))
        cout << "This is Leap Year";
    else
        cout << "This is Not Leap Year";
    return 0;
}