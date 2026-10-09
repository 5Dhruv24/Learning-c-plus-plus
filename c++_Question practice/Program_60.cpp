//Program to find the maximum value of array using recursion

# include<iostream>
using namespace std;

int result(int arr[],int id,int n){
    if(id>=n ){
        return arr[n-1] ;
    }
    return max(arr[id],result(arr,id+1,n));
    

}

int main(){
    int arr[5]={1,2,6,4,5};
    int max=0;

    cout<<result( arr ,0,5);
    

    return 0;
}