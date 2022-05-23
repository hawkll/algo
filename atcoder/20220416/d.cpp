#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int i;
    for(i=0; i<n; i++)cin >>a[i];
    int q;
    cin >> q;
    double l,r,x;
    int flag=0,j;
    for(i=0; i<q; i++){
        cin >> l >> r >> x;
        for(j=l-1; j<r; j++){
            if(a[j]==x)flag++;
        }
        cout << flag <<endl;
        flag=0;
    }
}