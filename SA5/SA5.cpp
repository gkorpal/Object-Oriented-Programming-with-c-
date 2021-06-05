#include <iostream>
using namespace std;
int main()
{
    float large (float arr[],int n);
    char ch;
    int i=0;
    float amount[10], biggest;
    for (i=0;i<10;i++)
    {
        cout << "Enter element number " <<i+1<< ": ";
        cin >> amount[i];
        cout << "More Elements ? (y/n) \n";
        cin >> ch;
        if (ch!= 'y')
            break;
    }
    if (i<10)
    {
        i++;
    }
    biggest=large(amount,i);
    cout << "The largest element of this array is: "<<biggest<<endl;
    return 0;
}
float large(float arr[],int n)
{
    float max = arr[0];
    for (int j=1; j<n; j++)
    {
        if(arr[j]>max)
            max = arr[j];
    }
    return max;
}
