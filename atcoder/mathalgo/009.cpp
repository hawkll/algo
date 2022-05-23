#include <iostream>
using namespace std;
 
int main(){
    int N, S;
    cin >> N >> S;
    int a[N];
    int flag=0, i, j;
    for(i=0; i<N; i++) cin >> a[i];
    // 1LL<<Nは2^Nと同じ意味
    for(i=0; i<(1LL<<N); i++){
      flag = 0;
      for(j=0; j<N; j++){
        // (i&(1LL<<j))は(iAND2^j)と同じ意味で、2進数にしたときのAND演算をする。
        //　1LL<<jは桁数を表している。
          if((i & (1LL<<j)) != 0) flag+=a[j];
      }
      if(flag == S) {cout << "Yes" << endl; return 0;}
      // return 0 は正常終了という意味があるので、それが行われた時点でプログラムを終了する。
      
    }
    cout << "No" << endl;
    return 0;
}