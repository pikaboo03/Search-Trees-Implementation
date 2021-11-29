#include <iostream>
#include "AvlTreeB.h"
using namespace std;

    // Test program
int main( )
{   
	AvlTree<int> t;
	cout << "insertion begins" << endl;
	cout << endl;
	cout << endl;
	t.insert(10);
	cout << "\n\n\n" << endl;
    t.insert(20);
    cout << "\n\n\n" << endl;
	t.insert(30);
	cout << "\n\n\n" << endl;
	t.insert(40);
	cout << "\n\n\n" << endl;
	t.insert(50);
	cout << "\n\n\n" << endl;
	t.insert(25);
	cout << "\n\n\n" << endl;
	t.insert(5);
	cout << "\n\n\n" << endl;
	t.insert(11);

	if (t.contains(5) == true)
	{
		cout << "it contains 5 " << endl;
	}
	else
		cout << "does not contain 5" << endl;
	cout << endl;
	cout << endl;
	
	cout << " the maximun element is " <<  t.findMax() << endl;
	cout << endl;
	cout << endl;

	if (t.findMax() == 50)
		cout << "the maximum element is correct" << endl;
	else
		cout << "the maximum element is not correct" << endl;
	cout << endl;
	cout << endl;
	
	cout << " the minimum element is " <<  t.findMin() << endl;

	if (t.findMin() == 5)
		cout << "the minimum element is correct" << endl;
	else
		cout << "the minimum element is not correct" << endl;

	cout << "removing begins" << endl;
	cout << endl;

	t.remove(25);
	t.remove(50);
	t.remove(10);
	t.remove(20);
	t.remove(30);
	t.remove(40);
	t.remove(11);
	t.remove(5);

	if (t.isEmpty())
		cout << "tree is empty" << endl;
	else
		cout << "tree is not empty" << endl;



    
	//t.printTree();
    return 0;
}
