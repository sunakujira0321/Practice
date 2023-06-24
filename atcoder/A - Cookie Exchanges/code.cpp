#include <iostream>

using namespace std;

int func(int a, int b , int c){
    if((a%2 == 1) || (b%2 == 1) || (c%2 ==1) ) return 0;
    if(a==b && a==c) return -1;
    return func((b+c)/2,(c+a)/2,(a+b)/2)+1;
}

int main(void){
    int a,b,c;
    cin >> a >> b >> c;

    int ans = func(a,b,c);
    cout << ans << endl;
    return 0;
}