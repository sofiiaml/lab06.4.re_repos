#include <iostream>
using namespace std;

int CountPositiveElements(double* a, int n, int i) {
    if (i == n) {
        return 0;
    }
    int count = CountPositiveElements(a, n, i + 1);
    if (a[i] > 0) {
        count++; 
    }
    return count;
}

double SumAfterLast0(double* a, int n, int i = 0, double lastSum = 0) {
    if (i == n) {
        return lastSum;
    }
    if (a[i] == 0) {
        return SumAfterLast0(a, n, i + 1, 0); 
    }
    return SumAfterLast0(a, n, i + 1, lastSum + a[i]);
}

void ChangeArray(double* a, int n, int currentIndex) {
    if (currentIndex == n) {
        return; 
    }
    if (a[currentIndex] <= 1.0) {
        double temp = a[currentIndex];
        a[currentIndex] = a[0];
        a[0] = temp;
    }
    ChangeArray(a, n, currentIndex + 1);
}

int main() {
    int n;
    cout << "n= "; cin >> n;

    double* a = new double[n];

    cout << "n" << n << " =" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = CountPositiveElements(a, n, 0);
    cout << "Amount of positive elements=" << count << endl;
    double sum = SumAfterLast0(a, n);
    cout << "Sum=" << sum << endl;
    ChangeArray(a, n, 0);
    cout << "Changed array=" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    delete[] a;

    return 0;
}