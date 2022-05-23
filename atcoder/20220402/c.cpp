#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, k, x;
    
    cin >> n >> k >> x;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }



    sort(a,a+n,greater<>());

    for(int j=0; j<n; j++){
        cout << a[j] << " " << endl;
    }

    int flag=0, more=0;

    for(int i=0; i<k; i++){

        if(more==0){
            a[flag] -= x;

            if(a[flag]<=0){
            a[flag]=0;
            flag++;
        }
        else if(a[flag]<x){
            flag++;
        }
        if(flag==n){
                sort(a,a+n,greater<>());
                flag = 0;
                more=1;
                for(int j=0; j<n; j++){
        cout << a[j] << " " << endl;
    }
            }

        }
        else if(more==1){
            a[flag]=0;
            flag++;
        }
        
    }

    int count=0;

    for(int i=0; i<n; i++){
        count += a[i];
        cout << a[i] << endl;
    }

    cout << count << endl;

}