#include <iostream>
#include <deque>
using namespace std;


int main()
{
	
	// Creates new deque of type integer named "niceDeque"
	deque<int> niceDeque;

		
	// Assigns 10 elements to deque, all containing an int = 10	
	niceDeque.assign(10, 10); 
	
	// Print the deque
	cout << "The Deque contains these elements: ";
	for (int i = 0; i < niceDeque.size(); i++)
		cout << niceDeque[i] << " ";
	
	
	
	// Inserts element of int = 20 at beginning of deque
	niceDeque.emplace(niceDeque.begin(), 20);	
	// Finds beginning thanks to niceDeque.begin() iterator
	
	// Print the deque
	cout << "\nThe Deque contains these elements: ";
	for (int i = 0; i < niceDeque.size(); i++)
		cout << niceDeque[i] << " ";
		
	
	// inserts element of int = 30 at the end of the deque
	niceDeque.emplace_back(30);
	
	// Print the deque
	cout << "\nThe Deque contains these elements: ";
	for (int i = 0; i < niceDeque.size(); i++)
		cout << niceDeque[i] << " ";
		
		
	// Deletes element at the beginning of deque
	niceDeque.erase(niceDeque.begin());
	
	// Print the deque
	cout << "\nThe Deque contains these elements: ";
	for (int i = 0; i < niceDeque.size(); i++)
		cout << niceDeque[i] << " ";
	
	
	// Delete the entire set of elements from the deque
	niceDeque.clear(); 
	
	// Print the deque
	cout << "\nThe Deque contains these elements: ";
	for (int i = 0; i < niceDeque.size(); i++)
		cout << niceDeque[i] << " ";
	
	
	return 0;
	system("pause");	
}
