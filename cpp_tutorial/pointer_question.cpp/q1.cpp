#include <iostream>

using namespace std;
//****Write a program in C to find the maximum number between two numbers using a pointer.****
int main() {
  int num1, num2;
  int* maxNum;

  // Prompt the user to enter two numbers
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  // Create a pointer to the maximum number
  if (num1 > num2) {
    maxNum = &num1;
  } else {
    maxNum = &num2;
  }

  // Print the maximum number
  cout << "The maximum number is: " <<*maxNum<<" " <<&maxNum << endl;

  return 0;
}
