//print all the elements of array using  recursion
# include<iostream>
using namespace std;

void result(int arr[],int id,int n){
    if(sizeof(arr)==0){
        cout<<" "<<endl;
    }
    if(id!=n){
        cout<<arr[id]<<endl;
        result(arr,id+1,n);
    }
    

}

int main(){
    int arr[5]={1,2,3,4,5};
    result(arr,0,5);

    return 0;
}