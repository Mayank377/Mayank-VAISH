#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the number" <<endl;
    cin>>n;
    if (n>=90 && n<=100) {
        cout<<"Grade A"<<endl;
    }
    else if (n>=70 && n<90) {
        cout<<"Grade B"<<endl;
    }
    else if (n>=55 && n<70) {
        cout<<"Grade C"<<endl;
    }
    else if (n>=40 && n<55) {
        cout<<"Grade D"<<endl;
    }
    else if (n>=0 && n<40) {
        cout<<"Fail"<<endl;
    }
    else {
        cout<<"Invalid Input"<<endl;
    }   
}