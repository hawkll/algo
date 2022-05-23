#include <iostream>
using namespace std;

bool isprime(long long N){
    if(N<=1) return false;
    for(long long i=2; i*i<=N; i++){
        if(N%i == 0)return false;
    }
    return true;
}
 
int main(){
    long long N;
    cin >> N;
    long long  x, i;
    x=N;
    for(i=2; i*i<=N; i++){
        if(x%i==0 && isprime(i)==true){
            x = x/i;
            cout << i << ' ';
            i--;
        }
}
    if(x>=2)cout << x;
    cout << endl;
    return 0;
}

