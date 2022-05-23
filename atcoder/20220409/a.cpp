#include <iostream>
using namespace std;

int main()
{
    double N, K;
    cin >> N >> K;
double a[N];
    for (double i = 0; i < N; i++){
        cin >> a[i];
    }
    double min = a[0], mini = 0;
    for (double i = 0; i < K; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            mini = i;
        }
    }
    double maxi = -1;
    for (double i = mini; i < K; i++)
    {
        for(double j=K; j<N; j++){
            if(a[i]<a[j] ){
                maxi = j;
                mini = i;
                break;
            }
        }
    }
    if (maxi == -1)
        cout << maxi << endl;
    else
    {
        maxi -= mini;
        cout << maxi << endl;
    }
}