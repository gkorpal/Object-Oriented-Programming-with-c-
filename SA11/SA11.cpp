#include <iostream>
using namespace std;
class Subject
{
    int days;
    int subjectno;
public:
    Subject(int d=123, int sn=101); //prototype //constructor
    void printsub(void)
    {
        cout << "Subject No : " << subjectno;
        cout << "\n" << "Days : "<< days << "\n";
    }
};
Subject::Subject(int d, int sn)
{
    cout << "Constructing Subject \n";
    days = d;
    subjectno = sn;
}
class Student
{
    int rollno;
    float marks;
public:
    Student()//constructor
    {
        cout << "Constructing Student \n";
        rollno = 0;
        marks = 0.0;
    }
    void getval(void)
    {
        cout << "Enter roll no. and marks : ";
        cin >> rollno>> marks;
        cout << "\n";
    }
    void print(void)
    {
        cout << "Roll No. : "<< rollno;
        cout << "\n" << "Marks :" << marks << "\n";
    }
};
class Admission
{
    Subject sub;
    Student stud;
    float fees;
public:
    Admission() //constructor
    {
        cout << "constructing Admission \n";
        fees = 0.0;
    }
    void print(void)
    {
        stud.print();
        sub.printsub();
        cout << "Fees : " << fees << "\n";
    }
};
int main()
{
    Admission adm;
    cout << "\n Back in main() \n";
    return 0;
}
