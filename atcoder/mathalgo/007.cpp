#include <iostream>
using namespace std;
 
int main(){
    int N, X, Y;
    cin >> N >> X >> Y;
    int flag=0, i;
    for(i=1; i<=N; i++){
      
        if(i%X==0 || i%Y==0){
            flag++;
        }
    }
    cout << flag << endl;
}