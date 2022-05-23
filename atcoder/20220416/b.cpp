#include <iostream>
using namespace std;

int main(){
    double a,b,k;
    cin >> a >> b >> k;
    double i=0;
    while(a<b){
        i++;
        a*=k;
    }
    cout << i << endl;
}