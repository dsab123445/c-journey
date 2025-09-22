#include <iostream>
using namespace std;
int main(){
    double a,b;
    char op;
    cout << "enter any two numbers:";
    cin >> a >> b;
    cout << "operators: + - * / % \n";
     cin >> op;

     switch(op){
        case '+':
            cout << a+b;
            break;

        case '-':
            cout << a-b;
            break;

        case '*':
          cout << a*b;
          break;

        case '/':
        cout << a/b;
        break;
          

        case '%':
        cout << int(a) % int(b);
        break;

        default:
        cout << "invlaid op";
        break;

     }
    return 0;




    
}