//find sum of digits using recusion
# include<iostream>
using namespace std;

int sum(int n){
    if(n>=0 and n<=9) return n;
    return (sum(n/10))+(n%10);
}


int main(){
    int n;
    cout<<"Enter the integer:-",cin>>n,cout<<endl;
    cout<<sum(n);
    return 0;
}