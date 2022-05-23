#include <iostream>
using namespace std;
 
int main(){
    int N;
    cin >> N;
    long long flag=1, i;
    for(i=1; i<=N; i++){
        flag*=i;
    }
    cout << flag << endl;
}