#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (auto &c: s) c = 'X';
    cout << s << endl;
}
