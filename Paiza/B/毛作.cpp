#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(void){
   int n,m,h,w;
   cin >> n >> m >> h >> w;
   
   int startX[n],endX[n],startY[n],endY[n], seed[n];
   string plain[h];
   int count[9];
   
   memset(count, 0, sizeof(count));
   
   for(int i=0; i<n; i++){
       cin >> startX[i] >> endX[i] >> startY[i] >> endY[i] >> seed[i];
   }
   
   for(int a=0; a<h; a++){
       for(int b =0; b<w; b++){
           plain[a] += '.';
       }
   }
   
   
   for(int j=0; j<n; j++){
       string str = to_string(seed[j]);
      for(int x =0; x<h; x++){
        for(int y=0; y<w; y++){
            if((((startX[j]-1) <= x) && (x <= (endX[j]-1))) && (((startY[j]-1) <= y) && (y <= (endY[j]-1)))){
                if(plain[x][y] != '.'){
                    switch(plain[x][y]){
                        case '1': count[0]++; break;
                        case '2': count[1]++; break;
                        case '3': count[2]++; break;
                        case '4': count[3]++; break;
                        case '5': count[4]++; break;
                        case '6': count[5]++; break;
                        case '7': count[6]++; break;
                        case '8': count[7]++; break;
                        case '9': count[8]++; break;
                        default: break;
                    }
                }
                plain[x][y] = str[0];
            }
        }           
           
      }
  }
   
  for(int t=0; t<m; t++){
      cout << count[t] << endl;
  }
   
   for(int s=0; s<h; s++){
    cout << plain[s] << endl;
    
   }
   
   
   return 0;
}