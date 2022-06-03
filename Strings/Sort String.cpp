#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int T;
	cin>>T;
	string S;
	for(int i=0; i<T; i++){
	
	cin>>S;
	sort(S.begin(),S.end());
	cout<<S<<endl;
	}
	return 0;
}
