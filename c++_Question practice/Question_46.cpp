//program to find the pair of sum of given integer
# include<iostream>
# include <vector>
using namespace std;

int input(vector<int> &v){
    int n;
    cout<<"Enter the size of vector:-",cin>>n,cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        v.push_back(-0);
    }
    return 0;
    
    
}

int main(){

    vector<int> v={1,2,3,4,5};
    
    int s;
    cout<<"Enter the number:-",cin>>s,cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        int n=v[i];
        for (int j = i+1; j < v.size(); j++)
        {
            if (n+v[j]==s)
            {
                cout<<"Yes"<<endl;
                return 0;
            }
            
        }
        
    }
    cout<<"No"<<endl;
    

    return 0;
}