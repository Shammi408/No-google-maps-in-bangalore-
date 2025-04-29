#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

string make_key(int a, int b) {
    if (a > b) swap(a, b); // ensure smaller number comes first
    return to_string(a) + "-" + to_string(b);
}

int main() {
    int N, M;
    cin >> N >> M;

    unordered_set<string> roads; //saving each road as string
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        roads.insert(make_key(A, B)); //makes string of a road
    }

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int X, Y;
        cin >> X >> Y;
        string key = make_key(X, Y); //makes string of query road
        if (roads.find(key) != roads.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
