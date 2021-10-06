#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
char one[100];
char two[100];
string one_,two_;

cin>>one_;
cin>>two_;

 int nm=one_.length();int nm1=two_.length();
        strcpy(one,one_.c_str());
        strcpy(two,two_.c_str());

if( lexicographical_compare(one, one+nm, two, two+nm1)){
	cout << one<<"this is lexical";
            }
            else{
                cout << two<<"neither";

            }
}
