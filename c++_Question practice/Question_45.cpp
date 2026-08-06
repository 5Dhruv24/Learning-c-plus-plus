//pascal triangle
# include<iostream>
# include<vector>

using namespace std;
int fact(int o){
    int fact=1;
    if(o<=1){
        return fact;

    }
    else{
        for (int i = 1; i <= o; i++)
        {
            fact*=i;
            
        }
        return fact;
        
        
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n);
    
    for (int i = 0; i < n; i++)
    {   v[i].resize(i+1);
        for (int j = 0; j < i+1; j++)
        {
            int num=fact(i)/(fact(j)*fact(i-j));
            v[i][j]=num;
        }
        
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    
    return 0;
}