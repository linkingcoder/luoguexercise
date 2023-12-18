#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e3 + 10;
bool used[N];
int q[110];
int cnt=0;
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i <n ; ++i) {
        int num;
        scanf("%d",&num);
        if(!used[num]){
            q[cnt] = num;
            cnt++;
            used[num] = true;
        }
    }
    sort(q,q+cnt);
    cout<<cnt<<endl;
    for (int i = 0; i < cnt ; ++i) {
        cout<<q[i]<<" ";
    }

}