#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    void setZeroes(vector<vector <int>>&matrix){
        int r=matrix.size();
        int c=matrix[0].size();
        // markers of size r/c and with values all set to 0;
        vector <int> rows(r,0);
        vector <int> cols(c,0);

        //mark/flag when zero found!-- just mark, matrix not changes yet
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    rows[i]=1;
                    cols[j]=1;
                }
            }
        }
        //cleaning- changign matrix to 0 where we marked for 0
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(rows[i]==1 || cols[j]==1){// ==1 not ==0!!!! #REMEMEBER!
                    matrix[i][j]=0;
                }
            }
        }
        //no return bcz viod;
    }
};
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>> matrix(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }

    Solution obj;
    obj.setZeroes(matrix);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}