//Program to check if given vector is sorted or not
//Program to find the last occurence of element in vector
# include<iostream>
# include <vector>
using namespace std;

int main(){
    
    vector<int> v={1,2,3,4,5};
    
    for(int i=0;i<v.size()-1;i++){
        if (v[i]<=v[i+1])
        {
            continue;
            
        }
        else{
            cout<<"The vector is unsorted."<<endl;
            return 0;
        }
        
    }
    cout<<"The vector is sorted."<<endl;
    return 0;
}