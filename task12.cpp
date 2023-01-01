#include<iostream>
using namespace std;

main(){
float NOredrose,NOwhiterose,NOtulips;
float priceofredrose;
float priceofwhiterose;
float priceoftulips;
float totalpriceofflowers;
float redrose1;
float whiterose1;
float tulips1;
float originalprice;
float priceafterdiscount;
cout << "enter number of red roses:";
cin >> NOredrose;
cout << "enter number of white roses:";
cin >> NOwhiterose;
cout << "enter number of tulips:";
cin >> NOtulips;
redrose1=2;
whiterose1=4.10;
tulips1=2.50;
priceofredrose=redrose1*NOredrose;
priceofwhiterose=whiterose1*NOwhiterose;
priceoftulips=tulips1*NOtulips;
totalpriceofflowers=priceofredrose+priceofwhiterose+priceoftulips;
 if(totalpriceofflowers > 200)
 { priceafterdiscount=totalpriceofflowers-(totalpriceofflowers*0.2);
   cout <<" priceafterdiscount :" << priceafterdiscount;
  
  }
   if(totalpriceofflowers < 200)
   
   cout <<" original price :" << originalprice;
}