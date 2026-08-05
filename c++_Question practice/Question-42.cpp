//Program to multiply 2 matrices
# include<iostream>
using namespace std;


int main(){
    // int r,c;
    // cout<<"Enter number of rows:-",cin>>r,cout<<endl;
    // cout<<"Enter number of columns:-",cin>>c,cout<<endl;
    // int arr[r][c];
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    //     cout<<endl;
        
    // }
    int arr[2][2]={{1,2},{4,5}};
    int arrr[2][3]={{1,2,3},{4,5,6}};
    int result[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {   int val=0;
            for (int k = 0; k < 2; k++)
            {
                val+=arr[i][k]+arrr[k][j];
            }
            result[i][j]=val;
            
            
        }
        
    }
    
    
    
    
    //print
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    

    return 0;
}