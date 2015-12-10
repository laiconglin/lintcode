# include <iostream>
using namespace std;
long long get_n (int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++ ) {
        result = result * i;
    }
    long long count = 0;
    cout<<result<<endl;
    while ((result % 10) == 0) {
        count++;
        result = result / 10;
    }
    return count;
}
int main() {
    long long n = 25;
    long long old_n = n;
    long long result = 0;
    while(n != 0) {
        n = n / 5;
        result += n;
    }
    cout<<"result:"<<result<<endl;
    cout<<"expect:"<<get_n(old_n)<<endl;
    return 0;
}
