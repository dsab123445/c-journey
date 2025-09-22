#include <iostream>
using   namespace std;
int main(){
    int age;
    cout << "enter your age:";
    cin >> age;
    if(age < 0){
        cout << "invalid age";
    }
    else if(age <= 3){
        cout << "you are a baby";
    }
    else if(age <= 12){
        cout << "you are a child";
    }
    else if(age <= 19){
        cout << "you are a teenager";
    }
    else if(age <= 59){
        cout << "you are an adult";
    }
    else{
        cout << "you are a senior citizen";
    }
}