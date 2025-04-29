// using vector 
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int N,M; // N is places M is roads
  cin>>N>>M;
  vector<vector<int>> roads; // 2d vector to store each road
  for(int i=0;i<M;i++){
    int A,B; cin>>A>>B;
    vector<int>temp = {A,B};
    roads.push_back(temp);
  }
  int Q; cin>>Q;
  for(int i=0;i<Q;i++){
    int X,Y; cin>>X>>Y; // X,Y to check given road
    vector<int>temp = {X,Y};
    bool res=false;
    for(auto it=roads.begin(); it!=roads.end(); it++){
      if((*it)[0]==temp[0] && (*it)[1]==temp[1]){ // it iterator contains a road each time
        res=true; break;
      }
    }
    if(res==false) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
}
