#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> myPair = {1, 2};
    cout << myPair.first << " " << myPair.second << endl;

    pair<int, pair<int, int>> myNestedPair = {1, {2, 3}};
    cout << myNestedPair.first << " " << myNestedPair.second.first << " " << myNestedPair.second.second << endl;

    pair<int, int> myArray[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    cout << myArray[0].first << " " << myArray[1].second << endl;

    return 0;
}