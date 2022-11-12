#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 6;
     cout<<"a&b "<<(a&b)<<endl;  //and
     cout<<"a|b "<<(a|b)<<endl;  //or
     cout<<"~a "<<(~a)<<endl;    //not
     cout<<"a^b "<<(a^b)<<endl;  //xor

     cout<<(19<<1)<<endl;   //left shift by 1
     cout<<(21<<2)<<endl;   //left shift by 2
     cout<<(17>>1)<<endl;   //right shift by 1
     cout<<(17>>2)<<endl;   //right shift by 2

    int i = 7;
    cout<<(++i)<<endl;
    //8

    cout<<(i++)<<endl;
    //8,i=9

    cout<<(i--)<<endl;
    //9 , i = 8

    cout<<(--i)<<endl;
    //7 , i = 7
}