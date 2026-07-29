//program to sort the array of 0 and 1
# include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a={1,0,0,0,1,1,0,0};
    int p=a.size();
    for (int i = 0; i < p ;i++)
    {
        if (a[i]==1)
        {
            a.push_back(a[i]);
            a.erase(a.begin()+i);
            i-=1;
            p-=1;
        }
       
    }
    cout<<"[";
    for (int j:a)
        {
            cout<<j<<",";
        }
        cout<<"]";
    cout<<endl;
    
    
    return 0;
}