// https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=strings


#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    map<char,int>m;
    int length = s.size();
    if(length==0){
        return "YES";
    }
    for(int index=0; index<length; index++){
        m[s[index]]++;
    }
    int count = 0;
    int freq = m[s[0]];
    if(length>=3){
        int n1 = m[s[0]];
        int n2 = m[s[1]];
        int n3 = m[s[2]];
        if(n1==n2){
            freq = n1;
        }
        else if(n1==n3){
            freq = n1;
        }
        else if(n2==n3){
            freq = n2;
        }
    }
    int different;
    char ch;
    map<char,int> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        int f = (*it).second;
        char c = (*it).first;
        if(f!=freq){
            count++;
            different = f;
            ch = c;
        }
    }
    // cout << count << endl;
    // cout << freq << " " << different << endl;
    // cout << ch << endl;
    // cout << m[ch] << endl;
    if(count==0){
        return "YES";
    }
    else if(count==1){
        if(different == freq+1 || different == freq-1 || different == 1){
            return "YES";
        }
        else{
            return "NO";
        }
    }
    else{
        return "NO";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
