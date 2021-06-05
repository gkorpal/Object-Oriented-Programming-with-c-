#include<iostream>
using namespace std;
int global=10;
void func(int &x, int y)
{
    x=x-y;
    y=x*10;
    cout<< x<<','<<y<<"\n";
}
int main()
{
    int global =7;
    cout<< global<<','<< ::global<<"\n";
    func(::global,global);
    cout<< global<<','<< ::global<<"\n";
    func(global,::global);
    cout<< global<<','<< ::global<<"\n";
    return 0;
}
