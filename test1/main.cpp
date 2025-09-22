#include <iostream>
using namespace std;

int main() {
    double celsius;
    double fahrenheit;

    cout << "請輸入華氏溫度!\n";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    cout << "攝氏溫度為: " << celsius << " 度\n";
    return 0;
}