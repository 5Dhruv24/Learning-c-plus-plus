//program to find the occurence of first and last digit
# include<iostream>
#include<vector>
using namespace std;

vector<int> search(int v[],int t,int st,int sp){
    int f, last;
    f =-1;
    last=-1;
    int s=st;
    int q=sp;
    
    
    while(st<=sp)
    {   
        int mid=st + (sp-st)/2;
        if(v[mid]==t){
            
            f=mid;
            sp=mid-1;
        }
        else if(v[mid]<t){
            st=mid+1;
        }
        else if(v[mid]>t){
            sp=mid-1;
        }
       
    }
    
    while(s<=q)
    {   
        int mid=s + (q-s)/2;
        if(v[mid]==t){
            
            last=mid;
            s=mid+1;
        }
        else if(v[mid]<t){
            s=mid+1;
        }
        else if(v[mid]>t){
            q=mid-1;
        }
        
    }
    
    return{f,last};
}

int main(){
    int ar[]={1,2,4,4,5,5,5,6,7,8,9};
    int target;
    int size=sizeof(ar)/sizeof(ar[0]);
    cout<<"enter the target:-",cin>>target,cout<<endl;
    vector<int> ans=search(ar,target,0,size-1);
    cout<<"[";
    for (int i = 0; i < 2; i++)
    {
        cout<<ans[i]<<",";
    }
    cout<<']';
    
    return 0;
}