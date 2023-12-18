#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
typedef struct {
    int no;
    int score;
} person;
bool compare(person &p1,person &p2){
    if(p1.score!=p2.score) return p1.score >p2.score;
    return p1.no < p2.no;

}
vector<person> persons;
vector<person> res;
int main(){
    int n,m;
    cin>>n>>m;
    while(n--){
        int no;
        int score;
        cin>>no>>score;
        persons.push_back({no,score});
    }
    sort(persons.begin(),persons.end(), compare);
    int line = persons[floor(m*1.5)-1].score;
    int cnt = 0;
    for (auto s:persons) {
        if(s.score>=line){
            res.push_back(s);
            cnt++;
        }
    }
    cout<<line<<" "<<cnt<<endl;
    for (auto s:res) {
        cout<<s.no<<" "<<s.score<<endl;
    }
    return 0;
}