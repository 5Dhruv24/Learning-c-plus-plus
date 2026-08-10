//Program to print the spiral
# include<iostream>
# include<vector>

using namespace std;

void spiral(vector<vector<int>> & v){

    int right=v[0].size()-1;
    int left=0;
    int top=0;
    int bottom=v.size()-1;
    int direction =0;
    while(left<=right || top<=bottom){
    //left-->right
    
    if (direction==0)
    {
        for (int col = left;col <= right; col++)
        {
            cout<<v[top][col]<<" ";

        }
        top++;
        
    }

    //right-->bottom
    else if(direction==1){
        for (int row = top; row <= bottom; row++)
        {
            cout<<v[row][right]<<" ";
        }
        right--;
        
    }

    //right-->left
    else if(direction==2){
        for (int col = right; col >= left; col--)
        {
            cout<<v[bottom][col]<<" ";
        }
        bottom--;
        
    }
    

    //bottom--> top
    else if(direction==3){
        for (int row = bottom; row >=top; row--)
        {
            cout<<v[row][left]<<" ";
        }
        left++;
    }
    else{
        continue;
    }
    direction=(direction+1)%4;
    
}
}

int main(){
    int n,m;
    cin>>m>>n;
    vector<vector<int>> v(m,vector<int> (n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>v[i][j];

        }
        
    }
    
    spiral(v);
    return 0;
}