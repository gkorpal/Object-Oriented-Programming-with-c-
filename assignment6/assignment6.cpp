#include <iostream>
#include <math.h>
#include <vector> //gaurish
using namespace std;
void h(int n)
{
    float z[n+1];
	for (int e = 0; e < n+1; e++)
	{
		cout << "Enter the coefficients of x^"<<e<<": ";
        cin >> z[e];
    }
    float p;
    char x = 'x';
    for (int b =0; b < n+1; b++)
    {
        float q= z[b]*pow(x,b);
        p=p+q;
    }
    cout << "The polynomial is "<<p<< endl;
    float r;
      for (int c =0; c < n+1; c++)
    {
        float q = z[c] * c*pow(x,c-1);
        r = r+p;
    }
    cout<<"The derivative is "<<r<<endl;
}
float k(int n,float x)
{
   float z[n+1];
	for (int e = 0; e < n+1; e++)
	{
		cout << "Enter the coefficients of x^"<<e<<": ";
        cin >> z[e];
    }
    float p;
    for (int b =0; b < n+1; b++)
    {
        float q= z[b]*pow(x,b);
        p=p+q;
    }
    cout << p;
}
float m(int n, float x)
{
    float z[n+1];
	for (int e = 0; e < n+1; e++)
	{
		cout << "Enter the coefficients of x^"<<e<<": ";
        cin >> z[e];
    }
      float r;
      for (int c =0; c < n+1; c++)
    {
        float q = z[c] * c*pow(x,c-1);
        r = r+q;
    }
    cout<<r;
}
int main()
{
	int n;
	float a,b,c;
	cout << "Enter the degree of polynomial: ";
	cin >> n;
	h(n);
	cout << "Enter x0,x1,Step: ";
	cin >>a>>b>>c;
    cout << "==========================================================\n";
    cout <<"\t x \t \| \t f \t \| \t f\' \t \n \n";
    for (float i=a;i<b+1;i=i+c)
    {
           cout<<"\t"<< i <<"\t \| \t "<< i <<"\t \| \t "<< i<< "\t \n";
    }
   	return 0;
}
