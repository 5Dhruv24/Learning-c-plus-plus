//move all zeroes at the back
# include<iostream>
using namespace std;

void sort(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(arr[j]==0 and j!=n-1){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    
}



int main(){
    int arr[]={23,0,4,0,2,0,11,11};
    int n=sizeof(arr)/sizeof(arr[1]);
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    
    return 0;
}