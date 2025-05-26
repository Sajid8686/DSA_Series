#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int>age;
    age["Alice"] = 27;
    age["Rehman"] = 24;

    if (age.find("sajid") != age.end()) {
        cout << "Alice is in the map." << endl;
    }

    for (auto pair : age) {
        cout << pair.first << " => " << pair.second << endl;
    }

    return 0;
}