#include <iostream>
#include <string>
using namespace std;


bool is_Palindrome(string s){
    
    char flipped[s.length()];
    int check=0;
    
    for(int i = 0; i<s.length(); i++)
    {
        flipped[i] = s[s.length()-1-i];
    }
    
    for(int i = 0; i<s.length(); i++)
    {
        if(flipped[i] == s[i])
            check++;
    }
    return(check==s.length());
    
}



int main(){
    
    string word;
    
    cin>>word;
    
    if(is_Palindrome(word))
        cout<<endl<<"This word is indeed a palindrome"<<endl;
    else
        cout<<endl<<"This word is NOT a palindrome"<<endl;
    
    
    
    return 0;
}

