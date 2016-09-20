#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    p[0] = 5;
    p[999999+1] = 3;
    cout << p[999999+1] << endl;
}