#include <iostream>
#include <fstream>
#include <string>
using namespace std;




int main(){
    
    ifstream input;
    ofstream output;
    
    input.open("File1.txt");
    output.open("Output.txt");
    
    
    
    for(int i = 0; i<3; i++)
    {
        double total;
        double average;
        string s;
        getline(input, s, ' ');
        output<<s<<' ';
        string score1, score2, score3;
        
        getline(input, score1, ' ');
        getline(input, score2, ' ');
        getline(input, score3, '\n');
        
        total = stod(score1)+stod(score2)+stod(score3);
        
        average = total/3;
        
        output<<score1<<' '<<score2<<' '<<score3<<' '<<average<<endl;
        
        
            
    }
        
    
    
    return 0;
}

