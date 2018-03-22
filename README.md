//NAME:Mac Rejouis
#include <iostream>
using namespace std;

int main()
{
  int arr[] = {4, 2, 3, 2, 1, 3, 1, 4, 3, 5, 6, 1, 7, 5, 8};    //Step 0: Test the array of size 10                                                                                                           
  const int SIZE = 15;                                          //Step 1: Ask a question: is this integer divisible by 2?                                                           
  int sum = 0;

  for (int i=0; i<SIZE; i++)                                    //Step 2: Make a for loop.
  {
    if (arr[i]%2 == 0){                                         //Step 3: Find an integer divisible by 2                                                             
      cout << arr[i]<<" ";                                      //Step 4: Find the sum of even integers                                                            
      sum += arr[i];
    }
  }
  cout << endl<<sum << endl;                                    //Step 5: Print out the sum of even intgers                                                          
  
return 0;
}
