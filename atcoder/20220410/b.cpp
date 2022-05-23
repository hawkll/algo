#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    string s[N], t[N];
    for(int i=0; i<N; i++) cin >> s[i] >> t[i];

    string a[N], b[N];
    int flags=0, flagt=0;

    for(int i=0; i<N; i++){
        a[i] = s[i];
        b[i] = t[i];
        for(int j=0; j<N; j++){
            if(i==j)continue;
            else{
                if(a[i]==s[j] || a[i]==t[j]){
                    flags=1;
                }
                if(b[i]==s[j] || b[i] == t[j]){
                    flagt=1;
                }
            }
        }
        if(flags==1 && flagt==1)break;
    }
    if(flags==1 && flagt==1)cout << "No" << endl;
    else cout << "Yes" << endl;
}