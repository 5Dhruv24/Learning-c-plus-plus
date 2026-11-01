//Search for a target in a rotated sorted array that may contain duplicate elements.
# include<iostream>
using namespace std;

int bs(int arr[],int target,int l,int u){
    int ans=-1;
    while(l<=u){
        int mid=l+(u-l)/2;
        
        if(arr[mid]==target){
            ans=mid;
            u=mid-1;
        }
        if(arr[l]>=arr[u]){
            if(arr[mid]<=arr[mid-1] && arr[u]>target){        //rotated part
                l=mid+1;
            }
            else{
                u=mid-1;
            }
        }
        else{                                   //sorted array
            if(arr[mid]<target) l=mid+1;
            else u=mid-1;
        }
    }
    return ans;
}


int main(){
    int arr[]={3,6,7,1,2,2,3};
    int target;
    cout<<"Enter target:-",cin>>target,cout<<endl;
   
    int n=sizeof(arr)/sizeof(arr[1]);
    
    cout<<bs(arr,target,0,n-1);
    return 0;
    
}