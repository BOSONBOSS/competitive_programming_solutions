#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printTillN(int n) {
    //base case:
    if(n==0){
        return;
    }
    printTillN(n-1);// rec funx
    cout<<n<<" ";//print after returning
    
    }

};