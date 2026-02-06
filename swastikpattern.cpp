#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int mid = (N / 2) + 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            // Check conditions for printing '*'
            if (i == mid || j == mid || 
               (i == 1 && j > mid) || (i == N && j < mid) || 
               (j == 1 && i < mid) || (j == N && i > mid)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}