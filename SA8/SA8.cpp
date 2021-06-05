#include <iostream>
#include <math.h>
using namespace std;
int divide(int a, int b)
{
    if(b==0)
        return -1;
    if((a%b)==0)
        return 1;
    else
        return 0;
}
int divide(int a)
{
    int j=a/2;
    int flag =1;
    for(int i=2; (i<=j)&&(flag); i++)
    {
        if(a%i==0)
            flag=0;
    }
    return flag;
}
int main()
{
    int ch, res,a,b;
    do
    {

        cout << "1. Check for divisibility \n";
        cout << "2. Check for Prime \n";
        cout << "3. Exit \n";
        cout << "Enter your choice (1-3) : ";
        cin >> ch;
        cout << "\n";
        switch(ch)
        {
            case 1 : cout << "Enter the Numerator and Denominator \n";
            cin >> a >> b;
            res = divide(a,b);
            cout << ((res)? "It is" : "It is not") << "\n";
            break;
            case 2 : cout << "Enter the number \n";
            cin >> a;
            res = 0;
            res = divide(a);
            cout << ((res)? "It is":"It is not")<<"\n";
            break;
            case 3 : break;
            default : cout << "Wrong Choice! \n";
        };

    } while(ch>0&&ch<3);
    return 0;
}
