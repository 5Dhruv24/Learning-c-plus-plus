//program to get vector of spiral
# include<iostream>
#include <vector>

using namespace std;


vector<vector<int>> spiral( vector<vector<int>> &v,int n){
    int left = 0;
    int top = 0;
    int bottom=n-1;
    int right=n-1;
    int direction = 0;
    int num=1;
    while(left<=right or top<=bottom){

        if(direction==0){
            for (int col = left; col <=right; col++)
            {
                v[top][col]=num;
                num++;
            }
            top++;
            
        }
        else if (direction==1)
        {
            for (int row = top; row <= bottom; row++)
            {
                v[row][right]=num;
                num++;
            }
            right--;
            
        }
        else if (direction==2)
        {
            for (int col = right; col >= left; col--)
            {
                v[bottom][col]=num;
                num++;
            }
            bottom--;
            
        }
        else{
            for (int row = bottom; row>= top; row--)
            {
                v[row][left]=num;
                num++;
            }
            left++;
        }
        direction=(direction+1)%4;
        
        

    }
    return v;

}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n , vector<int> (n));
    

    spiral(v , n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n ; j++)
        {
            cout<<v[i][j]<<" ";
        }cout<<endl;
        
    }
    
    
    return 0;
}