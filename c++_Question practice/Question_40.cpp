//program to sort the array and reutrn the square of each number
# include<iostream>
#include <vector>
using namespace std;

void main(){
    vector<int> a={1,2,3,4,5};
    int p=a.size();
    for (int i = 0; i < p ;i++)
    {
        int num=a[i]*a[i];
        a.erase(a.begin()+i);
        a.insert(a.begin()+i,num);
        
       
    }
    


    cout<<"[";
    for (int j:a)
        {
            cout<<j<<",";
        }
    cout<<"]";
    cout<<endl;
    
    
    
    
}