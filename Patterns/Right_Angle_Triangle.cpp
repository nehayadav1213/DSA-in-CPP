//Example
//Output:
//Enter n 6
//1 
//2 3 
//4 5 6 
//7 8 9 10 
//11 12 13 14 15 
//16 17 18 19 20 21 

#include <bits/stdc++.h>
using namespace std;
void pattern3(int n){
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< num << " ";
            num++;
        } 
        cout<< endl;
    }
}
int main(){

    int n;
    cout<< "Enter n";
    cin>> n;
    pattern3(n);
    return 0;
    
}