#include <iostream>
using namespace std;


void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<j;
        }
        cout<<endl;
    }
    
}
int  main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    pattern6(n);
    return 0;
}
// enter n: 5
// 12345
// 1234
// 123
// 12
// 1