// 1.Write a Java program to find out whether the given String is Palindrome or not.
#include <bits/stdc++.h>
using namespace std;

bool isPal(string str, int s, int e)
{
    if (str[s] != str[e])
        return false;

    if (s < e + 1)
        return isPal(str, s + 1, e - 1);

    return true;
}

bool isPalindrome(string str)
{
    int n = str.length();
    if (n == 0)
        return true;

    return isPal(str, 0, n - 1);
}

int main()
{
    string str = "NamaN";

    if (isPalindrome(str))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}