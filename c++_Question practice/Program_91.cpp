//NEXT QUESTION FROM SAME VIDEO RACE TRACK ONE
# include<iostream>
using namespace std;

bool comp(int arr[],int n,int mid){
    int current=arr[0];
    int posi=0;
    
    for (int i = 0; i < n; i++)
    {
    
    if (current>arr[4]) return false;
    else if(current+mid>arr[4] ) return false;
    else{ current+=arr[posi+mid];
    posi+=mid;}

    }
    return true;


}


int result(int arr[],int n){
    int lo=0;
    int hi=5;
    int lastplace=0;
    int ans=0;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(comp(arr,n,mid)){
            ans=mid;
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
        
        

    }
    return ans;
}

int main(){
    int arr[]={1,2,4,8,9};
    int n;
    cout<<"Enter no of students:-",cin>>n,cout<<endl;
    cout<<result(arr,n);

    return 0;
}