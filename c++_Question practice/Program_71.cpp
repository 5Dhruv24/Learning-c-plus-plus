//program to count jthe total possible path in m*n vector
# include<iostream>
using namespace std;

int result(int i,int j,int m ,int n){
    if(i==m-1 and j==n-1) return 1;
    if(i>=m or j>=n) return 0;
    return result(i,j+1,m,n)+result(i+1,j,m,n);
}


int main(){
    cout<<result(0,0,2,3);

    
    return 0;
}