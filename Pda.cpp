#include<iostream>
using namespace std;
// pushdown_Autometa@PDA...
// Navneet Uit-CS(B)-2nd Year...
// gcc version 9.2.0 (MinGW.org GCC Build-2)...

class Pushdown{
	public:
	Pushdown(string str){
	    int n = str.length();
	    int i,j;
	    for (i = 0; i < n; i++)
	        if (str[i] != 'a') break;
	    if (i * 2 != n){cout << "Not Accepted..\n"; return;}
	    for (j = i; j < n; j++)
	        if (str[j] != 'b') {cout << "Not Accepted..\n"; return;}
	    cout << "Accepted..\n";
	}
};

int main(){
	string s; cout << "Enter string : "; getline(cin, s);
	Pushdown *st = new Pushdown(s);
    return 0;
}
