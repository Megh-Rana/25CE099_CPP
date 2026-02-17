#include <iostream>
#include "header.h"
#include <vector>
using namespace std;

int main()
{
    int n;
    Sum sum;
    cout << "Enter size of array: ";
    cin >> n;
    
    vector<int> arr(n);

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Iterative Sum: " << sum.iterativeSum(arr) << endl;
    cout << "Recursive Sum: " << sum.recursiveSum(arr,n) << endl;
    return 0;

}