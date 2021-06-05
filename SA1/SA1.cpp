#include <iostream>
using namespace std;
int main()
{
    int a = 10,c;
    c=a++ + ++a + ++a + a;
    cout << c <<"\t"<< a << endl;
}
