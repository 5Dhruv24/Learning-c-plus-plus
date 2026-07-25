//Program to find the total occurence of element in vector
# include<iostream>
# include <vector>
using namespace std;

int main(){
    int element;
    int occu=0;
    vector<int> v={1,46,2,3,7,1,5,3,1};
    cout<<"Enter the element:-",cin>>element,cout<<endl;
    for(int i=0;i<v.size();i++){
        if (v[i]==element)
        {
            occu++;
            
        }
        
    }
    cout<<"The total occurence:-"<<occu<<endl;
    return 0;
}