//recursion with fibonacci series
# include<iostream>
using namespace std;

int value(int n){
    if(n==0 or n==1){
        return n;

    }
    return value(n-2)+value(n-1);
}
int main(){
    int n;
    
    cout<<"Enter the n value:-",cin>>n,cout<<endl;
    
    cout<<value(n);
    return 0;
}