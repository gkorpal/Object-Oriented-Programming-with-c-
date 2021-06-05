#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout << "Enter number of salesman you have : ";
    cin >> m;
    cout << "Enter number of months you would like to calculate total sales of each salesman : ";
    cin >> n;
    int sales[m][n];
    int i,j,total;
    for(i=0;i<m;++i)
    {
        total = 0;
        cout<<"Enter sales of Salesman"<<i+1<<": \n";
        for (j=0;j<n;j++)
        {
            cout << "\n Month "<< j+1<< ": ";
            cin >> sales[i][j];
            total = total+sales[i][j];
        }
        cout << "\n The total sales of Salesman"<<i+1<<" = " << total<<"\n";
    }
    return 0;
}
