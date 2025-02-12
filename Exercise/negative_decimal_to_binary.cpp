#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n;
    cout << "Enter a negative decimal number: ";
    cin >> n;

    if (n >= 0) {
        cout << "Please enter a negative number." << endl;
        return 1;
    }

    // Convert to positive for bit manipulation
    unsigned int pos_n = -n;

    // Find the binary representation of the positive number
    bitset<8> binary(pos_n);

    // Invert the bits
    binary.flip();

    // Add 1 to get the two's complement
    binary = binary.to_ulong() + 1;

    cout << "Binary representation of " << n << " is: " << binary << endl;

    return 0;
}