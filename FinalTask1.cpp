#include<iostream>
#include<string>

void takeInput(char* arr, int m, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> arr[j + (i * m)];
		}
	}
}

//void print2D(char* arr, int m, int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			std::cout << arr[j + (i * m)];
//		}
//		std::cout << std::endl;
//	}
//}


int main() {
	int n, m;
	int answer = 0;
	std::cin >> n >> m;
	char* grid = new char[m * n];     // Done in a 1D array to avoid fragmentation.
	takeInput(grid, m, n);

	/*print2D(grid, m, n);*/         

	
	//check that the last row is only R

	for (int i = 0; i < m; i++) {
		if (grid[i + (m * (n - 1))] != 'R') answer++;
	}

	//check that the last column is only D. If both these conditions are met, no way to fall out.

	for (int i = 0; i < n; i++) {
		if (grid[(m - 1) + (m * i)] != 'D') answer++;
	}

	answer -= 2; //For the X

	std::cout << answer;

	return 0;
}