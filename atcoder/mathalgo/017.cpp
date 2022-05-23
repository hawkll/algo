#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    long long a[N];
    for(int i=0; i<N; i++) cin >> a[i];
    long long flag = a[0];
    long long lcm =a[0];
    
    for(int i=1; i<N; i++){
        long long x = a[i];
        //最大公約数はA,Bの大きい方を小さい方で割ったあまりで計算していく。
        //0出ない方が答え。
        while(flag>=1 && a[i]>=1){
        if(flag>a[i])flag=flag%a[i];
        else a[i]=a[i]%flag;
    }
    //0でない方を答えとする。
    if(flag==0)flag=a[i];
    lcm = (lcm*x)/flag; //最小公倍数 = (A*B)/最大公約数
    }
    cout << lcm << endl;

    

}