#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> a(100);
    int i=0;
    a[i]=1;
    int even=0,odd=0;
    while(a[i]>=0){
           i++;
     cin>>a[i];
        if(a[i]%2==0){
            even++;
        }
        if(a[i]%2==1){
            odd++;
        }
    }
    cout<<"Even="<<even<<" \nOdd="<<odd;
    return 0;
}
