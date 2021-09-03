#include<iostream>
using namespace std;
int main(){
    int vowel;
    cout<<"enter the alphabet: "<<endl;
    cin>>vowel;
    switch (vowel)
    {
    case 1:
        cout<<"this is a"<<endl;
        break;
    
    case 2:
        cout<<"this is e"<<endl;
        break;
    
    
    default:
        cout<<"this is not vowel"<<endl;
        break;
    
   
    }
    return 0;
}