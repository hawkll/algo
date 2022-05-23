#include <iostream>
using namespace std;
 
int main(){
    int N, S;
    cin >> N >> S;
    int flag=0, i, j;
    for(i=1; i<=N; i++){
      for(j=1; j<=N; j++){
          if(i+j<=S)flag++;
      }
    }
    cout << flag << endl;
}