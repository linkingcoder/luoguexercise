#include <iostream>
using namespace std;
int main(){
    int n;
    int q[1010];
    bool state[1010];
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        cin>>q[i];
        if(i>1) {
            int x = abs(q[i] - q[i - 1]);
            if(x>=1&&x<=n-1) {
                state[x] = true;
            }
        }
    }

    for (int i = 1; i <= n-1; ++i) {
        if(!state[i]) {
            cout<<"Not jolly"<<endl;
            return 0;
        }
    }
    cout<<"Jolly"<<endl;
    return 0;
}