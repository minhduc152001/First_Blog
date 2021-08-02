#include<bits/stdc++.h>
using namespace std;
int main(){
    string s[1] = "TTT", s[2] = "TTH", s[3] = "THT", s[4] = "THH", s[5] = "HTT", s[6] = "HTH", s[7] = "HHT", s[8] = "HHH;
    int t  = 1;
    int  n, k, dem, sum[9];
    cin >> n;
    string str[n];
    for(int i = 1; i <= n; i++){
        cout << i;
        cin >> str[i];
    }
    int t = 1;
    while(t<9){
        sum[t] == 0;
        for(int i = 0; i < 40; i++){
            k = i; dem = 0;
            for(int j = 0; j < 3; j++){
                if(s[t][j]==str[i][k]){
                    k++; dem++;
                    if(demm==3) sum[t]++;
                }
            }
        }
    }
}
