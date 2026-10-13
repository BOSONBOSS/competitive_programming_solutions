#include <iostream>
using namespace std;

void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
int  main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    pattern5(n);
    return 0;
}
// 1
// 22
// 333
// 4444
// 55555