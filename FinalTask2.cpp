#include<iostream>
#include<string>

int gcd(int a, int b)                          // Function to calculate GCD by using Euclid's algorithm
{
 
    if ((a == 0) || (b == 0))
        return 0;

    if (a == b)
        return a;
 
    if (a > b) {
        return gcd(a - b, b);
    }
    else {
        return gcd(a, b - a);
    }
        
}

int main() {
	int a, b;
	std::cin >> a >> b;

    while (gcd(a, b) != 1) {
        a /= gcd(a, b);                         // Here the answer is obtained by dividing a by integers. 
    }                                           // So even the new a will always be a factor of original a.
                                                // Whenever x ( the updated a ) is not co-prime with b, gcd will not be 1
                                                // and the loop stops. Dividing by GCD as we want to eliminate the factors fast. 
    std::cout << a << std::endl;
    return 0;

}