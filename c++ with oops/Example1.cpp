#include <iostream>
using namespace std;

class Student
{
private:
    int rollno;
    string name;
    int p, c, m;

public:
    void getStudent()
    {
        cout << "Enter Roll No. :";
        cin >> rollno;
        cout << "Enter Name :";
        cin >> name;
    }
    void getMarks()
    {
        cout << "Enter P C M Marks :";
        cin >> p >> c >> m;
    }

    void showResult()
    {
        float t = p + c + m;
        float pr = t / 3;
        cout << "Roll : " << rollno << endl;
        cout << "Name : " << name << endl;
        cout << "Physics : " << p << endl;
        cout << "Chemistry : " << c << endl;
        cout << "Math : " << m << endl;
        cout << "Total : " << t << endl;
        cout << "Percentage : " << pr << endl;
    }
};

int main()
{

    Student s1, s2;

    // Admin
    s1.getStudent();
    s2.getStudent();

    // Faclties
    s1.getMarks();
    s2.getMarks();

    // Students
    s1.showResult();
    s2.showResult();
    return 0;
}