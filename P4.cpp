#include<iostream>
using namespace std;

int main(){
    
    int x, y;
    
    cin>>x>>y;
    
    int *p1 = &x;
    int *p2 = &y;
    
    int temp = *p2;
    
    *p2 = *p1;
    
    *p1 = temp;
    
    cout<<x<<endl;
    cout<<y<<endl;
    
    
    
    
    
    return 0;
}

