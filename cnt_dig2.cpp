#include <iostream>
using namespace std;

// Function to count how many digits of n can evenly divide n
int countDigitsDividingN(int n) {
    int originalN = n; // Store the original value of n for divisibility checks
    int count = 0;     // Initialize the count of divisible digits

    // Loop until all digits are processed
    while (n > 0) {
        int digit = n % 10; // Extract the last digit
        n = n / 10;         // Remove the last digit from n
        
        // Check if the digit is not zero and divides originalN
        if (digit != 0 && originalN % digit == 0) {
            count++; // Increment the count if the digit divides originalN
        }
    }
    
    return count; // Return the total count of divisible digits
}

int main() {
    int N; // Variable to store the input number
    cin >> N; // Read the input number from standard input
    int result = countDigitsDividingN(N); // Call the function to count divisible digits
    cout << result; // Output the result
    return 0;
}
