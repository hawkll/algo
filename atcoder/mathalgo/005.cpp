#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int a[N];
    int flag=0;
    for(int i=0; i<N; i++){
        cin >> a[i];
        flag+=a[i];
    }
    cout << flag%100 << endl;
}