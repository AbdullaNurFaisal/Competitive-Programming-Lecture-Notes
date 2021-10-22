#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> p1, pair<int, int> p2) {
    return p1.second < p2.second;
}

int main() {
//    /// find the sum of all distinct triplets
//    /// 1 <= N <= 100
//
//
//    /// 3 5 7 8
//    i => 0, v[i] = 3
//    j => 2, v[j] = 7
//    k => 3, v[k] = 8
//
//
//    n = 100000,
//    O(n^3) = 10^15
//
//
//    int n; cin >> n;
//    vector<int> v(n);
//    for (int i = 0; i < n; i++) {
//        cin >> v[i];
//    }
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            for (int k = j + 1; k < n; k++) {
//                sum += v[i] + v[j] + v[k];
//                3, 5, 7
//                3, 5, 8
//                3, 7, 8
//            }
//        }
//    }
//
//
    /// activity selection problem
    /// N activities are given
    /// Find the maximum number of activities that you can perform
    /// activities cannot overlap
    int n; cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int st, ed; cin >> st >> ed;
        v.push_back({st, ed});
    }
    sort(v.begin(), v.end(), cmp);
    int task_count = 1;
    int prev_end_time = v[0].second;
    for (int i = 1; i < n; i++) {
        if (v[i].first >= prev_end_time) {
            task_count++;
            prev_end_time = v[i].second;
        }
    }

    /// knapsack
    /// chor
    /// bosta capacity = 10kg

    /// gold bricks = 6kg 4kg 3kg
    /// closest to the left

    /// 1 <= N <= 100000
    /// find an element which is closest to x on the basis of this condition  element <= x
    //// x = 8
     1 3 7  9 11
    lo = ans




    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int lo = -1, hi = n;
    while (lo + 1 < hi) {
        int mid = (lo + hi) / 2;
        if (v[mid] <= x) {
            lo = mid;
        } else {
            hi = mid;
        }

    }


    ///  [1, 3, 5]
    /// subsets of the array
    /// {1}
    /// {1, 3}
    /// {1, 3, 5}
    /// {1, 5}
    /// {3, 5}
    /// {3}
    /// {5}
    /// {}

    /// {2 * 2 * 2} = 8




//    given array = [1, 3, 5, 7]
//    prefix sum array = [1, 4, 9, 16]


    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }


    ////  1 <= N <= 10^5

    /// 1 <= Q <= 10^5
    /// L, R

    [1, 3, 5, 7]

    Q = 3
    1 3
    2 4
    1 4

    L = 1, R = 3, ans = 9
    L = 2, R = 4, ans = 15
    L = 1, R = 4, ans = 16


    for (int t = 1; t <= Q; t++) {
        int L, R;
        cin >> L >> R;
        int sum = 0;
        for (int i = L; i <= R; i++) {
            sum += v[i];
        }
        cout << sum << '\n';
    }

    /// improving with prefix sum
    vector<int> prefix_sum(n);
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            prefix_sum[i] = v[i];
        } else {
            prefix_sum[i] += prefix_sum[i - 1] + v[i];
        }
    }
    for (int t = 1; t <= Q; t++) {
        int L, R;
        cin >> L >> R;
        cout << prefix_sum[R] - prefix_sum[L - 1] << '\n';
    }


    /// 1 <= N <= 10^5
    /// find the pair in the array the sum of which results in target
    ///
    int n; cin >> n;
    vector<int> v(n);
    int target;
    cin >> target;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int i = 0, j = n - 1;
    /// i denotes the elements on the left side
    /// j denotes the elements on the right side
    /// since we are looking for two elements which add up to sum
    /// i and j should never be equal

    while (i < j) {
        if (v[i] + v[j] == target) {
            cout << i << ' ' << j << '\n'; break;
        } else if (v[i] + v[j] > target) {
            j--;
        } else {
            i++;
        }
    }
    /// the complexity is Nlog(N) because of std::sort
    /// if the array was initially sorted
    /// the complexity would be O(N)

    /// solving the problem using std::map
//    map<int, int> mp;
//    for (int i = 0; i < n; i++) {
//        mp[v[i]] = 1;
//    }
//    for (int i = 0; i < n; i++) {
//        int diff = target - v[i];
//        if (mp[diff]) {
//            cout << "exists\n";
//        }
//    }






}
