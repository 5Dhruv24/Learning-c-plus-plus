//quick sort
# include<iostream>
using namespace std;

int partition(int *arr ,int st,int last){
    int i=st-1;
    int pivat=arr[last];
    for (int j = st; j <= last-1; j++)
    {
        if(arr[j]<pivat){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[last],arr[i+1]);
    return i+1;
    
}


void quicksort(int *v,int st,int last){
    if(st>=last) return;
    int pi=partition(v,st,last);
    quicksort(v,st,pi-1);
    quicksort(v,pi+1,last);
}


int main(){
    int arr[]={23,2,5,6,2,6,43,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n-1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
    
    return 0;
}