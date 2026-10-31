//A sorted array is rotated at an unknown pivot. Find the index of a given target using binary search.
# include<iostream>
using namespace std;

int bs(int arr[],int target,int s,int f){

    while(s<=f){
        int mid=s+(f-s)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            f=f-1;
        }
    }
    return -1;
}
int rbs(int arr[],int target,int s,int f){
    int ans=-1;
    int st=s;
    int sp=f;
    while(s<=f){
        int mid=s+(f-s)/2;
        if(arr[mid]==target){
            ans=mid;
            return ans;
        }
        if(arr[s]>arr[f] && arr[mid]>arr[mid+1]){
            if(bs(arr,target,s,mid)!=-1){
                ans=bs(arr,target,st,mid-1);
                return ans;
            }
            else{ans=bs(arr,target,mid+1,sp);
            return ans;}

        }
        else if(arr[mid]<arr[f]){
            f=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    return ans;
}

int main(){
    int arr[]={6,7,1,2,3,4};
    int target;
    int n=sizeof(arr)/sizeof(arr[1]);
    cout<<"Enter target:-",cin>>target,cout<<endl;
    cout<<rbs(arr,target,0,n);
    
    return 0;
}