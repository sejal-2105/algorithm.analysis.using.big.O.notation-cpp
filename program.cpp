#include <iostream>
#include <vector>
using namespace std;
int getFirstElement(const vector<int>& arr) {
    return arr[0]; 
}
void printElements(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
void printPairs(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            cout << "(" << arr[i] << "," << arr[j] << ") ";
        }
        cout << endl;
    }
}
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "O(1) Example: First element = " << getFirstElement(numbers) << endl;
    cout << "\nO(n) Example: Printing elements:" << endl;
    printElements(numbers);
    cout << "\nO(n^2) Example: Printing pairs:" << endl;
    printPairs(numbers);
    return 0;
}
