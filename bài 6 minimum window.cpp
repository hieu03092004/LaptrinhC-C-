#include<bits/stdc++.h>

using namespace std;

//ANCCB chua duoc T = CABC
//
//ABCCA
//
//
//EFDCBANCC co du 3 ki tu: A, B, C
//- dT['C'] = 2 => dS['C'] >= 2
//- dT['A'] = 1 => dS['A'] >= 1
//- dT['B'] = 1 => dS['B'] >= 1
//
//tu tuong:
//	- doi voi moi R, tim L tuong ung
//	
int main(){
	string s, t; cin >> s >> t;
	int dT[256] = {0}, cntT = 0;
	for(char c : t){
		dT[c]++;
		if(dT[c] == 1) cntT++;
	}
	int l = 0, r = 0, dS[256] = {0}, cntS = 0, res = 1e9;
	int st = 0;
	while(r < s.length()){
		dS[s[r]]++;
		if(dT[s[r]] && dS[s[r]] == dT[s[r]]) cntS++;
		
//		cout << r << " " << cntS << endl;
		if(cntS == cntT){
			while(1){
				if(dS[s[l]] - 1 >= dT[s[l]]){
					dS[s[l]]--;
					l++;
				}
				else break;
			}
			if(r-l+1 < res){
				st = l;
				res = r-l+1;
			}
		}
		
		r++;
	}
//	cout << res;
	for(int i = st; i < st+res; i++){
		cout << s[i];
	}
}


//T: dbb
//12: bdab
