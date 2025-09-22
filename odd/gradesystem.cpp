#include <iostream>
using namespace std;
int main(){
    double sub1,sub2,sub3,sub4,sub5,percentage,totalmarks=500;
    
    cout << "enter your marks of sub1:";
    cin >> sub1;

    cout << "enter your marks of sub2:";
    cin >> sub2;
    cout << "enter your marks of sub3:";
    cin >> sub3;
    cout << "enter your marks of sub4:";
    cin >> sub4;
    cout << "enter your marks of sub5:";
    cin >> sub5;
    percentage = ((sub1+sub2+sub3+sub4+sub5)/totalmarks) *100;
    cout << "your percentage is:" << percentage << "%" << '\n';

    if(percentage >= 90){
        cout << " wow you got an" << "A+";
    }
    else if(percentage >= 80){
        cout << " Impressive you got an" << " A";
    }
    else if(percentage >= 70){
        cout << "you got an" << " B+";
    }
    else if(percentage >= 60){
        cout << "you got an" << " B";
    }
    else if(percentage >= 50){
        cout << "you got an" << " C+";
    }
    else if(percentage >= 40){
        cout << "you got an" << " C";
    }
    else if(percentage >= 30){
        cout << "you got an" << " D+";
    }
    else if(percentage >= 20){
        cout << "you got an" << " D";
    }
    else{
        cout << "you  failed";
    }
return 0;

}
