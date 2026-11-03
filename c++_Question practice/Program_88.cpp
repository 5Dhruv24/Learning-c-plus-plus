//binary search on 2d list
# include<iostream>
#include<vector>
using namespace std;

int bs(vector<int> arr,int target,int l,int h ){
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
}
int result(vector<vector<int>> arr,int target,int l,int h){
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid][0]<=target and arr[mid][arr[mid].size()-1]>=target){
            return bs(arr[mid],target,0,arr[mid].size()-1);
        }
        else if(arr[mid][arr[mid].size()-1]<target){
            l=mid+1;
        }
        else{
            h=mid-1;
        }

    }
}
int main(){
    vector<vector<int>> ar= {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
    
    int size=ar.size()-1;
    int target;
    cout<<"Enter target:-",cin>>target,cout<<endl;
    
    cout<<result(ar,target,0,size);
    return 0;
    return 0;
}