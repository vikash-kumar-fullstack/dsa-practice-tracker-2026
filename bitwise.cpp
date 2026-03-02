#include<iostream>
using namespace std;

int main() {
    int a = 6;
    int b = 2;

    // Bitwise AND (&)
    // 6  = 110
    // 2  = 010
    // 6 & 2 = 010 (2)
    cout << (a & b) << endl;

    // Bitwise OR (|)
    // 6  = 110
    // 2  = 010
    // 6 | 2 = 110 (6)
    cout << (a | b) << endl;

    // Bitwise XOR (^)
    // 6  = 110
    // 2  = 010
    // 6 ^ 2 = 100 (4)
    cout << (a ^ b) << endl;

    // Bitwise NOT (~)
    // Formula: ~x = -(x + 1)
    // ~2 = -(2 + 1) = -3
    cout << (~b) << endl;

    // Left Shift (<<)
    // a << 1 means a * 2
    // 6 << 1 = 12
    cout << (a << 1) << endl;

    // Left shift on negative numbers
    // p = -5
    // -5 << 1 = -10
    int p = -5;
    cout << (p << 1);

    return 0;
}