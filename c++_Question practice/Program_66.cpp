//program to find sum of  first n natural number but with alt sign
# include<iostream>
using namespace std;

int result(int n){
    if(n==0) return 0;
    
    return result(n-1)+(n%2==0 ? (-n) : n);
}


int main(){
    cout<<result(10);
    return 0;
}
