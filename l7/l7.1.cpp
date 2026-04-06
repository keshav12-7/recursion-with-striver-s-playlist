#include <bits/stdc++.h>
using namespace std;
void f(int i, int n, int arr[], vector<int> &temp, int &sum, int k)
{

    if (sum == k)
    {
        for (int x : temp)
        {
            cout << x << " ";
        }
        cout << endl;
        return;
    }

    temp.push_back(arr[i]);
    sum = sum + arr[i];
    f(i + 1, n, arr, temp, sum, k);

    temp.pop_back();
    sum = sum - arr[i];
    f(i + 1, n, arr, temp, sum, k);
}
int main()
{
    int arr[] = {3, 4, 2, 5, 1};
    vector<int> temp;
    int sum = 0;
    f(0, 5, arr, temp, sum, 5);
}