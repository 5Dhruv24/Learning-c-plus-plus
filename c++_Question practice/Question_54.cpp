//program to 2d prefix sum
#include <vector>
# include<iostream>
using namespace std;


int main(){
    int n,m;
    cin>>m>>n;



    //input values of vector
    vector<vector<int>> v(m,vector<int> (n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>v[i][j];

        }
        
    }
    int l1,l2,r1,r2;
    cin>>l1>>r1>>l2>>r2;
    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            v[i][j]+=v[i][j-1];
            
        }
        
    }
    
   
        
    
    int sum=0;
    for (int i = l1; i<=l2 ; i++)
    {
        if(r1!=0){
            sum+=v[i][r2]-v[i][r1-1];
    }
        else{
            sum+=v[i][r2];
        }
    }
    
    cout<<"sum:-"<<sum<<endl;
    return 0;
}
    






