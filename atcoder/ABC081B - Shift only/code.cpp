#include <iostream>
using namespace std;

int main(void){
    int n;
    int ans = 0;
    cin >> n;
    int a[n];
    bool state = true;

    while(state){
        for(int i=0; i<n; i++){
            if(ans==0){cin >> a[i];}
            if(a[i]%2 ==1){state = false;}
        }

        if(state == true){
           for(int j=0; j<n; j++){
            a[j] = a[j]/2;
            }
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}