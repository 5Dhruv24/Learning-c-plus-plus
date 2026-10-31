//Find Minimum in Rotated Sorted Array
# include<iostream>
using namespace std;

int result(int arr[],int l,int h){
    while(l<=h){
        int mid=l+(h-l)/2;

        if(arr[mid]<arr[mid-1]) return arr[mid];
        if(arr[mid]>arr[mid+1]) return arr[mid+1];
        if(arr[l]>arr[h] && arr[mid]>=arr[l]){
            l=mid+1;

        }
        else{
            h=mid-1;
        }
    }
}

int main(){
     int arr[]={6,7,1,2,3,4};
   
    int n=sizeof(arr)/sizeof(arr[1]);
    
    cout<<result(arr,0,n-1);
    return 0;
}