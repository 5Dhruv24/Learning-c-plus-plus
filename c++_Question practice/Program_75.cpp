//insertion sort
//selection sort
# include<iostream>
using namespace std;

void insertionnsort(int *v,int n){
    for (int i = 1; i <= n-1; i++)
    {
        int current=v[i];
        int j=i-1;
        while(j>=0 && v[j]>current ){
            v[i]=v[j];
            j--;
        }
        v[j+1]=current;
        
       
        
        
    }
    
}

int main(){
    int arr[5]={29,573,18,03,82};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionnsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}