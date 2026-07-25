//Program to find the last occurence of element in vector
# include<iostream>
# include <vector>
using namespace std;

int main(){
    int element;
    int ind=-1;
    vector<int> v={1,46,2,3,7,1,5,3,1};
    cout<<"Enter the value of element:-",cin>>element,cout<<endl;
    for(int i=0;i<v.size();i++){
        if (v[i]==element)
        {
            ind=i;
            
        }
        
    }
    cout<<"The last occurence point:-"<<ind<<endl;
    return 0;
}