//program to find whether the integer exist in array or not
# include<iostream>
using namespace std;

bool result(int * arr,int n,int i,int x){
    if (i>=x)
    {
        return 0;
    }
    
    if (arr[i]==n)
    {
        return 1;
    }
    return result(arr,n,i+1,x);
    
}

int main(){
    int arr[]={2,3,1,4,23};
    cout<<result(arr,5,0,5);
    
    return 0;
}