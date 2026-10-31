//program to find the target in rotated array
# include<iostream>
using namespace std;


int result(int arr[],int t,int l,int h){
    while(l<=h){
        int mid=l+(h-l)/2;
        if (arr[mid]==t) return mid;
        else if(arr[mid]<t){
            l=mid+1;

        }
        else{
            h=mid-1;
        }

        
    }
    
}
int minsrch(int arr[],int t,int l,int h){
    int ans=-1;
    
    while(l<=h){
        int mid=l+(h-l)/2;
         if(arr[mid]>arr[mid+1]){
            ans=mid;
            break;
        };
        if(arr[mid]<arr[mid-1]){
            ans=mid+1;
            break;
        };
        if(arr[l]>arr[h] && arr[mid]>=arr[l]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    if(arr[ans]==t){
        return ans;
    }
    if(arr[ans]<t){
       return result(arr,t,l,ans-1);

    }
    else{
        return result(arr,t,ans+1,h);
    }
    
}



int main(){
    int ar[]={5,6,1,2,3,4};
    int target;
    int size=sizeof(ar)/sizeof(ar[0]);
    cout<<"enter the target:-",cin>>target,cout<<endl;
    cout<<minsrch(ar,target,0,size);
    
    return 0;
}