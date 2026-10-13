#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int i,j;
//     for(i=0;i<4;i++){
//         for(j=0;j<4;j++){
//             cout<< "* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// * * * * 
// * * * * 
// * * * * 
// * * * *    using FUCNTIONS!


void pattern1(int n){
    //from here
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}// to here ACTUALLY ASKED IN ONLINE COMPILERS!

int  main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    pattern1(n);
    return 0;
}
