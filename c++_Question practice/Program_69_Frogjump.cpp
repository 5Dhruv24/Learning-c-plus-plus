//frogjump
# include<iostream>
using namespace std;

int result(int * n,int l,int i){
    if(i==l-1) return 0;
    if(i==l-2) return result(n,l,i+1)+abs(n[l]-n[l-1]);

    return min(result(n,l,i+1)+abs(n[i]-n[i+1]),result(n,l,i+2)+abs(n[i]-n[i+2]));
}

int main(){
    int arr[]={10,30,40,20};
    int l=4;
    int i=0;
    cout<<result(  arr,l,i);
    return 0;
}