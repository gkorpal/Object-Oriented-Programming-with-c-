#include <iostream>
#include <istream>
#include <stdio.h> //for gets()
using namespace std;
const int LEN=25;

class Person
{
    string name[LEN];
    int age;
public:
    void readperson(void);
    void displayperson(void)
    {
        cout<< "Name : ";
        cout.write(name,LEN); //what the fuck
        cout << "\t Age : " << age << "\n";
    }
};
void Person :: readperson(void)
{
    for(int i=0; i<LEN; i++)
        name[i]=' ';
    cout << "Enter name of the person : ";
    getline(cin,name);
    cout << "Enter Age : ";
    cin >> age;
}

class Student : public Person
{
    int rollno;
    float average;
public:
    void readstudent(void)
    {
        readperson();
        cout << "Enter roll number : ";
        cin >> rollno;
        cout << "Enter Average Marks : ";
        cin >> average;
    }
    void disp_rollno(void)
    {
        cout << "Roll Number : " << rollno<<"\n";
    }
    float getaverage(void)
    {
        return average;
    }
};

class GradStudent:public Student
{
        char subject[LEN];
        char working;
    public:
        void readit(void);
        void displaysubject(void)
        {
            cout << "Subject : ";
            cout.write(subject,LEN);
        }
        char workstatus(void)
        {
            return working;
        }
};
void GradStudent::readit(void)
{
    readstudent();
    for(int i=0; i<LEN;i++)
        subject[i]=' ';
    cout << "Enter main subject : ";
    gets(subject);
    cout << "Working (Y/N) : ";
    cin >> working;
}

int main()
{
    const int size=5;
    GradStudent grad[size];
    int year, num_working=0, non_working=0, div1=0, total=0;
    float topscore=0, score, number, wperc, nwperc;
    cout << "Enter Year : ";
    cin >> year;
    for(int i=0; i<size; i++)
    {
        cout << "Enter details of Graduate" << (i+1) << "\n";
        grad[i].readit();
        total++;
        if((grad[i].workstatus()=='y')||(grad[i].workstatus()=='Y'))
            num_working++;
        else non_working++;
        score=grad[i].getaverage();
        if(score>topscore)
        {
            topscore=score;
            number=i;
        }
        if(score>=60.0)
            div1++;
    }
    int i=number;
    cout<< "\n" << "\t \t Report of the Year" << year<< "\n";
    cout << "\t \t -------------------------------------\n";
    cout << "Working Graduates : " << num_working;
    cout << "\t Non-Working Graduates : " << non_working<< "\n";
    cout << "\t Details of the Top Scorer \n";
    grad[i].displayperson();
    grad[i].displaysubject();
    nwperc = ((float)non_working/(float)total)*100;
    wperc=((float)div1/(float)total)*100;
    cout << "\t Average Marks : "<< grad[i].getaverage()<< "\n";
    cout << "\t" << nwperc << "% of the graduates this year are non-working and "<< wperc << "% are first divisioners \n";
    return 0;
}
