// WAP to acc two nos from user and find the greatest

#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int n1, n2;
    cout << "Enter Two Numbers : " << endl;
    cin >> n1 >> n2;

    cout << "You entered " << n1 << " and " << n2 << endl;

    if (n1 > n2)
    {
        cout << n1 << " is greatest" << endl;
    }
    else
    {
        cout << n2 << "is greatest" << endl;
    }

    return 0;
}
