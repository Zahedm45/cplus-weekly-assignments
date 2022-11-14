
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int main() {


    string str;
    getline(cin, str);

    string token1 = str.substr(0, str.find(" "));
    string token2 = str.substr(token1.size() + 1, str.find(" "));



    if (token2.size() == 0) {
        return token1.size();

    }else if (token1.size() == 0) {
        return token2.size();
    }


    typedef vector<vector<int> > Tmx;
    Tmx matrix(token1.size() + 1);

    for (int i = 0; i <= token1.size(); i++) {
        matrix[i].resize(token2.size() + 1);
    }

    for (int i = 0; i <= token1.size(); i++) {
        matrix[i][0] = i;
    }

    for (int k = 0; k <= token2.size(); k++) {
        matrix[0][k] = k;
    }

    for (int i = 1; i <= token1.size(); i++) {
        char si = token1[i - 1];
        for (int k = 1; k <= token2.size(); k++) {
            char tj = token2[k - 1];

            int track;
            if (si == tj) {
                track = 0;
            } else {
                track = 1;
            }
            int d = matrix[i - 1][k - 1];
            int a = matrix[i - 1][k];
            int l = matrix[i][k - 1];
            int c = min(a + 1, min(l + 1, d + track));
            if (k > 2 && i > 2 ) {
                int re = 1 + matrix[i - 2][k - 2];
                if (token1[i - 2] != tj) {
                    re++;
                }
                if (si != token2[k - 2]) {
                    re++;
                }
                if (c > re) {
                    c = re;
                }
            }
            matrix[i][k] = c;
        }
    }

    cout <<  matrix[token1.size()][token2.size()] << " ";

}




