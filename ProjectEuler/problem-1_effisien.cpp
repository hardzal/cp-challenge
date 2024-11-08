#include<iostream>
using std::cout;

int sumDivisibleBy(int target, int n) {
    long long multiple = target / n;
    return (n *(multiple * (multiple + 1)) / 2);
}

int main() {
    cout << sumDivisibleBy(999, 3) + sumDivisibleBy(999, 5) - sumDivisibleBy(999, 15) << std::endl;
    return 0;
}
