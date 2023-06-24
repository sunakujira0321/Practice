#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;

    long int a[7];
    long int sum[n];


    for(int i=0; i<n; i++){
        sum[i] = 0;
        for(int j =0; j<7; j++){
            cin >> a[j];
            sum[i] += a[j];
        }
    }

    for(int k =0; k<n; k++){
        cout << sum[k] << endl;
    }

    return 0;
}