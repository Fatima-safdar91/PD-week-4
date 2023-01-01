#include<iostream>
#include<windows.h>
using namespace std;
 
void printTF(string input);

main(){
    string input;
    cout << "enter your input:";
    cin >> input;
    printTF(input);
}
  
void printTF(string input)

{ if ( input == "true")
     { cout << " false ";
     }
  if  ( input== "false")
     { cout << " true ";
     } 
}