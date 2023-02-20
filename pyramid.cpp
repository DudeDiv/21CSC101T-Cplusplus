#include <iostream>
using namespace std;
int main() {
    int i,j, k;
    cout << "Enter number:\n";
    cin >> k;
    for (i=k;i>0;i--) {
        for (j=1;j<=i;j++) {
            cout << i << "\t";
        }
    cout << endl;
    }
return 0;
}
