#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool searchMatrix(vector <vector<int>> &matrix, int target){
        //define r,c;
        int r=matrix.size();
        int c=matrix[0].size();

        //BiNARY SEARCH
        //define low and high;
        int low=0;
        int high=r*c-1;

        //start the while;
        while(low <= high){ //<= // REMEMEBR!
            //define mid (1d)
            int mid=low+ (high-low)/2;
            //convert 1d idx into 2d coord;
            int row=mid/c;
            int col=mid%c;
            // any value in matrix defined by:
            int value=matrix[row][col];

            //apply search conditions
            if(value==target) return true;
            else if(value<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};

int main(){
    //first define for matrix
    int r,c;
    cin>>r>>c;
    vector< vector<int>> matrix(r,vector <int> (c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>> matrix[i][j];
        }
    }
    //now actual application of function
    int target;
    cin>>target;
    Solution obj;
    cout<< ( obj.searchMatrix(matrix,target)? "true":"false")<<endl;
    //if there is ? then no "if"
    return 0;
}