#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;
struct st {
    int id;
    int age;
    int grade;
};


int main() {
    /// input output
    ll x;
    ld y;
    char c;
    cin >> x >> y >> c;
    cout << x << y << c;
    cout << '\n';


    /// long long capacity approx 10^18, much more than int so use long long to avoid overflow for larger numbers




    /// conditional statements

    int x = 10;
    if (x < 10) {
        cout << "x is less than 10";
    } else if (x == 10) {
        cout << "x is equal to 10";
    } else if (x == 9) {
        cout << "x is equal to 9";
    } else {
        cout << "x is equal to " << x;
    }


    /// defining an array of size 500
    /// basically defines 500 variables of type int
    int ara[500];


    /// looping over the array
    for (int i = 0; i < 500; i++) {
        cin >> ara[i];
    }
    for (int i = 0; i < 500; i++) {
        cout << ara[i] << '\n';
    }



    int i = 0;
    while (1) {

        if (i == 500) break;

        cout << ara[i];
        i++;
    }


    /// vectors have dynamic size, although we can fix the size
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    for (auto x: v) cout << x << ' '; cout << '\n';


    ///sets have sorted elements and duplicates are removed

    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    for (auto x: s) cout << x << ' '; cout << '\n';



    /// sort

    vector<int> v = {10, 2, 5, 3};
    sort(v.begin(), v.end());
    for (auto x: v) cout << x << ' ';

    /// using structs for grouped data
    st a;
    st b;
    st c;
    a.id = 10;
    a.grade = 5;
    b.age = 30;

    st ara[500];
    for (int i = 0; i < 500; i++) {
        st[i].id = i;
        st[i].grade = i;
        st[i].age = i;
    }






}
