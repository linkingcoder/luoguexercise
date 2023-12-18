#include <iostream>

using namespace std;
const int n =2e4+10;
int h[n];
typedef long long ll;
void quick_sort(int q[],int l,int r){
    if(l>=r) return;
    int i = l-1,j = r +1 ,x= q[(l+r)>>1];
    while (i<j){
        do i++; while (q[i]<x);
        do j--; while (q[j]>x);
        if(i<j) swap(q[i],q[j]);
    }
    quick_sort(q,l,j), quick_sort(q,j+1,r);
}
int main(){
    int N;
    ll B;
    scanf("%d %lld",&N,&B);
    for (int i = 0; i <N ; ++i) {
        scanf("%d",&h[i]);
    }
    quick_sort(h,0,N-1);
    int cnt = 0;
    ll s = 0;
    for (int i = N-1; i >=0 ; i--) {
        if(s>=B) break;
        s += h[i];
        cnt++;
    }
    cout<<cnt<<endl;
}