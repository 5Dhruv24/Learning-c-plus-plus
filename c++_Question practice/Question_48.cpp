//program to do the square of each array in the given array
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
    for (int i = 0; i < v.size(); i++)
    {
        int n=v[0];
        v.erase(v.begin());
        v.push_back(n*n);
    }

     cout<<"[";
    for (int j:v)
        {
            cout<<j<<",";
        }
    cout<<"]";
    cout<<endl;
    
    

    return 0;
}