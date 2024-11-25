#include <iostream>
using namespace std;

int main() {
    // variables
    int a, b, c;
    // get all inputs
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    // sum logic
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    // input logic
    cout << "The maximum number is: " << max << endl;
    return 0;
}
