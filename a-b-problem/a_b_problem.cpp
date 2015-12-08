# include <iostream>
using namespace std;
int main() {
    int a = 35;
    int b = -6;
    int sum = 0;
    int mask = 0x00000001;
    int carry = 0;
    cout<<"size int:"<<sizeof(a)<<endl;
    for (int i = 0; i < 32; i++) {
        int tmp_a = (a & mask) >> i;
        int tmp_b = (b & mask) >> i;
        int cur_val = 0;
        if(carry == 0) {
            carry = tmp_a && tmp_b;        
            cur_val = tmp_a ^ tmp_b;
        } else {
            if (tmp_a && tmp_b) {
                cur_val = 1;
            } else if(tmp_a == 0 && tmp_b == 0){
                cur_val = 1;
            }
            carry = tmp_a || tmp_b;
        }
        if (cur_val) {
            sum = sum | mask; 
        }
        mask = mask<<1;
    }
    cout<<sum<<endl;
    cout<<"hello world"<<endl;
    return 0;
}
