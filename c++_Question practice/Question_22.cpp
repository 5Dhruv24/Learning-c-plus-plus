//Progrgam to find area and circumference of circle
# include<iostream>
# include <cmath>

using namespace std;

void circle(int r){
    float p=3.14;
    float a=p*(pow(r,2));
    float c=2*p*r;
    cout<<"Area of circle:-"<<a<<endl;
    cout<<"Circumference of circle:-"<<c<<endl;

}
int main(){
    int r;
    cout<<"Enter radius:-",cin>>r,cout<<endl;
    circle(r);
    
    return 0;
}