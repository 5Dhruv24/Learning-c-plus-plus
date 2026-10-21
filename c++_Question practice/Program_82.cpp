//program tp add 2 sortedd list in one array
# include<iostream>
using namespace std;

void sort(int * a1,int * a2,int * arr,int n1,int n2){
    int i=0;
    int j=0;
    int k=0;
    
    while(k<n1+n2){
        if(a1[i]<a2[j]){
            arr[k]=a1[i];
            i++;
            k++;
        }
        else{
            arr[k]=a2[j];
            j++;
            k++;
        }
    }
    


}


int main(){
    int arr1[]={1,3,4};
    int arr2[]={2,5,7};
    int arr[6];
    sort(arr1,arr2,arr,3,3);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
    
    return 0;
}