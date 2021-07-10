# i learn something in c++
#include <iostream>

using namespace std;

int main()
{
     int number,a1,a2,b1,b2,c1,c2,d1,d2,e1,e2,f1,f2,g1,g2,h1,h2,i1,i2;
    
    cout<<"enter a no.";
    cin>>number;
    a1 = number/2000;   a2 = number%2000;
    b1 = a2/500;    b2 = a2%500;
    c1 = b2/100;    c2 = b2%100;
    d1 = c2/50;     d2 = c2%50;
    e1 = d2/20;     e2 = d2%20;
    f1 = e2/10;     f2 = e2%10;
    g1 = f2/5;      g2 = f2%5;
    h1 = g2/2;      h2 = g2%2;
    i1 = h2/1;      i2 = h2%1;
    
    cout<<a1<<b1<<c1<<d1<<e1<<f1<<g1<<h1<<i1;

    return 0;
}
# It is a program for atm which we will tel us how many notes we will get
