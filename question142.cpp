#include<iostream>
using namespace std;   

int main(){
    
    int Kth factor(int n;int k){
int cnt=0;
for (int i=1;i<=n;i++){
    if(n%i==0){
        cnt++;
        if(cnt==k){
            return 1;
        }
    }
}
    }
    return -1;
}