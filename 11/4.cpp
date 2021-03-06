#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    map<string, size_t> word_count;
    set<string> exclude = {"The", "But", "And", "Or", "An", "A", "the", "but", "and", "or", "an", "a"};
    string word;
    while (cin >> word) {
        transform(word.begin(), word.end(),word.begin(), ::toupper);
        if (exclude.find(word) == exclude.end()) ++word_count[word];
    }
    return 0;
}
