#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef struct {
    string name;
    int y,m,d;
    int index;
} student;
vector<student>students;
bool compare(student &s1,student &s2){
    if(s1.y!=s2.y)  return s1.y<s2.y;
    if(s1.m!=s2.m)  return s1.m<s2.m;
    if(s1.d!=s2.d)  return s1.d<s2.d;
    return s1.index>s2.index;
}
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n ; ++i) {
        string name;
        int y,m,d;
        cin>>name>>y>>m>>d;
        students.push_back({name,y,m,d,i});
    }
    sort(students.begin(),students.end(), compare);
    for (const auto &item: students){
        cout<<item.name<<endl;
    }
    return  0;
}