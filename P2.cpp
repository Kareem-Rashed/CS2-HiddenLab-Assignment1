#include <iostream>
#include <string>
using namespace std;


bool is_Palindrome(string s, int front, int end){
    
    if((s[end]==s[front])&&(end <= front))
        return true;
    else if (s[end]==s[front])
        return is_Palindrome(s, front+1, end-1);
    else
        return false;
        
    
}


// lol // laal // radar
int main(){
    
    string word;
    
    cin>>word;
    
    if(is_Palindrome(word,0,word.length()-1))
        cout<<endl<<"This word is indeed a palindrome"<<endl;
    else
        cout<<endl<<"This word is NOT a palindrome"<<endl;
    
    
    
    return 0;
}

