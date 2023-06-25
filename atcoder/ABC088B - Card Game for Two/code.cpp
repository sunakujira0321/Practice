#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a + n, greater<int>());  // a[0:N] を大きい順にソート

    int alice = 0;
    int bob = 0;

    for(int j=0; j<n; j++){
        if(j%2 == 0){
            alice += a[j];
        }else{
            bob += a[j];
        }
    }

    cout << alice-bob << endl;


}