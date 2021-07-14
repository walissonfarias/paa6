
#include <iostream>
#include <vector>
using namespace std;
int fib_pd(int n, std::vector<int> &cache){

	if (cache[n] !=-1){
    	return cache[n];
	}else{
    	if(n<=1){
        	cache[n]=n;
    	}else{

        	cache[n] = fib_pd(n-1, cache)+ fib_pd(n-2,cache);

    	}
    	return cache[n];
	}
	return 0;
}
int fib_pd(int n){
	std::vector<int>cache(n+1, -1);
	return fib_pd(n,cache);
}
int main() {
	std::cout<< "Fibonacci\n";
	int n =10;
	std::cout<< fib_pd(n) << std::endl;
	return 0;
}
