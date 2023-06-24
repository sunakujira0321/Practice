#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(void){
    long int a,b,c,k;
    long int ans;
    cin >> a >> b >> c >> k;

    if(k%2 == 1){
        ans = b-a;
    }else{
        ans = a-b;
    }


    cout << ans << endl;

    return 0;
}