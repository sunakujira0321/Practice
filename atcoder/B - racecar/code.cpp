#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;

    string s[n], str1,ans,ans2;
    ans2 = "No";

    for(int k=0; k<n; k++){
            cin >> s[k];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                ans = "Yes";
                str1 = s[i]+s[j];
                for(int k=0; k<str1.length(); k++){
                    if(str1[k] != str1[str1.length()-k-1]){
                        // cout << str1 << endl;
                        ans = "No";
                        break;
                    }
                }
                if(ans == "Yes"){
                    ans2 = "Yes";
                }
            }
        }
    }

    cout << ans2 << endl;

    return 0;
}