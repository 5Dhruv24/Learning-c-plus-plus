//First occurence of the number
# include<iostream>
# include<vector>
using namespace std;

int search(vector<int>  arr,int target,int l,int h){
    int ans; 
    if(l>h){
        return -1;
     }
     int mid=(h+l)/2;
     if(arr[mid]==target){
            ans=mid;
            h=mid-1;
            

     }
     else if(arr[mid]<target){
        return search(arr,target,mid+1,h);
     }
     else if(arr[mid]>target){
        return search(arr,target,l,mid-1);
     }
     return ans;
}


int main(){
    vector<int> ar={1,2,4,4,5,5,5,6,7,8,9};
    int target;
    cout<<"enter the target:-",cin>>target,cout<<endl;
    cout<<search(ar,target,0,8);
    return 0;
}