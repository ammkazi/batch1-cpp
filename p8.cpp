// WAP to accept a number from user and find its square using a function

#include <iostream>

using namespace std;

// fn decl
int findSquare(int n);
int main(int argc, char const *argv[])
{
    int square, number;
    cout << "Enter the number to find its square" << endl;
    cin >> number;

    // fn call
    square = findSquare(number);
    cout << "Square of the given number is " << square << endl;

    cout << "Square of the given number is " << findSquare(number)
         << endl;
    return 0;
}

// fn def
int findSquare(int n)
{
    return n * n;
}