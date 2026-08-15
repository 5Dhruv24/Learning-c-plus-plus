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
    while(left<=right or top<=bottom){

        if(direction==0)

    }

}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n , vector<int> (n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>v[i][j];
        }
        
    }

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