#include <iostream>
using namespace std;

class student
{
private:
  int addmissionNUmber;
  string studentName;
  float eng, math, science, total;
  float ctotal()
  {
    total = eng + math + science;
    return total;
  }

public:
  void Takedata()
  {
    cout << "Enter Addmission Number : ";
    cin >> addmissionNUmber;
    cout << "Enter the Student name : ";
    cin >> studentName;
    cout << "Enter the marks of English : ";
    cin >> eng;
    cout << "Enter the makrs of Math : ";
    cin >> math;
    cout << "Enter the marks of science : ";
    cin >> science;
  }
  void showData()
  {
    cout << "Admission Number : " << addmissionNUmber << endl;
    cout << "Student Name : " << studentName << endl;
    cout << "English Marks : " << eng << endl;
    cout << "Math Marks : " << math << endl;
    cout << "Science Marks : " << science << endl;
    cout << "Total marks is : " << ctotal() << endl;
  }
};

int main()
{
  student s1;
  s1.Takedata();
  s1.showData();

  return 0;
}