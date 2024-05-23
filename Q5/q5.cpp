#include <iostream>
using namespace std;

int stringCharachterToINT(char s){
    if (s > '9' && s < 0){
        cout<<"Error | String Charachter to int failed, the charachter value is not in the numbers range"<<endl;
        return -1;
    }

    return 0;
}
string factorial(string factorial){
    return "";
}

int main(){
    string large_number = "100";
    factorial(large_number);

    cout<< "Number Input = "<<  large_number << endl;
    cout<< "Output = " << factorial(large_number)<< endl;

}