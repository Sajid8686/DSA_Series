#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {

    unordered_set<int> numbers;
    numbers.insert(5);
    numbers.insert(10);
    numbers.insert(5);
    numbers.insert(5);
    numbers.insert(3);
    numbers.insert(5);
    numbers.insert(6);

    if(numbers.find(5) != numbers.end()){
        cout<<"5 is found"<<endl;
    }

    for(int nums : numbers){
        cout<<nums<<" ";
    }

    return 0;
}