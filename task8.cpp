#include<iostream>
#include<windows.h>
using namespace std;
 
void checkint(int num1 ,int num2);

main(){ 
int num1,num2;
cout << "enter 1st number:";
cin >> num1;
cout << "enter 2nd number:";
cin >> num2;
checkint(num1,num2);
}

  
void checkint(int num1, int num2)

{ if (num1 == num2)
     { cout << " true ";
     }
  if  (num1 != num2)
     { cout << " false";
     } 
}