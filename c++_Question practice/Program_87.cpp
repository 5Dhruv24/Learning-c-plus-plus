//find the minimum number in the array
# include<iostream>
using namespace std;

int index(int arr[],int st,int end){
    int min=arr[0];
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]>arr[mid+1]) return mid+1;
        if(arr[mid]<arr[mid-1]) return mid;
        if(arr[mid]>=arr[st] && arr[st]>arr[end] ){
            st=mid+1;
            
        }
        else{end=mid-1;
        }
    }
    return ans;
}

int main(){
    int ar[]={6,7,8,1,2,3};
    
    int size=sizeof(ar)/sizeof(ar[0]);
    
    cout<<index(ar,0,size-1);
    return 0;
}