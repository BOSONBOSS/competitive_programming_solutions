#include <bits/stdc++.h>
using namespace std;


//Q. recursion to print n to 1

// void printNum(int n){ //teh recursion functin for teh choti problem
//     //base case:-
//     if(n==1){
//         cout<<1;
//         return; //VERY IMPORTANT! 
//     }

//     //the above works for n out of all n top 1 numbers. 
//     //for n 
//     cout<<n<<" ";

//     //for rest of n-1. -> run teh same recursion fujction
//     printNum(n-1);
// }
// int main(){
//     cout<<"enter n: ";
//     int n;
//     cin>>n;
//     cout<<"numbers from "<<n<<" to 1 are:";
//     printNum(n);
//     return 0;
// }

//FACTORIAL;-
// int fact(int n){
//     if(n==0){
//         return 1;
//     }
    
//     return n*fact(n-1);
// }
// int main(){
//     cout<<"enter n: ";
//     int n;
//     cin>>n;
//     cout<<"factorial of "<<n<<":"<<fact(n);
    
//     return 0;
// }



//SUM OF N NUMBERS
// int sums(int n){
//     if(n<=0){
//         return 0;
//     }
    
//     return n+sums(n-1);
// }
// int main(){
//     cout<<"enter n: ";
//     int n;
//     cin>>n;
//     cout<<"sum of "<<n<<"no.s :"<<sums(n);
    
//     return 0;
// }


//Q. N FIBONACCI
//fibs: 0 1 1 2 3 5... SO 0,1->N; FIB(N)= FIB(N-1)+FIB(N-2)
//nums: 0 1 2 3 4 5... so {for n=0 put fib=0} BaseCase and {for n=1,2 put fib=1} Condition

int fibs(int n){
    //base case
    if(n==0){
        return 0;
    }
    //return logic
    if(n==1 || n==2){
        return 1;
    }
    else{
        return (fibs(n-1)+fibs(n-2));
    }
        
}
int main(){
    cout<<"enter n: ";
    int n;
    cin>>n;
    cout<<"fibonacci of "<<n<<"no.s :";
    for(int i=0;i<n;i++){
        cout<< fibs(i)<<" ";
    }
    return 0;
}