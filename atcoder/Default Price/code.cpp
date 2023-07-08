#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

int n,m,sum;
sum =0;
int p[101];
cin >> n >> m;

string c[n],d[101];

for(int i=0; i<n; i++){cin >> c[i];}
for(int j=0; j<m; j++){cin >> d[j];}
for(int k=0; k<m+1; k++){cin >> p[k];}



for(int a=0; a<n; a++){
    for(int b=0; b<m; b++){
        if(c[a]==d[b]){
            sum += p[b+1];
            break;
        }else{
            if(b==m-1){
                sum += p[0];
            }
        }
    }
}

 cout << sum << endl;

 return 0;
 }