//function overloading
#include <iostream>

using namespace std;
void display(int n1)
{
    cout << "You entered " << n1 << endl;
}

void display(int n1, int n2)
{
    cout << "You entered " << n1 << " and " << n2 << endl;
}

int main(int argc, char const *argv[])
{
    display(5);
    display(10, 20);
    return 0;
}
