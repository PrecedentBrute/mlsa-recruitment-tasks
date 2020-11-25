#include<iostream>

int main() {
	int x, y, z;
	std::cout << "Enter x, y and z : " << std::endl;
	std::cin >> x >> y >> z;
	int ahead = y % x;
	int to_travel = x - ahead;
	if (z >= to_travel) std::cout << "YES" << std::endl;
	else std::cout << "NO" << std::endl;
}