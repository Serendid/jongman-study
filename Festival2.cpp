#include <iostream>
using namespace std;

int main() {
  int testCase;
  cin >> testCase;

  cout.setf(ios::fixed);
  cout.precision(8);
  //자릿수 고정

  while(testCase--) {
    int n, l, sum=0, cost[1001];
    double avg, minAvg=100.1;

    cin >> n >> l;
    for(int i=0; i<n; i++) cin >> cost[i];

    for(int i=0; i<n; i++) {
      sum=0; 
      for(int j=i; j<n; j++) {
        sum += cost[j];
        if(j-i >= l-1) { 			 //l개 이상 더했다면
          avg = sum*1.0/(j-i+1);		//평균을 구해준다.
          if(minAvg > avg) minAvg = avg;	//최소 평균을 구해준다.
        }
      }
    }

    cout << minAvg << endl;
  }
}