#include <iostream>
using namespace std;
int main(){

    //********************for loop*******************
    // int i;
    // cout<<"enter your number: "<<endl;
    // cin>>i;
    // for(i;i<10;i++){
    //     cout<<i<<endl;
    // }


    //********************infinte-for loop*****************

    // int i=1;
    // for(i;1<10;i++){
    //     cout<<i<<endl;
    // }


    //*********************while loop******************

    // int i=1;
    // while(i<=10){
    //     cout<<i<<endl;
    //     i++;
    // }

    //*********************infinite while loop*****************
    // int i=1;
    // while(true){
    //     cout<<i;
    //     i++;
    // }


    // ***********************do-while loop********************

    // int i=11;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=10);



    //**********************table program*************
    // int i,j;
    // cout<<"Enter the number: "<<endl;
    // cin>>j;
    // for(i=1;i<=20;i++){
    //     cout<<j<<"x"<<i<<"="<<(i*j)<<endl;
    // }

    //**********************star pattern***************
    int i,j,k;
     cout<<"Enter the number: "<<endl;
    cin>>k;
    for(i=1; i<=k; i++){

        for(j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}