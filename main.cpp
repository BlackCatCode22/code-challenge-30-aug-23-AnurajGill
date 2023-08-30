#include <iostream>
#include <string>
using namespace std;

int main()
{

cout << "\n\n\n\n";
cout << "Hello Pointers" << endl;

   char myABC[3];

  char myABCToFillArray = 'a';

  for(int i = 0; i < 3; i++){
    myABC[i] = myABCToFillArray;
    myABCToFillArray++;
  }

  for (int i = 0; i < 3; i++){
    cout << "  " << myABC[i] << "\n\n";

  }
  char myChar = 'z';

  char* pmyChar = &myChar;

  //point to the array
  pmyChar= myABC;

  cout << "should be an address: " << myChar;
  cout << "\n\n";
  //Dereference code

  cout << "should be the first character in the array: " << myABCToFillArray;
    cout << "\n\n";
   cout << "should be a z character: " << *pmyChar;
  cout << "\n\n";

    return 0;
}
