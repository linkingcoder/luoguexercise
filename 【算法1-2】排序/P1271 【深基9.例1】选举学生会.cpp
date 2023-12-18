#include <iostream>
#include <vector>

using namespace std;
const int N = 2e6 + 10;
int n,m;
int v[N];
void quick_sort(int q[], int l, int r)
{
    if (l >= r) return;

    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }
    quick_sort(q, l, j), quick_sort(q, j + 1, r);
}

int main() {
    scanf("%d %d",&n,&m);
    for (int i = 0; i < m ; ++i) {
        scanf("%d",&v[i]);
    }
    quick_sort(v,0,m-1);
    for (int i =0 ;i<m;i++){
        if(i!=m-1) {
            cout << v[i] << " ";
        } else {
            cout<<v[i]<<endl;
        }
    }
    return 0;
}