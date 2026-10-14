//selection sort
# include<iostream>
using namespace std;

void seclectionsort(int *arr,int n){
    for (int i = 0; i <= n-1; i++)
    {
        int min_idx=i;
        for (int j = i+1; j <= n-1; j++)
        {
            if (arr[min_idx]>arr[j])
            {
                min_idx=j;
            }
            
        }
        if (min_idx!=i)
        {
            swap(arr[i],arr[min_idx]);
        }
        
        
    }
    
}

int main(){
    int arr[5]={29,573,18,03,82};
    int n=sizeof(arr)/sizeof(arr[0]);
    seclectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}