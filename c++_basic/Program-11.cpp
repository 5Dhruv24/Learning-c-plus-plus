# include<iostream>
using namespace std;

//call by value
void swap(int x,int y){  //not swap the value
    int z=x;
    x=y;
    y=z;

}

//call by reference
void swapr(int *x,int *y){   //swap using address
    int z=*x;
    *x=*y;
    *y=z;

}


//call by reference variable
void swapv(int &x,int &y){  //swap the value
    int z=x;
    x=y;
    y=z;

}


int main(){
    int a=10,b=20;
    cout<<"The current value of a is "<<a<<" and b is "<<b<<endl;
    
    
    swap(a,b);
    cout<<"The swapped value of a is "<<a<<" and b is "<<b<<endl; //not swapped
    
     cout<<a,
    swapr(&a,&b);
    cout<<"The swapped value of a is "<<a<<" and b is "<<b<<endl;  //swapped
    
    
    swapv(a,b);
    cout<<"The swapped value of a is "<<a<<" and b is "<<b<<endl;  //swapped
    

    return 0;
}
