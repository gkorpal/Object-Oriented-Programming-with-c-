#include <iostream>
#include <math.h>

using namespace std;

float sumfun(float x, int N)
{
    float sum=1;
    float sign= +1;
    float term = 0;
    int i,j;
    for (i=2;i<=N;i++)
    {
        sign *= -1;
        term= (sign *pow(x,i))/i;
        sum+=term;
    }
    return sum;
}
int main()
{
    float x;
    int N;
    cout << "WELCOME TO WIERD POLYNOMIAL CALCULATOR --> 1 + SUM_{N>=2}[((-1)^{N+1} x^N)/N] \n";
    cout<< "Enter the number of terms you want to evaluate : ";
    cin >> N;
    cout<< "Enter value of x: ";
    cin >> x;
    float w = sumfun(x,N);
    cout << w;
    return 0;
}
