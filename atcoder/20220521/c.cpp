#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;
    string str[N];
    int flag[10];
    int hoge = 0;
    int x =0, y;
    for(int i=0; i<10; i++)flag[i]=0;

    for(int i=0; i<N; i++){
        cin >> str[i];
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<N; j++){
            y = int(str[j].at(i)-'0');
            flag[y]++;
            if(flag[y]==N){
                hoge = i;
                x = j;
                if(i<N-1){
                    hoge += (N-i-1)*10;
                }
                break;
            }
        }
        if(flag[y]==N) break;
    }

    cout << hoge << endl;
    return 0;

}