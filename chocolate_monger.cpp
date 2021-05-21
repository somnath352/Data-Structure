//CodeChef April cookoff 2021

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		set<int> st;
		int a[n];
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			st.insert(a[i]);
		}
		int m = st.size();
		if(n - m >= x){   
			cout << m << endl;
		}
		else{          
			int var = n - m;
			var = x - var;
			cout << m - var<< endl;
		}
	}
}

