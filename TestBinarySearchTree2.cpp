#include <iostream>
#include "BinarySearchTree2.h"
using namespace std;

    // Test program
int main( )
{
	BinarySearchTree<int> t, t2;
	
	cout << "inserting begins" << endl;
	cout << endl;
	cout << endl;
	int rangeVerification= 0;
	for(int i = 0 ; i < 100; i++)
	{
		if( i>= 5 && i < 99) {
			rangeVerification++;
		}
		t.insert(i);
	}
	cout << endl;
	cout << endl;
	cout << "the minimum element is " << t.findMin() << endl;
	cout << endl;
	
	cout << "the maximum element is " << t.findMax() << endl;
	cout << endl;
	
	cout << "the elements of tree are" << endl;
	t.printTree();
	cout << endl;
	cout << endl;
	cout << "there are "<< t.countInRange(5,99) << " keys lying between 5 and 99" << endl;
	cout << "Veriication: there are "<< rangeVerification << " keys lying between 5 and 99" << endl;
	cout << endl;
	cout << endl;
	cout <<"removing begins " << endl;
	cout << endl;

	rangeVerification= 0;
	for(int i = 0 ; i < 50; i++)
	{
		t.remove(i);
	}
	cout << endl;
	cout << endl;  
	cout << "the minimum element is " << t.findMin() << endl;
	cout << endl;
	
	cout << "the maximum element is " << t.findMax() << endl;
	cout << endl;
	
	cout << "the elements of tree are" << endl;
	t.printTree();
	cout << endl;
	cout << endl;
	cout << "there are "<< t.countInRange(5,99) << " keys lying between 5 and 99" << endl;
	cout << endl;
	cout << endl;

	for(int i = 0 ; i < 100; i++)
	{
		t.remove(i/2);
	}
	if(t.isEmpty() == true)
		cout << "tree is empty" << endl;
	else
		cout << "tree is not empty" << endl;


	return 0;
}
