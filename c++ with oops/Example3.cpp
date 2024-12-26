#include <iostream>
using namespace std;

class Employee
{

private:
    int code;
    string name;
    int salary;

public:
    void getEmploye()
    {

        cout << "Enter Code : ";
        cin >> code;
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Salary :";
        cin >> salary;
    }

    void showEmployee()
    {

        cout << "Employee id : " << code << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Employee Salary : " << salary << endl;
    }

    void netSalary()
    {
        int da, hra, netSalary;
        da = salary * 40 / 100;
        hra = salary * 12 / 100;
        netSalary = salary + da + hra;

        cout << "DA : " << da << endl;
        cout << "HRA : " << hra << endl;
        cout << "Net Salary : " << netSalary << endl;
    }
};

int main()
{

    Employee e1;
    e1.getEmploye();
    e1.showEmployee();
    e1.netSalary();
    return 0;
}