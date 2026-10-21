//binary search
# include<iostream>
# include <vector>
using namespace std;

int search(vector<int> arr,int target){
    int l=0;
    int hi=arr.size()-1;
    while(l<=hi){
        int mid=(hi+l)/2;
        if (arr[mid]==target) return mid;
        else if(arr[mid]<target){
            l=mid+1;
        }
        else{
            hi=mid-1;
        }
        
    }
    return -1;
}


int main(){
    vector<int> ar={3,6,23,34,56,56,78,879,999,1000};
    int target;
    cout<<"enter the target:-",cin>>target,cout<<endl;
    cout<<search(ar,target);
    
    return 0;
}