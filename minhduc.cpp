#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	cout << s;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'd'){
			s[i]-=32;
		}
	}
	cout<<s;
	string s1 = "vu minh";
	string s2 = "duc";
	cout<<s1+s2;
	/*doi chuoi thanh so
	string a = '2';
	for(int i = 0; i<s.size;i++){
		a = s[i]-'0';
		//'2'-'0' do tra bang ascii dc 50-48=2
	}
	cout a = 2;//thuoc kieu int	
	*/
}
