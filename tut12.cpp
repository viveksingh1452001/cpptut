// // C++ code to illustrate return
// // statement
// #include <iostream>
// using namespace std;

// // non-void return type
// // function to calculate sum
// int SUM(int a, int b)
// {
// 	int s1 = a + b;
// 	return s1;
// }

// // returns void
// // function to print
// void Print(int s2)
// {
// 	cout << "The sum is "<< s2;
// 	return;
// }

// int main()
// {
// 	int num1 = 10;
// 	int num2 = 10;
// 	int sum_of = SUM(num1, num2);
// 	Print(sum_of);
//     cout<<sum_of;
// 	return 0;
// }

//******************find the position of array**********************
// #include <iostream>
// using namespace std;

// int main()
// {
// 	int arr[]={11,2,23,54,65,86};
//     int n=6 ,key;
//     cout<<"enter the number: "<<endl;
//     cin>>key;
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//         cout<<"the position is:"<<(i+1);
//         break;
//         }
//         else{
//             cout<<"the number is not in the array"<<endl;
//             break;
//         }
//     }

// 	return 0;
// }



//******************check whether the number is prime or not**************************
// #include<iostream>
// using namespace std;

// int main(){
//     int x,i;
//     cout<<"enter the number: "<<endl;
//     cin>>x;
//     for( i=2;i<x;i++){
//         if(x%i==0){
//             cout<<"the number is not prime"<<endl;
//             break;
//         }
       
//     }
//      if(i==x){
//             cout<<"the number is prime"<<endl;
        
//         }
//     return 0;
// }


//************************fibonacci series*****************************

// #include<iostream>
// using namespace std;

// int main(){
//     int n1=0,n2=1,n3,i,num;
//     cout<<"enter the number of elements: ";
//     cin>>num;
//     cout<<n1<<" "<<n2<<" ";
//     for(i=2;i<num;i++){
//         n3=n1+n2;
//         cout<<n3<<" ";
//         n1=n2;
//         n2=n3;
//     }
//     return 0;
// }


//*****************palindrome****************************

#include<iostream>
using namespace std;

int main(){
    int sum=0,r,i,temp;
    cout<<"enter the number: ";
    cin>>i;
    temp=i;
    while(i>0){
        r=i%10;
        sum=(sum*10)+r;
        i=i/10;
    }
    if(sum==temp)
    cout<<"the number is palindrome";
    else
    cout<<"the number is not palindrome";
    return 0;
}