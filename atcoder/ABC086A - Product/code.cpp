#include <iostream>
using namespace std;
int main(void){
    int a,b,c;

    cin >> a >> b;
    c = a*b;

    if(c%2==1){
        cout << "Odd" << endl; 
    }else{
        cout << "Even" << endl;
    }
        
    return 0;
}