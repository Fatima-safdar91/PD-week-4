#include<iostream>
using namespace std;

main (){
 string cname;
 float ticketpriceindollars;
 while(true){
 cout << "enter country name:";
 cin >> cname;
 cout << " enter ticket price in dollars:";
 cin >> ticketpriceindollars;
   
 if(cname=="pakistan")
 {
 ticketpriceindollars=ticketpriceindollars-(ticketpriceindollars*0.05);
 cout << "Ticket price after discount is "<<ticketpriceindollars << endl ;
}
 if(cname=="ireland")
 {
 ticketpriceindollars=ticketpriceindollars-(ticketpriceindollars*0.1);
 cout << "Ticket price after discount is "<<ticketpriceindollars << endl ;
}
if(cname=="india")
 {
 ticketpriceindollars=ticketpriceindollars-(ticketpriceindollars*0.2);
 cout << "Ticket price after discount is "<<ticketpriceindollars  << endl ;
}
if(cname=="england")
 {
 ticketpriceindollars=ticketpriceindollars-(ticketpriceindollars*0.3);
 cout << "Ticket price after discount is "<<ticketpriceindollars << endl ;
}
if(cname=="canada")
 {
 ticketpriceindollars=ticketpriceindollars-(ticketpriceindollars*0.45);
 cout << "Ticket price after discount is "<<ticketpriceindollars << endl ;
}
}
}