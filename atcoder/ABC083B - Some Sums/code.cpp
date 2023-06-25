#include <iostream>
using namespace std;

int func(int n){
    int s;
    s = 0;

    while(n != 0){
        s += n%10;
        n /=10;
    }
    
    return s;
}



int main(void){
  int N, A, B;
  int s;
  cin >> N >> A >> B;
  int res = 0;
  for (int i = 1; i <= N; ++i) {
    s = func(i); 

    if((s>=A) && (s<=B)) {
        res +=i; 
    }
  }  
  cout << res << endl;
    return 0;
}