//chocolate boxes question
# include<iostream>
using namespace std;

int bs(int arr[],int total,int l,int h){
    int students[total];


    while(l<=h){
        int mid=l+(h-l)/2;
        int sum=0;
        for(int i=0;i<=total-1;i++){
            for(int j=0;j<=h;j++){
                if(sum<=arr[mid]){
                    sum=sum+arr[j];
                }
                else{break;}

            }
            students[i]=sum;

        }

    }
}


int result(int arr[],int total,int l,int h){
    while(l<=h){
        
    }
}


int main(){
    
    return 0;
}