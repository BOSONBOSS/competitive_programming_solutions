#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector< vector<int> > transpose(vector<vector<int>> &matrix){ //vector return type!
        int r=matrix.size();
        int c=matrix[0].size();
        vector <vector <int>>result(c,vector<int>(r));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                result[j][i]=matrix[i][j];
            }
        }
        return result;
    }
};

int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>>matrix(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
    Solution obj;
    vector<vector<int>> answer = obj.transpose(matrix);
    for(int i=0;i<answer.size();i++){
        for(int j=0;j<answer[i].size();j++){
            cout<< answer[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
