//Given a sorted array with duplicate numbers, find the starting and ending position of a given target value.

# include<iostream>
#include <vector>
using namespace std;

vector<int> result(int arr[],int target,int l,int h){
    int first=-1;
    int last=-1;
    int st=l;
    int sp=h;
    
    while(l<=h){
        int mid=l+(h-l)/2;
                
        if(arr[mid]==target){
            first=mid;
            h=mid-1;

        }
        else if(arr[mid]<target){
            l=mid+1;
        }
        else{
            h=mid-1;
        }}
    while(st<=sp){
        int mid=st+(sp-st)/2;
        if(arr[mid]==target){
            last=mid;
            st=mid+1;
        }
        else if(arr[mid]<target){
            st=mid+1;
        }
        else{
            sp=mid-1;
        }
        
    }
    
    
    return {first,last};

}


int main(){
    int arr[]={1,2,3,4,4,6,7};
    int target;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter target:-",cin>>target,cout<<endl;
    vector<int> r =result(arr,target,0,size-1);
    for (int i = 0; i < 2; i++)
    {
        cout<<r[i]<<" ";
    }
    
    return 0;
}