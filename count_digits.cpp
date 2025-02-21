#include <iostream>
using namespace std;
int countDigits(int n) {
    int a = n;
    int count = 0;
    while (n > 0) {
        int digit = n % 10; 
        if (digit != 0 && a % digit == 0) { 
            count++;
        }
        n = n / 10;
    }
    return count;
}
int main() {
    int n;
    cin >> n; 
    int result = countDigits(n);
    cout <<result << endl;
    return 0;
}
