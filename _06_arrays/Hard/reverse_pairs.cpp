#include <bits/stdc++.h>
using namespace std;

//? Optimal solution
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; 
    int left = low;     
    int right = mid + 1;   

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

int countPairs(vector<int> &arr, int low, int mid, int high) {
    int right = mid + 1;
    int cnt = 0;
    for (int i = low; i <= mid; i++) {
        while (right <= high && arr[i] > 2 * arr[right]) right++;
        cnt += (right - (mid + 1));
    }
    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high); 
    cnt += countPairs(arr, low, mid, high); 
    merge(arr, low, mid, high);
    return cnt;
}

int team(vector <int> & skill, int n)
{
    return mergeSort(skill, 0, n - 1);
}

//? Brute force solution
int countPairs(vector<int>&a, int n) {

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > 2 * a[j]) cnt++;
        }
    }
    return cnt;
}

int team(vector <int> & skill, int n) {
    return countPairs(skill, n);
}

int main()
{
    vector<int> a = {4, 1, 2, 3, 1};
    int n = 5;
    int cnt = team(a, n);
    cout << "The number of reverse pair is: "
         << cnt << endl;
    return 0;
}
