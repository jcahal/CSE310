#include <iostream>

using namespace std;

int main() {

    int n[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x, i, j, k;
    int r = 0;
    int iR = 0;
    int jR = 0;
    int kR = 0;

    for (x = 0; x <= 10; ++x) {
        for(i = 1; i < n[x] - 1; ++i){
            iR++;
            for (j = i + 1; j < n[x]; ++j) {
                jR++;
                for (k = 0; k < j; ++k) {
                    kR++;
                    r = r + 1;
                }
            }
        }

        cout << "n = " << n[x] << ", r = " << r << " | " << "iR = " << iR << ", jR = " << jR << ", kR = " << kR << endl;
        r = 0;
        iR = 0;
        jR = 0;
        kR = 0;
    }

    return 0;
}