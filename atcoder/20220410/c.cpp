#include <iostream>
#include <queue>
using namespace std;

int main(){
    int N;
    cin >> N;
    double s[1000000];
    int flag=0;
    for(int i=0; i<N; i++){
        s[flag]=i+1;
        flag++;
        if(i==0) continue;
        for(int j=flag-2; j>=0; j--){
            s[flag]=s[j];
            flag++;
        }
    }

    for(int i=0; i<flag; i++){
        cout << s[i] << ' ';
    }
    cout << endl;
    
}