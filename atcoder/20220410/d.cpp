#include <iostream>
#include <queue>
using namespace std;

int main(){
    double q;
    cin >> q;
    queue<double> que;
    int flag;
    long long x, c, ans=0;
    for(int i=0; i<q; i++){
        cin >> flag;
        if(flag==1){
            cin >> x >> c;
            for(int j=0; j<c; j++){
                que.push(x);
            }

        }
        else if(flag==2) {
            cin >>c;
            if(c>q){
                ans+=que.front();
                ans=ans*c;
                cout << ans << endl;
                ans=0;
            }
            else{
            for(int j=0; j<c; j++){
                ans+=que.front();
                que.pop();
            }
            cout << ans << endl;
            ans=0;
            }
            }

    }
}