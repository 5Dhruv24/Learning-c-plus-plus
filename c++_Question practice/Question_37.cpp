//program to increase the step of given array
# include<iostream>
# include <vector>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5};
    int step;
    cout<<"Enter number of steps:-",cin>>step,cout<<endl;
    for (int i = 0; i < step; i++)
    {
        int num=v[v.size()-1];
        v.pop_back();
        v.insert(v.begin(),num);
        
    }
    cout<<"Array successfully rotated."<<endl;
    cout<<"[";
    for (int j:v)
        {
            cout<<j<<",";
        }
        cout<<"]";
    cout<<endl;
        
    return 0;
}