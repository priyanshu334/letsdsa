#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& s, int n) {
    int s1 = 0;
    int e = n - 1;
    while (e > s1) {
        swap(s[s1], s[e]);
        s1++;
        e--;
    }
}

int main() {
    vector<int> s = {1, 2, 3, 4, 5};
    int n = s.size();
    reverse(s, n);
    for (int i : s) {
        cout << i << " ";
    }
    return 0;
}
