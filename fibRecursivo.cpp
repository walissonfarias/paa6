#include <iostream>
#include <string>
#include <vector>
using namespace std;


int fib(int n){
    if(n == 0 or n == 1){
        return 1;
    }else{
        return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int n;
    cout << "digite o numero da sequencia de fibonacci" << endl;
    cin >> n;
    cout << fib(n);
}   

