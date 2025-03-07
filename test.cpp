#include <iostream>
#include <string>
using namespace std;

int main() {
  string customer;
  double purch;

  cout << "Enter Customer Name: ";
  cin >> customer;

  cout << "Enter Tax Code: ";
  cin >> purch;

  if (purch > 2)
    cout << "Hi" << endl;

  return 0;
}
