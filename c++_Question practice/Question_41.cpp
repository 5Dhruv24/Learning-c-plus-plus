# include<iostream>
using namespace std;

int main(){
    int arr[7]={6,2,4,3,1};
    int pre=0;
    int suf=0;

    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){

        pre+=arr[i];
        for(int j=6;j>i;j--){
            suf+=arr[j];
            if (pre==suf)
            {
                cout<<"The sum is equal that is:-"<<pre<<endl;
                return 0;
            }
            
        }
        suf=0;
    }
    cout<<"the sum is not equal"<<endl;

    return 0;
}