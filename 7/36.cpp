#include <iostream>
using namespace std;

struct X {
    // X(int i, int j): base(i), rem(base % j) {}
    X(int i, int j): base(i), rem(i % j) {};
    int rem, base;
};

int main() {

    return 0;
}
