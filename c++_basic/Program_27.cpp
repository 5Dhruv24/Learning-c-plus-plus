//Binary grapg situatioon
# include<iostream>
using namespace std;

int  result(int arr[],int l,int h){
    int top;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(l==h){
        top=arr[mid];
            break;}
        if(arr[mid]>=arr[mid+1] && arr[mid]>=arr[mid-1]){
            top=arr[mid];
            break;
        }
        if(arr[mid]<arr[mid+1]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }

    }
    return top;
}

int main(){
     int arr[]={1};
    
   
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<<result(arr,0,n-1);
    return 0;
}