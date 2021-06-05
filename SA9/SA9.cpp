#include <iostream>
using namespace std;
class Student
{
private:
    int rollno;
    char name[25];
    float marks;
    char grade;
public:
    void readStudent()
    {
        cout << "\n Enter Roll No. : ";
        cin>> rollno;
        cout<< "\n Enter Name : ";
        cin >> name;
        cout << "\n Enter Marks : ";
        cin>> marks;
    }
    void dispStudent()
    {
        calcGrade();
        cout << "Roll No. : "<< rollno<<endl;
        cout << "Name : "<< name<< endl;
        cout << "Marks : " << marks<<endl;
        cout << "Grades : " << grade << endl;
    }
    int getRollno()
    {
        return rollno;
    }
    float getMarks()
    {
        return  marks;
    }
    void calcGrade()
    {
        if(marks>=75)
            grade = 'A';
        else if(marks >=60)
            grade='B';
        else if(marks >=50)
            grade='C';
        else if(marks >=40)
            grade='D';
        else
            grade = 'F';
    }
};
int main()
{
    int k,i,choice,rno,pos=-1,highmarks=0;;
    cout<< "How many students are there? \n";
    cin >> k;
    Student XIIa[k];
    for(i=0;i<k;++i)
    {
        cout << "\n Enter details of student" << i+1 << ": ";
        XIIa[i].readStudent();
    }
    do
    {
        cout << "\n \n Main Menu \n";
        cout << "1. Specific Student \n";
        cout << "2. Topper \n";
        cout << "3. Exit \n";
        cout << "\n Enter your choice (1..3) : ";
        cin >> choice;

        switch(choice)
        {
            case 1 : cout << "\n Enter roll of student whose details you want to see: ";
                    cin >> rno;
                    for(i=0;i<k;++i)
                    {
                        if(XIIa[i].getRollno()==rno)
                        {
                            XIIa[i].dispStudent();
                            break;
                        }
                    }
                    if(i==k)
                        cout << "\n INVALID ROLL NO. \n";
                    break;
            case 2 : for (i=0;i<10;++i)
            {
                if(XIIa[i].getMarks()>highmarks)
                {
                    pos=i;
                    highmarks=XIIa[i].getMarks();
                }
            }
                    XIIa[pos].dispStudent();
                    break;
            case 3: break;
            default : cout << "\n WRONG CHOICE\n";
                    break;
        }
    }while(choice>=1&&choice<3);
    return 0;
}
