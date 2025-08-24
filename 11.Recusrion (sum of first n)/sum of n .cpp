int sumOfN(int n) {
    if (n == 0)
        return 0;
    return n + sumOfN(n - 1);
}

int main() {
    int N;
    cin >> N;
    cout << sumOfN(N) << endl;
    return 0;
}
