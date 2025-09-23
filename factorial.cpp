#include <iostream>
using namespace std;
int main(){
    int n;
     int fact = 1;
    cout << "enter a number:";
    cin >> n ;
    for(int i=1;i<=n;i++){
        fact = fact * i;

    }
    if(n<0){
        cout << "invlaid";

    }
    else{
        cout << "factorial of" << n << " is " << fact;

    }
    return 0;

    {
        
    } // namespace ;

    
}