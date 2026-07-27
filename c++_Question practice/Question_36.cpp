//program to find second largest value
# include<iostream>
# include<vector>

using namespace std;

int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9};
    int max=0;
    int ind=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]>max)
        {
            max=v[i];
            ind=i;
        }
        
    }
    v.erase(v.begin()+ind);
    max=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]>max)
        {
            max=v[i];
            ind=i;
        }
        
    }
    cout<<max<<endl;
    return 0;
}