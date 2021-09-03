#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 10; i++)

    //****************break**************
    // {
    //     cout<<i<<endl;
    //     if(i==3){
    //         break;
    //     }
    // }
    
    //*****************continue****************
    {
        if(i==4){
            continue;
        }
        cout<<i<<endl;
    }
    
return 0;
}