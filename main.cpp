#include <bits/stdc++.h>
using namespace std;
string resul,se;
void lexi(string a,string b){
    char one[100];
    char two[100];
    string one_,two_;

    one_=a;
    two_=b;

     int nm=one_.length();int nm1=two_.length();
            strcpy(one,one_.c_str());
            strcpy(two,two_.c_str());

    if( lexicographical_compare(one, one+nm, two, two+nm1)){
            resul=one;
            se=two;
                }
                else{
                    resul=two;
                    se=one;
                    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N, K, Q, S;

    long long T = 0;

    string M;

    long long W;

    long long priorityValue;
    priority_queue<pair<long long, string>> pq;

    cin >> N >> K;

    while (N--)
    {

        int t = T;
        int l;
        cin >> Q >> T;
        if (T > t)
        {
            W = T - t;
            switch (Q)
            {
            case 1:
            {
                string m;
                int s;
                cin >> m;
                cin >> s;
                l = m.length();
                if (m != "")
                {
                    M = m;
                    S = s;
                    priorityValue = S + K * W;
                    pq.push(make_pair(priorityValue, M));
                }
                break;
            }
            case 2:
            {
                break;
            }
            case 3:
            {
                string m;
                cin >> m;
                l = m.length();
                if (m != "")
                {
                    M = m;
                }
                break;
            }
            }
        }
    }
    long long comp[100]={0};
    string previ[100]={""};
    string name[100]={};

    int ind=1,ind1=0,ind2=-1,x1=0;
    while (!pq.empty())
    {
        pair<long long, string> top = pq.top();
        previ[ind]=top.second;
        //cout << top.second ;
        //cout<<top.second<<endl;
         //cout << "doctor takes a break"<<endl;
         int nm=top.second.length();int nm1=previ[ind1].length();
         string sec= top.second;
         string sec1= previ[ind1];
        char one[100];
        strcpy(one,sec.c_str());
        char two[100];
        strcpy(two,sec1.c_str());


        if (top.first== comp[ind1]&&top.second!=""){
            /*if( lexicographical_compare(one, one+nm, two, two+nm1)){
                //cout << "one is lexicographically less than two";
                if(top.first==x)
                name[ind2]= one;
                name[ind1]=two;
                comp[ind]=top.first;
            }
            else{
                //cout << "two is lexicographically less than one";
                name[ind1]=top.first;
                comp[ind]=top.first;

            }*/


            cout<<resul<<endl;
            cout<<se<<endl;

            }
        else{
            name[ind1]=top.second;
        }
        comp[ind]=top.first;
        ind++;
        ind1++;
        ind2++;
        pq.pop();


    }

    for (int i=0; i<ind; i++){
        if(name[1]!=""){
            cout<<name[i]<<endl;
        }else{
    cout<<"doctor takes a break"<<endl;
    }
    }

    return 0;
}
