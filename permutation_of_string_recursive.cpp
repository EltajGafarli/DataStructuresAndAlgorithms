#include<bits/stdc++.h>
using namespace std;

void permute(string s,string pocket = ""){
	if(s.length() == 0) cout<<pocket<<endl;
	for(int i = 0; i < s.length(); i ++){
		char letter = s.at(i);
		string front = s.substr(0,i);
		string back = s.substr(i + 1);
		string together = front + back;
		permute(together, pocket + letter);
	}
}

//s = ab
// i = 0  letter = a   front = ""   back = b  together = b    
// permute(b,a) pocket = a  i = 0 letter = b front = '' back = '' together = ''
// permute('',ab)   ---> ab
// i = 1 letter = b front = a  back = '' together = a
// permute(a,b) pocket = b i = 0 letter = a front = '' back = '' tog = ''
// permute('',ba)   ---> ba
// ans ===> [ab,ba]

int main(){
	string s; cin>>s;
	permute(s,"");
}
