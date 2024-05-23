#include <cstdlib>
#include <iostream>
using namespace std;


// Functional Declrations
string factorial(string factorial); // Calculating the factorial
void match_strings(string& s1, string& s2); // matching two strings
string sum(string s1, string s2); // adding two strings
int stringCharachterToINT(char s); // string

int main(){
    string large_number = "100";
    factorial(large_number);
    
    cout<< "Number Input = "<<  large_number << endl;
    cout<< "Output = " << factorial(large_number)<< endl;

    string s1 = "5";
    string s2 = "56";
    cout<< "\n\n";
    cout<< "s1 = " << s1 <<"\t s2 = "<< s2 << endl << endl; 

    match_strings(s1, s2);
 
    cout<< "After matching \n s1 = " << s1 <<"\t s2 = " <<s2<< endl<<endl; 
}

string factorial(string factorial){
    return factorial;
}


void match_strings(string& s1, string& s2){
    if (s1.length() < s2.length()){
        do{
            s1 = '0' + s1; 
            
            
        }while(s1.length()!= s2.length());
        
    }else{
        do{
            s2 = '0' + s2; 
        }while(s1.length()!= s2.length());
        
    }
}
string sum(string s1, string s2){
    string s  = ""; 
    match_strings(s1, s2);
    int carryValue = 0;
    for(int i = s1.length() -1; i >= 0; i--){
        s += (stringCharachterToINT(s1[i]) + stringCharachterToINT(s1[i]) + carryValue) % 10;
        carryValue = (stringCharachterToINT(s1[i]) + stringCharachterToINT(s1[i]))/10;
    }
    return 0;
}

// 48 to 57 range 0 to 9
char IntToStringChar(int i){
    if (i > 9){
        cout<<"Error in INT TO STRING | int should not be negative or greater than 11"<<endl; 
    }
    return char(i + 48);
}

// 48 to 57 range 0 to 9
int stringCharachterToIN(char s){
    if (s > '9' && s < '0'){
        cout<<"Error | String Charachter to int failed, the charachter value is not in the numbers range"<<endl;
        return -1;
    }
    return int(s) - '0';
}




