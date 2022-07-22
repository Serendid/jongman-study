#include <iostream>
using namespace std;
int testcase;
int n;
int l;
int cost[1001];
int sum = 0;
double avg, minavg = 101;

int main(){
    cin >> testcase;
    while (testcase--){
        cin >> n >> l;
        for (int i=1; i<n; i++){
            cin >> cost[i];
        }
        for (int i=1; i<n; i++){
            sum = 0;
            for (int j=i; j<n; j++){

            
            sum += cost[j];
            if (j-i>=l-1){
                avg = sum*1.0/(j-i+1);
                if(minavg>avg){
                    minavg = avg;
                    }
                }
            
            }

        }
        cout << fixed;
        cout.precision(8);
        cout << minavg << endl;
    }
}