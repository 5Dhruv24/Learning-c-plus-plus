//program to merge and sort 2 array
# include<iostream>
# include <vector>
using namespace std;

int main() {
    vector<int> a = {1,3,5,6};
    vector<int> b = {0,4,7,9,11};
    vector<int> res;

    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            res.push_back(a[i]);
            i++;
        }
        else {
            res.push_back(b[j]);
            j++;
        }
    }
    while (i<a.size())
    {
        res.push_back(a[i]);
        i++;
    }
    while (j<b.size())
    {
        res.push_back(b[j]);
        j++;
    }
    
    
    
    cout<<"[";
    for (int j:res)
        {
            cout<<j<<",";
        }
    cout<<"]";
    cout<<endl;
    
    
    return 0;}
