//Program to find the kth smallest element of the list
# include<iostream>
using namespace std;

int part(int * arr,int n,int st,int k){
    int pivat=arr[n];
    int i;
    i=st-1;
    for (int j = 0; j < n-1; j++)
    {
        if(arr[j]<pivat){
            i++;
            swap(arr[i],arr[j]);

        }
    }
    swap(arr[i],arr[n]);
    return i;

    
}


int quicksort(int * arr,int n,int st,int k){
    if(k>=0 and k>n){
    int p=part(arr,n,st,k);
    if(p==k-1){
        
        return arr[p] ;
    }

    if(p<k-1){
        
        return quicksort(arr,p-1,st,k);}
    if(p>k-1){  
        k=k-p+1;
        return quicksort(arr,n,p+1,k);}
    }
    
}

int main(){
    int k;
    int arr[] = {1,5,3,7,6,2,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Enter k:-",cin>>k,cout<<endl;
    cout<<quicksort(arr,n,0,k);

    return 0;
}