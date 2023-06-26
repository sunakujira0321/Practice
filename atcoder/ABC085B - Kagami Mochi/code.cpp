#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int a[n];
    int res =0;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n, greater<int>());

    for(int j=0; j<n; j++){
        if(j==0){
            res++;
        }else if(a[j]!=a[j-1]){
            res++;
        }
    }

    cout << res << endl;
}