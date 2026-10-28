//Given a sorted array, find the index of a target element. If it doesn't exist, return -1
# include<iostream>
using namespace std;

int result(int arr[],int target,int l,int h){
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==target){
            ans=mid;
            h=mid-1;
        }
        else if(arr[mid]<target){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return ans;

}

int main(){
    int arr[]={1,2,3,4,4,5,6,7};
    int target;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter target:-",cin>>target,cout<<endl;
    cout<<"Index:-"<<result(arr,target,0,size);
    return 0;
}