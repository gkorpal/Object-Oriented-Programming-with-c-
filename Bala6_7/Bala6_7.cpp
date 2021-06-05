#include <iostream>
using namespace std;
int ount =0;
class alpha
{

public:
    alpha()
    {
        ount++;
        cout << "\n No. of object created " << ount;
    }
    ~alpha()
    {
        cout << "\n No. of object destroyed " << ount;
        ount--;
    }
};

int main ()
{
    cout << "\n \n ENTER MAIN \n";
    alpha A1, A2, A3, A4;
    {
        cout << "\n ENTER BLOCK 1 \n";
        alpha A5;
    }
    {
        cout << "\n ENTER BLOCK 2 \n";
        alpha A6;
    }
    cout << "\n \n RE_ENTER MAIN \n";

    return 0;
}
