#include <iostream>

using namespace std;
const int N = 1e4+10;
int q[N];
int main(){
    int n;
    int cnt = 0;
    scanf("%d",&n);
    for (int i = 0; i < n ; ++i) {
        scanf("%d",&q[i]);
    }
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0;j< n-1-i ; ++j) {
            if(q[j]>q[j+1]){
                swap(q[j],q[j+1]);
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}