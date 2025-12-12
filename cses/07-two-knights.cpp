#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
using vvi = vector<vi>;
using vs = vector<string>;
void def_fun(){
    
}
int main(){
    int t;
    cin>>t;

    for(int i=1;i <= t; i++){
        ll t_cells = i*i;
        if(i == 1){
            cout<< 0 << endl;
        }else{
            // total ways to place two knights nC2
            ll  total = (t_cells * (t_cells -1)) / 2;

            // number of 2x3 or 3x2 blocks
            ll slabs = (i-2) * (i-1) *2 *2;
            cout<< total - slabs << endl;

        }
    }

    return 0;
}