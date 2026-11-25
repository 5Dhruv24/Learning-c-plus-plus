//lecture 47 chocolate question
# include<iostream>
using namespace std;

bool comp(int n,int temp[],int choco[],int mid){
    int student=1;
    int amount=0;
    int size=9;
    for (int i = 0; i < size; i++)
    {
        if(choco[i]>mid) return false;
        else if(choco[i]+amount>mid){
            amount=choco[i];
            student++;
            if(student>n) return false;
        }
        else{
            amount+=choco[i];
        }

    }
    return true;
    


}

int binary(int n,int temp[],int choco[]){
    int lo=choco[0];
    int hi=0;
    int ans=0;
    for (int i = 0; i < 9; i++)
    {
        hi+=choco[i];
    }
    

    
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(comp(n,temp,choco,mid)){
            ans=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }

    }
    
    return ans;
}

int main(){
    int choco[]={14,25,54,68,140,223,564,570,670};
    int n;
    cout<<"Enter no of students:-",cin>>n,cout<<endl;
    int temp[n];
    cout<<binary(n,temp,choco);


    return 0;
}