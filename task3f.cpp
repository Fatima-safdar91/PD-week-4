#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x , int y);

 int main()
 { 
   system("cls");
 
cout << " ########################################################################### "<<endl;
cout << " ||..  .................................................................. || "<<endl;
cout << " ||..                                                                     || " <<endl;
cout << " ||..  %%%%%%%%%%%%%%%            %%%%%%%%%%%%%%%%%%%%%           |%|..   || " <<endl;
cout << " ||..              |%|            |%|               |%|           |%|..   || "<< endl;
cout << " ||..              |%|            |%|               |%|           |%|..   || " << endl;
cout << " ||..          %%%%%%%            %%%%%%%%%%%%%%%%%%%%%     ...           || " << endl;
cout << " ||..                          P                                     ..   || " << endl;
cout << " ||..                %%%%%%%%%%%%%   :   ...........        %%%%%%%%%     || " << endl;
cout << " ||..                     |%|        :                     |%|        :   || " << endl;
cout << " ||                       |%|        :      |%|            |%|        .   || " << endl;
cout << " ||                       |%|        :   ...........       |%|            || " << endl;
cout << " ||................  %%%%%%%%%%%%%          |%|             ..........    || " << endl;
cout << " ||                          G              |%|                           || " << endl;
cout << " ||    %%%%%%%                              |%|                           || " << endl;
cout << " ########################################################################### " << endl;          
int x=10 , y=8;
gotoxy(x,y); 
cout << " ";
gotoxy (11,8);
 cout << " P ";
}
void gotoxy(int x, int y)
{
 COORD coordinates;
   coordinates.X = x;
   coordinates.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}