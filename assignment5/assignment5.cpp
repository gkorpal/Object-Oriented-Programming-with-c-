#include <iostream> //gaurish
using namespace std;
void h(int n)
{
	int z[n];
	int a,b,c,x;
	for (a = 0; a < n; a++)
	{
		cout << "Enter the coefficients of x^"<<z[a]<<": ";
		for (b = 0; b < 3; b++)
		{
			cin >> z[a][b];
		}
	cout << "Enter the value of x \n";
	cin >> x;
}
	for (int c = 0; c<n; c++)
	{

		cout << "The value of function " << c+1 << " is " << ((z[c][0] * x * x) + (z[c][1] * x) + (z[c][2])) << "\n";

	}

}
int main()
{
	int n;
	do
	{
		cout << "Enter the degree of polynomial: ";
		cin >> n;
		h(n);
	}
	while (n != 0);
return 0;
}
