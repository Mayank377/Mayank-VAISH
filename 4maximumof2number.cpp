#include<iostream>
using namespace std;
int main() {
    int n1, n2;
    cout << "Enter two Numbers : ";
    cin >> n1 >> n2;    
    if(n1 > n2){
        cout << n1 << " Maximum Number "<< endl;
    }
    else{
        cout << n2 << " Maximum Number "<< endl;
    }
    return 0;

}