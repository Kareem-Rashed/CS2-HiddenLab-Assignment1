#include <iostream>
using namespace std;


int second_largest(int arr[], int size){
    
    int max = 0;
    int second_max = 0;
    
    for(int i=0; i<size; i++)
    {
        if((*(arr+i))>max)
            max = *(arr+i);
    }
    for(int i=0; i<size; i++)
    {
        if(((*(arr+i))>second_max)&&(*(arr+i)<max))
            second_max = *(arr+i);
    }
    
    
    return second_max;
}

int main(){
    
    int *arr;
    int size;
    
    cout<<"How many elements do you want in this array?: ";
    cin>>size;
    
    
    arr = new int[size];
    
    for(int i=0; i<size; i++)
    {
        cout<<"Enter element number "<<i+1<<": ";
        cin>>*(arr+i);
    }
    
    cout<<endl<<"The second largest number in this array is: "<<second_largest(arr, size)<<endl;
    

    
    
    return 0;
    
}

