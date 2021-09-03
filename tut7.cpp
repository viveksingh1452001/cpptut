#include<iostream> //this is a system defined header file
#include"user.h" //this is a user defined header file and for this you have to make a user.h file in the directory
using namespace std;
int c=45;
int main(){
    //**********************built-in data types***********************
    // int a,b,c;
    // cout<<"enter the vlaue of a: "<<endl;
    // cin>>a;
    // cout<<"enter the vlaue of b: "<<endl;
    // cin>>b;
    // c=a+b;
    // cout <<"the sum of local variable is:"<<c<<endl;
    // cout <<"the sum of global variable is:"<<::c<<endl;


    // ****************float,double and long double literals*****************
    // float d=34.3;
    // long double e=34.4;
    // cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;// default is double
    // cout<<"the size of 34.4 is "<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34.4 is "<<sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4 is "<<sizeof(34.4l)<<endl;
    // cout<<"the size of 34.4 is "<<sizeof(34.4L)<<endl;
    



    // **********************reference variable***********************

    // float x=255;
    // float & y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;


     // **********************typecasting ***********************

     int p=32;
     float q=23.345;
     cout<<"the value of p is : "<<(float)p<<endl;
     cout<<"the value of p is : "<<float(p)<<endl;
     cout<<"the value of q is : "<<(int)q<<endl;
     cout<<"the value of q is : "<<int(q)<<endl;
      float r=int(q);
      cout<<"the exp. is: "<<p+q<<endl;
      cout<<"the exp. is: "<<p+int(q)<<endl;
      cout<<"the exp. is: "<<p+r<<endl;
    return 0;
}