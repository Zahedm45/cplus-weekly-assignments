
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int levenshteinDistance(const string source, const string target);

int main() {


    string str;
    getline(cin, str);

    string token1 = str.substr(0, str.find(" "));
    string token2 = str.substr(token1.size() + 1, str.find(" "));




    int n = token1.length();
    int m = token2.length();
    if (n == 0) {
        return m;
    }
    if (m == 0) {
        return n;
    }

    // Good form to declare a TYPEDEF

    typedef std::vector<std::vector<int> > Tmatrix;

    Tmatrix matrix(n + 1);


    for (int i = 0; i <= n; i++) {
        matrix[i].resize(m + 1);
    }

    for (int i = 0; i <= n; i++) {
        matrix[i][0] = i;
    }

    for (int j = 0; j <= m; j++) {
        matrix[0][j] = j;
    }

    for (int i = 1; i <= n; i++) {

        const char s_i = token1[i - 1];

        for (int j = 1; j <= m; j++) {

            const char t_j = token2[j - 1];

            int cost;
            if (s_i == t_j) {
                cost = 0;
            } else {
                cost = 1;
            }

            const int above = matrix[i - 1][j];
            const int left = matrix[i][j - 1];
            const int diag = matrix[i - 1][j - 1];
            int cell = min(above + 1, min(left + 1, diag + cost));

            if (i > 2 && j > 2) {
                int trans = matrix[i - 2][j - 2] + 1;
                if (token1[i - 2] != t_j) trans++;
                if (s_i != token2[j - 2]) trans++;
                if (cell > trans) cell = trans;
            }

            matrix[i][j] = cell;
        }
    }

    cout <<  matrix[n][m] << " ";


}




