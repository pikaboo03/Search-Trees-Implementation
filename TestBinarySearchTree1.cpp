#include <iostream>
#include "BinarySearchTree1.h"
using namespace std;

    // Test program
int main( )
{
	BinarySearchTree<int> t, t2;
	
	cout << "inserting begins" << endl;
	cout << endl;
	cout << endl;
	
	t.insert(5);
	t.insert(4);
	t.insert(10);
	t.insert(20);
	t.insert(8);
	t.insert(9);
	t.insert(22);
	t.insert(0);
	t.insert(1);
	
	cout << endl;
	cout << endl;
	cout << "the minimum element is " << t.findMin() << endl;
	cout << endl;
	if(t.findMin()==0)
		cout << "the minimum element is correct" << endl;
	else
		cout << "the minimum element is not correct" << endl;
	cout << endl;
	cout << endl;
	cout << "the maximum element is " << t.findMax() << endl;
	cout << endl;
	if(t.findMax() == 22)
		cout << "the maximum element is correct" << endl;
	else
		cout << "the maximum element is correct" << endl;
	cout << endl;
	cout << endl;
	cout << "the elements of tree are" << endl;
	t.printTree();
	cout << endl;
	cout << endl;
	cout << "the sum is  " << t.sum() << endl;
	cout << endl;
	cout << endl;
	
	int sumVerification= 0;
	for(int i = 0 ; i < 100; i++)
	{
		sumVerification+=(i);
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
	cout << "the sum is  " << t.sum() << endl;
	cout << "the actual sum is " << sumVerification << endl;
	cout << endl;
	cout << endl;
	
	return 0;
}
