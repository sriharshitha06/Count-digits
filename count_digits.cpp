#include <iostream>
using namespace std;

// Count digits of n that evenly divide n
int countDigits(int n) {
    int a = n; // Store original n
    int count = 0; // Counter for divisible digits

    // Process each digit
    while (n > 0) {
        int digit = n % 10; // Get last digit

        // Check if digit divides original n
        if (digit != 0 && a % digit == 0) {
            count++; // Increment count
        }

        n = n / 10; // Remove last digit
    }

    return count; // Return count of divisible digits
}

int main() {
    int n; // Input number
    cin >> n; // Read input

    int result = countDigits(n); // Count divisible digits
    cout << result << endl; // Output result
    return 0; 
}
