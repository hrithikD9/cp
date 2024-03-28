#include <iostream>
using namespace std;

int getProduct(int n) {
    if (n == 0) {
        return 1;
    }
    return (n % 10) * getProduct(n / 10);
}

int main() {
    cout << "Product of digits: " << getProduct(14641) << endl;
    return 0;
}
