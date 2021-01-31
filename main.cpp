#include <iostream>
#include <vector>
#include <map>

int findOdd(const std::vector<int>& numbers) {
	std::map<int, int>counter; //setup a map/dictionary/hash to count the unique instances
	for(unsigned long i = 0; i < numbers.size(); i++) { //iterate each element in the passed vector
		counter[numbers[i]]++; //increment the count for each instance; in first instance value set to datatype default
	}

	std::map<int, int>::iterator it = counter.begin(); //create a map iterator and initialise it to point to beginning of map
	do {
		int value = it -> first; //access the key
		int count = it -> second; //access the counted instances
		if (count % 2 != 0) { //check whether the count is an odd number
			return value; //return the first instance of odd
		}
		it++;
	} while (it != counter.end());
	return 0; //return a default value
}

int main() {
	using V = std::vector<int>;
    std::cout << "\nA: " << findOdd(V{20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5}); //, Equals(5));
    //std::cout << "\nB: " << findOdd(V{1,1,2,-2,5,2,4,4,-1,-2,5}); //, Equals(-1));
    //std::cout << "\nC: " << findOdd(V{20,1,1,2,2,3,3,5,5,4,20,4,5}); //, Equals(5));
    //std::cout << "\nD: " << findOdd(V{10}); //, Equals(10));
    //std::cout << "\nE: " << findOdd(V{1,1,1,1,1,1,10,1,1,1,1}); //, Equals(10));
	std::cout << "\n";
}
