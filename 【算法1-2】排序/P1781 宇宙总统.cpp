#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef struct {
    int index;
    string votes;
} person;
vector<person>persons;
bool compare(person &p1,person &p2){
    if(p1.votes.size()!=p2.votes.size()) return p1.votes.size()>p2.votes.size();
    return p1.votes>p2.votes;
}
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        string vote;
        cin>>vote;
        persons.push_back({i,vote});
    }
   sort(persons.begin(),persons.end(), compare);
    cout<<persons[0].index<<endl;
    cout<<persons[0].votes<<endl;
}