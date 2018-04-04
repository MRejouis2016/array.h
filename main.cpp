#include <iostream>
using namespace std;

int main()
{
  double hit = 1;
  double bat = 2;
  double strike = 3;
  double avg = hit/bat;
  
  cout << "I scored " << hit << " hit";
  cout << " and scored  " << bat << " bats. " << endl;
  cout << "I made " << strike << " strikes ";
  cout << "and scored "<< avg << " points. " << endl;
  
  return 0;
}