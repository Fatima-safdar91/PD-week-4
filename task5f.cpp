#include<iostream>
#include<windows.h>
using namespace std;
 
void gotoxy(int x, int y);

main()

{
gotoxy(6,7);
  cout << "   *******     *****    *******  *******  ****   *****   ******  ";gotoxy(6,8);
  cout << "   *           *   *       *        *     *    **    *   *    *  ";gotoxy(6,9);
  cout << "   ****        *****       *        *     *          *   ******  ";gotoxy(6,10);
  cout << "   *           *   *       *        *     *          *   *    *  ";gotoxy(6,11);
  cout << "   *           *   *       *     *******  *          *   *    *  ";gotoxy(6,12);
}
void gotoxy(int x, int y)
{
 COORD coordinates;
   coordinates.X = x;
   coordinates.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}