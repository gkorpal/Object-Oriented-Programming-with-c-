#include  <iostream>
using namespace std;
class Item
{
    int itemno;
    float price;
public:
    void getData(int i, float j)
    {
        itemno = i;
        price =j;
    }
    void putData(void)
    {
        cout << "Itemno : " << itemno << "\t";
        cout << "Price : " << price << "\n";
    }
};
const int size =10;
Item order[size];
int main()
{
    int ino;
    float cost;
    for(int a=0; a<size; a++)
    {
        cout << "Enter itemno & price for item" << a+1 << "\n";
        cin >> ino >> cost;
        order[a].getData(ino,cost);
    }
    for(int a=0;a<size;a++)
    {

        cout << "Item" << a+1 << "\n";
        order[a].putData();
    }
    return 0;
}
