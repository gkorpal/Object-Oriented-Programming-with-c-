#include <iostream> //gaurish
using namespace std;
int main()
{
float a,b,c,x,f,g;
cout << "Welcome to my program. Provided f(x) = ax^2 + bx + c and g(x) = (a/2)x^2 + (b/10)x + 2c/30 . Enter  value of a,b,c and x \n";
cin >> a >> b >> c >> x;
f = a*x*x + b*x + c;
g = (a/2)*x*x + (b/10)*x + c/15;
cout << "f("<<x<<")="<< f<<"\n";
cout << "g("<<x<<")="<< g<<"\n";
return 0;
}


