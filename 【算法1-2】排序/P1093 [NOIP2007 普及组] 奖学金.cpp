#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef struct {
    int index;
    int c;
    int m;
    int e;
    int total;
} student;
bool compare(student &s1,student &s2){
    if(s1.total!=s2.total) return s1.total>s2.total;
    else  if(s1.c!=s2.c)  return s1.c>s2.c;
   return s1.index<s2.index;
}
vector<student> students;
int main(){
    int num;
    scanf("%d",&num);
    for (int i = 1; i <= num ; ++i) {
        int c,m,e;
        scanf("%d %d %d",&c,&m,&e);
        students.push_back({i,c,m,e,c+m+e});
    }
    sort(students.begin(),students.end(), compare);
    for (int i=0;i<5;i++){
        cout<<students[i].index<<" "<<students[i].total<<endl;
    }
    return 0;
}