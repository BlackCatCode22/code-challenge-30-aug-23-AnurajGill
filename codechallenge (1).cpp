#include <iostream> 

using namespace std; 

int main()
{
    char myABC[3];
    
    char mychartofillarray = 'c';

    for (int i = 0; i < 3; i++) {
        myABC[i] = mychartofillarray;
        mychartofillarray++;
    }
    
    for (int i = 0; i < 3; i++) {
        cout << "   " << myABC[i] << "\n\n";
    }
    char myChar = 'v';
    char* pmyVpointer = &myChar; 
    cout << " I expect to see a v : " << *pmyVpointer;

    char* pmyarrayptr;

    pmyarrayptr = myABC;

     cout << "\n\n should be a memory address" << &pmyarrayptr;

    cout << "\n should be the first char in the array (c) : " << *pmyarrayptr; 


    pmyarrayptr++;

    cout << "\n Should be the second char in the array (d) : " << *pmyarrayptr;

    pmyarrayptr++;

    cout << "\n Should be the second char in the array (e) : " << *pmyarrayptr;

    pmyarrayptr++;

    cout << "\n Should be..... : " << *pmyarrayptr;


    //pmyVpointer = myABC;

    //cout << "should be an adress " << pmyVpointer;
    //cout << "\n\n\n" << endl; 

    //cout << " should be a character: " << *pmyVpointer;
       

}