//Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
# include<iostream>
using namespace std;

int result(int arr[],int target,int l,int h){
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==target){
            ans=mid;
            break;
        }
        else if(arr[mid]<target){
            
            l=mid+1;
        }
        else if(arr[mid]>target)
        {
            ans=mid;
            h=mid-1;
        }
    }
    if(ans==-1){
        return h+1;
    }
    return ans;

}

int main(){
    int arr[]={1,2,3,4,6,7};
    int target;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter target:-",cin>>target,cout<<endl;
    cout<<"Index:-"<<result(arr,target,0,size-1);
    return 0;
}