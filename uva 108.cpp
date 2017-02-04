#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <climits>
#include <cstdio>

using namespace std;

int kadane(int arr[], int n)
{
    int sum = 0;
    int ans = 0;
    for(int i = 0; i <n; i++){
        if(arr[i] + sum < 0)
            sum = 0;
        else
            sum += arr[i];
        ans = max(sum, ans);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int matrix[n][n];
    int maxm = INT_MIN;
    for(int i = 0;i <n; i++){
        for(int j= 0; j<n; j++){
            cin >> matrix[i][j];
            maxm = max(maxm, matrix[i][j]);
        }
    }
    if(maxm <= 0){
        cout << maxm << endl;
        return 0;
    }
    int sum = INT_MIN;
    int ans;

    for(int i = 0; i<n; i++){
            int sub_arr[n] = {0};
        for(int j = i; j<n; j++){
            for(int k=0; k<n; k++){
                sub_arr[k] += matrix[j][k];
            }
            ans = kadane(sub_arr, n);
            sum = max(sum, ans);
        }
    }
    cout << sum << endl;
}
