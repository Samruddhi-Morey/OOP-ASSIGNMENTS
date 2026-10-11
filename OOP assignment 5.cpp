#include<iostream>
using namespace std;
class student
{
    public:
    int RollNo;
    string StudentName;
    string StudentDepartmentName;
    student(int RollNo,string StudentName,string StudentDepartmentName)
    {
        this->RollNo=RollNo;
        this->StudentName=StudentName;
        this->StudentDepartmentName=StudentDepartmentName;
    }
    void display()
    {
        cout<<"------Student Details------"<<endl;
        cout<<"RollNo="<<this->RollNo<<endl;
        cout<<"StudentName="<<this->StudentName<<endl;
        cout<<"StudentDepartmentName="<<this->StudentDepartmentName<<endl;
    }
};
int main()
{
    student s1(10,"Samruddhi_Morey","SOAI");
    s1.display();
    return 0;
}
