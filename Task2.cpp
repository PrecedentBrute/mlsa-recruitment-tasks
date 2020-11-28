#include<iostream>
#include<string>

bool checkIfPresent(char strchar, char* chars, int charsl) {                   //checks if the char in string is from the inputted characters.
	for (int i = 0; i < charsl; i++) {
		if (strchar == chars[i]){
			return true;
		}
	}
	return false;
}

int numberOfSubstrings(int n) {                                                //Gives the number of sub-strings for a length
	return ((n * (n + 1) / 2));
}


int main() {
	int n, k;
	int answer = 0;


	std::cin >> n >> k;                                                   
	
	char* name;
	name = new char[n];
	
	char* characters;
	characters = new char[k];

	for (int i = 0; i < n; i++) {
		std::cin >> name[i];
	}
	
	for (int i = 0; i < k; i++) {
		std::cin >> characters[i];
	}                                                 // Just took all the inputs till now

    int* groups = new int[n];                         // To check the groupings of the valid characters
    
	for (int i = 0; i < n; i++) {
		groups[i] = 0;
	}

	int groupIndex = 0;
    for (int i = 0; i < n; i++) {
		if (!checkIfPresent(name[i], characters, k)) {
			groupIndex++;
			continue;
		}
		groups[groupIndex]++;
	}

	for (int i = 0; i < n; i++) {                             // adds to the number of substrings
		answer += numberOfSubstrings(groups[i]);
	}

	std::cout << answer << std::endl;
	
	delete[] characters;
	delete[] name;
	delete[] groups;
}