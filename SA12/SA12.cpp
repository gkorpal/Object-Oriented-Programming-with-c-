#include <iostream>
using namespace std;
void amount(float princ, int time, float rate) //constructor
{
    cout << "\n Principal Amount : Rs. "<< princ;
    cout << "\t Time : " << time << "years";
    cout << "\t Rate : " << rate;
    cout << "\n Interest Amount : "<< (princ * rate * time) << endl;
}
void amount(float princ, int time) //constructor
{
    cout << "\n Principal Amount : Rs. "<< princ;
    cout << "\t Time : " << time << "years";
    cout << "\t Rate : 0.08" ;
    cout << "\n Interest Amount : "<< (princ * 0.08f * time) << endl;
}
void amount(float princ, float rate) //constructor
{
    cout << "\n Principal Amount : Rs. "<< princ;
    cout << "\t Time : " << 2 << "years";
    cout << "\t Rate : " << rate;
    cout << "\n Interest Amount : "<< (princ * rate * 2) << endl;
}
void amount(int time, float rate) //constructor
{
    cout << "\n Principal Amount : Rs. "<< 2000;
    cout << "\t Time : " << time << "years";
    cout << "\t Rate : " << rate;
    cout << "\n Interest Amount : "<< (2000 * rate * time) << endl;
}
void amount(float princ) //constructor
{
    cout << "\n Principal Amount : Rs. "<< princ;
    cout << "\t Time : " << 2 << "years";
    cout << "\t Rate : " << 0.08;
    cout << "\n Interest Amount : "<< (princ * 0.08f * 2) << endl;
}
int main()
{
    cout << "Case 1";
        amount(2000.0f);
    cout << "Case 2";
        amount(25000.0f,3);
    cout << "Case 3";
        amount(2300.0f,3, 0.11f);
    cout << "Case 4";
        amount(2000.0f,0.12f);
    cout << "Case 4";
        amount(6,0.07f);
    return 0;
}
