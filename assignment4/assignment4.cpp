#include <iostream> //gaurish
using namespace std;
int f(int a)
{
	int b, c;

	for (b=1; b<=a; b++)
	{
		for (c=1; c <=b; c++)
		{
			cout << b << "\t";

		}
	cout << "\n";
	}
}
int main()
{
	int a;
	cout << "Enter 0 to exit or enter any other number to continue \n";
	do
	{
		cout << "Enter a Number : ";
		cin >> a;
		f(a);

	}
	while ( a != 0);

return 0;
}



