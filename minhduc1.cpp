#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, temp;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i = 0; i < n - 1; i++){
		if(a[i + 1] < a[i]){
			cout << a[i + 1];
			break;
		}
	}
	if(a[n - 2] == a[n - 1]){
		cout << "Khong co so lon thu 2";
	}
}
