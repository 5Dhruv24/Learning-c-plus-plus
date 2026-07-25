//Program to find the number of elements greater than given element in vector
# include<iostream>
# include <vector>
using namespace std;

int main(){
    int element;
    int n=0;
    vector<int> v={1,46,2,3,7,1,5,3,1};
    cout<<"Enter the value of element:-",cin>>element,cout<<endl;
    for(int i=0;i<v.size();i++){
        if (v[i]>element)
        {
            n++;
            
        }
        
    }
    cout<<"The total greater elements:-"<<n<<endl;
    return 0;
}