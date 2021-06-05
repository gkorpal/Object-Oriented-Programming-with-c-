#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double d,m,n,o,p;
    cout << "Enter the coordinates of Point-1 : ";
    cin>> m>>n;
    cout << "Enter the coordinates of Point-2 : ";
    cin >> o>>p;
    d = sqrt(pow((m-o),2)+ pow((n-p),2));
    cout << "The distance between ("<< m<<","<<n<<") and ("<<o<<","<<p<<") is : " << d << endl;
    return 0;

}
