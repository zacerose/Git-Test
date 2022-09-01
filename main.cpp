/**
 * @file main.cpp
 * @author Zachary Rose
 * @date 2022-08-31
 * @brief sum checker program
 * 
 * asks user for a number, and prints the sum of all numbers between it and 1
 */


#include <iostream>

using namespace std;


/**
 * returns the sum of all numbers between 1 and num
 *
 * @param int num upper limit of summation
 * @return int sum of all numbers between 1 and num
 * 
 */
int sum(int num);

/**
 * returns the product of all numbers from 1 to num
 *
 * @param int num upper limit of multiplication
 * @return int the product of all numbers from 1 to num
 * 
 */
int product(int num);

int main() {
  int input;
  cout << "Please enter a number: ";
  cin >> input;

  cout << "Summed value: " << sum(input) << endl;
  cout << "Product value: " << product(input) << endl;  
  return 0;
}

int sum(int num) {
  // condition check for peace of mind
  if (num < 1)
    return 0;
  int total = 0;
  for (int i = 1; i <= num; i++)
    total += i;

  return total;
}

int product(int num){
 // condition check for peace of mind
  if (num < 1)
    return 0;
  int total = 1;
  for (int i = 1; i <= num; i++)
    total *= i;

  return total;
}
