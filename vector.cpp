#include <iostream>
#include <vector>

using namespace std;


int main()
{
	
	// Creates new vector of type integer named "niceVector"
	vector<int> niceVector;

		
	// Assigns 10 elements to vector, all containing an int = 10	
	niceVector.assign(10, 10); 
	
	// Print the vector
	cout << "The Vector contains these elements: ";
	for (int i = 0; i < niceVector.size(); i++)
		cout << niceVector[i] << " ";
	
	
	// Inserts element of int = 20 at beginning of vector
	niceVector.emplace(niceVector.begin(), 20);	
	// Finds beginning thanks to niceVector.begin() function
	
	// Print the vector
	cout << "\nThe Vector contains these elements: ";
	for (int i = 0; i < niceVector.size(); i++)
		cout << niceVector[i] << " ";
		
	
	// inserts element of int = 30 at the end of the vector
	niceVector.emplace_back(30);
	
	// Print the vector
	cout << "\nThe Vector contains these elements: ";
	for (int i = 0; i < niceVector.size(); i++)
		cout << niceVector[i] << " ";
		
		
	// Deletes element at the beginning of vector
	niceVector.erase(niceVector.begin());
	
	// Print the vector
	cout << "\nThe Vector contains these elements: ";
	for (int i = 0; i < niceVector.size(); i++)
		cout << niceVector[i] << " ";
	
	
	// Delete the entire set of elements from the vector
	niceVector.clear(); 
	
	// Print the vector
	cout << "\nThe Vector contains these elements: ";
	for (int i = 0; i < niceVector.size(); i++)
		cout << niceVector[i] << " ";
	
	
	return 0;
	system("pause");	
}
