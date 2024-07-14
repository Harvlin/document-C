#include <iostream>
using namespace std;
long long faktorial(int n) {
    if (n <= 1)
        return 1;
    return n * faktorial(n - 1);
}
long long kombinatorika(int n, int k) {
    return faktorial(n) / (faktorial(k) * faktorial(n - k));
}
int main() {
    cout << combination(6, 2);
    return 0;
}
