#include <iostream>
#include <vector>
using namespace std;

// function to find and return the array
vector<int> FindMinimum(vector<int> v) {
    vector<int> result;
    for (int i = 1; i < v.size()-1; i++) {
        if (v[i] < v[i - 1] && v[i] < v[i + 1]) {
            result.push_back(v[i]);
        }
    }
    return result;
};

int main() {
    // input array
    vector<int> inputArray = {10,1,10,2,3,5,1,4,3};

    // calling the function
    vector<int> outputArray = FindMinimum(inputArray);

    // printing the array
    for (int i=0;i<outputArray.size();i++) {
        cout << outputArray[i] << " ";
    }
    return 0;
}