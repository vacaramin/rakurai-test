#include <iostream>
using namespace std;

string reverse(string str, int l);

int main(){
    
    string s = "Hello world! My name is Jeff";
    cout<< "Original String = " << s <<endl;
    cout<< "Reversed String = " << reverse(s, s.length())<< endl;
    return 0;
}


string reverse(string str, int l){
    
    if (l == 0){
        return "";
    }

    return str[l] + reverse(str, --l);
}