#include <iostream>
using namespace std;

int main(){
    long long A, B;
    cin >> A >> B;
    
    while(A>=1 && B>=1){
        if(A>B)A=A%B;
        else B=B%A;
    }
    if(A==0)cout << B << endl;
    else cout << A << endl;

}