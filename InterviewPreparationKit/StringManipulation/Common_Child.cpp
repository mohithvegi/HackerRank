// https://www.hackerrank.com/challenges/common-child/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=strings


#include <bits/stdc++.h>

using namespace std;

// Complete the commonChild function below.
int commonChild(string s1, string s2) {
    int l1 = s2.size();
    int l2 = s1.size();
    static int dp[5001][5001];
    // int dp[l1+1][l2+1];
    for(int i=0; i<=l1; i++){
        for(int j=0; j<=l2; j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
            else if(s2[i-1]==s1[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    // cout << "c" << dp[l1][l2] << endl;
    return dp[l1][l2];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = commonChild(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}