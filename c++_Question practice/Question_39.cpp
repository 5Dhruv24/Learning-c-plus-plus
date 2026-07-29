//program to sort the array as even at beginning and odd number at last
# include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a={2,3,4,5,6,7,8,9};
    int p=a.size();
    for (int i = 0; i < p ;i++)
    {
        if (a[i]%2!=0)
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