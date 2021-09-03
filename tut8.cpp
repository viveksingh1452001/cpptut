#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // int a=34;
    // cout<<"the value of a was :"<<a<<endl;
    // a=45;
    // cout<<"the value of a is:"<<a;


//*****************constants****************
    // const int a=30;
    // cout<<"the value of a is:"<<a<<endl;
    // a=43;                                   //here it will give error bc we defined 'a' as constant that's why we can't change the value 
    // cout<<"the value of a is:"<<a<<endl;

    //**************manipulators*****************
    // int a=3, b=34, c=4567;
    // cout<<"the value of without setw is: "<<a<<endl;
    // cout<<"the value of b without setw is: "<<b<<endl;
    // cout<<"the value of c without setw is: "<<c<<endl;


    // cout<<"the value of a with setw is: "<<setw(4)<<a<<endl;
    // cout<<"the value of b with setw is: "<<setw(4)<<b<<endl;
    // cout<<"the value of c with setw is: "<<setw(4)<<c<<endl;

//*****************operator precidence*****************
// float a=5, b=3, c=8;
// int c=a+3*b;
// float d=a+b/c+6-2+b*b;
// cout<<"the value is : "<<d;



 float a=3 , j = 14, k = 16;
 int  i = 12;
    a += ((((((2 * i++) % 5) * 4) + (--j)) - (3 / k)) + 2);
    cout << a;
    return 0;
}