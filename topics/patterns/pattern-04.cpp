#include <iostream>
using namespace std;


void pattern4(int n){
    // for(int i=0;i<n;i++){
    //     for(int j=n-1;j>=i;j--){ //j=(n-1) not n
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    for (int i =1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int  main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    pattern4(n);
    return 0;
}


