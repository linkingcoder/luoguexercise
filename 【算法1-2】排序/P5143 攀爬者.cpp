#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
typedef struct {
    int x,y,z;
}  p;
vector<p> ps;
bool compare(p &p1,p&p2){
    return p1.z>p2.z;
}
double getdist(p &p1,p&p2){
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)
    +(p1.z-p2.z)*(p1.z-p2.z));
}
int main(){
    int n;
    cin>>n;
    double dist = 0;
    for (int i = 0; i < n; ++i) {
         int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        ps.push_back({x,y,z});
    }
    sort(ps.begin(),ps.end(), compare);
    for (int i = 1; i < n ; ++i) {
            dist += getdist(ps[i],ps[i-1]);
    }
    printf("%.3f",dist);
    return 0;
}