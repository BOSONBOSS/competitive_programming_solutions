#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    void rotate( vector <vector<int>> &matrix){
        //n x n matrix;
        int n=matrix.size(); // -->*r*=c=n;
        // roatate by 90= 1. transpose(swap row and col) 2. reverse col
        //1. Transpose
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){ //j=i+1 -> for SQ MATRIX--for upper triangle/- !! #REMEMBER
                swap(matrix[i][j],matrix[j][i]); //swap return void/ nothing! #REMEMEBER
            }
        }
        //2. reverse col;
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        // no need to return anyting, its void! handle everything in int main();
    }
};
int main(){
    int n;
    cin>>n;
    vector <vector<int>>matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cin>> matrix[i][j];
        }
    }

    Solution obj;
    obj.rotate(matrix);
    //output teh result
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<< matrix[i][j]<<" ";
        }
        cout<< endl;
    }
    return 0;
}