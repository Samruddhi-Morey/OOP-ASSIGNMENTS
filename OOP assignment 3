#include <iostream>
#include <string>

using namespace std;

class employee 
{
public:
    int employeeid;
    string employee_name;
    float employee_salary;
    int employee_joining_date; // Changed colon (:) to semicolon (;)
    string employee_department;

    void input() 
    {
        cout << "Enter the Employee ID: " << endl;
        cin >> employeeid;

        cout << "Enter the Employee name: " << endl;
        cin >> employee_name;

        cout << "Enter the Employee Salary: " << endl;
        cin >> employee_salary;

        cout << "Enter the Employee Joining Date: " << endl;
        cin >> employee_joining_date;

        cout << "Enter the Employee Department: " << endl;
        cin >> employee_department;
    }

    void output() {
        cout << "\n\t... EMPLOYEE DETAILS ...\t" << endl;
        cout << "Employee ID: " << employeeid << endl;
        cout << "Employee Name: " << employee_name << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Employee Joining Date: " << employee_joining_date << endl; // Fixed colon at the end
        cout << "Employee Department: " << employee_department << endl;
    }
}; 
// Added closing brace and semicolon for the class

int main() 
{ // Added 'int' return type
    employee e1;
    e1.input();
    e1.output();
    return 0;
}
