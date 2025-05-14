# Most-frequent-element-in-an-array
Most frequent element in an array .......here i am checking the each element in the arry, also i had aready cheacked earlier.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int mostFreqEle(vector<int> &a) {
    int n = a.size(), maxcount = 0;
    int res;
     for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 1; j < n; j++)
        {
            if (a[i] == a[j])
                count++;
        }
         if (count > maxcount || (count == maxcount && a[i] > res))   // If count is greater or if count is same but value is bigger.
         {
            maxcount = count;                                                      
            res = a[i];
        }
    }       return res;
}
int main() {
    vector<int> a = { 1,2,8,9,4,1,1,8,8};
    cout << mostFreqEle(a);
    return 0;
}

