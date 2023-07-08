#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

int s[8];
string res = "Yes";

for(int i=0; i<8; i++){
    cin >> s[i];
}

for(int j=1; j<8; j++){
    if(s[j]<s[j-1]){
            res="No";
            break;
    }
}

for(int k=0; k<8; k++){
    if(res=="No") break;
    if((s[k]<100)||(s[k]>675)){
        res="No";
        break;
    }
}

for(int l=0; l<8; l++){
    if(res=="No") break;
    if(s[l]%25 != 0){
        res="No";
        break;
    }
}

cout << res << endl;

 return 0;
 }