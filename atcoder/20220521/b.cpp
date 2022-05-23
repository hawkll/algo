#include <iostream>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    int a[N], b[K];
    int flag=0;

    for(int i=1; i<=N; i++){
        cin >> a[i];
        if(flag < a[i])flag=a[i];
    }
    for(int i=0; i<K; i++){
        cin >> b[i];
        if(a[b[i]]==flag) {
            cout << "Yes" << endl;
            return 0;
        }    
    }

    cout << "No" << endl;
    return 0;

}