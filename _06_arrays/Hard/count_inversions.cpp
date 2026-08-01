#include <bits/stdc++.h>
using namespace std;

//? Optimal solution
int merge(vector<int> &arr, int low, int mid, int high) {
    
    vector<int> temp;

    int left = low;
    int right = mid + 1;
    int cnt = 0;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1);
            right++;
        }
    }

    // If left half still has elements
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // If right half still has elements
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high) {
    
    int cnt = 0;

    // Base case
    if (low >= high) return cnt;

    int mid = (low + high) / 2;

    // Count inversions in left half
    cnt += mergeSort(arr, low, mid);
    // Count inversions in right half
    cnt += mergeSort(arr, mid + 1, high);
    // Count inversions during merge
    cnt += merge(arr, low, mid, high);

    return cnt;
}

int numberOfInversions(vector<int>& a, int n) {
    return mergeSort(a, 0, n - 1);
}

//? Brute force solution
int numberOfInversions(vector<int>& a, int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) cnt++;
        }
    }
    return cnt; 
}

int main() {

    vector<int> a = {5, 4, 3, 2, 1};
    int n = a.size();
    int cnt = numberOfInversions(a, n);

    cout << "The number of inversions are: " << cnt << endl;

    return 0;
}