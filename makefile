
all: Test_BST1 Test_BST2 Test_AVL

Test_BST1: TestBinarySearchTree1.o BinarySearchTree1.o dsexceptions.o
	g++ -Wall -o Test_BST1 TestBinarySearchTree1.o

Test_BST2: TestBinarySearchTree2.o BinarySearchTree2.o dsexceptions.o
	g++ -Wall -o Test_BST2 TestBinarySearchTree2.o

Test_AVL: TestAVLTree.o AvlTreeB.o dsexceptions.o
	g++ -Wall -o Test_AVL TestAVLTree.o

BinarySearchTree1.o: BinarySearchTree1.h
	g++ -Wall -c BinarySearchTree1.h

TestBinarySearchTree1.o: TestBinarySearchTree1.cpp
	g++ -Wall -c TestBinarySearchTree1.cpp

BinarySearchTree2.o: BinarySearchTree2.h
	g++ -Wall -c BinarySearchTree2.h

TestBinarySearchTree2.o: TestBinarySearchTree2.cpp
	g++ -Wall -c TestBinarySearchTree2.cpp

AvlTreeB.o: AvlTreeB.h
	g++ -Wall -c AvlTreeB.h

TestAVLTree.o: TestAVLTree.cpp
	g++ -Wall -c TestAVLTree.cpp

dsexceptions.o: dsexceptions.h
	g++ -Wall -c dsexceptions.h

clean:
	rm -f AvlTreeB.h.gch BinarySearchTree1.h.gch BinarySearchTree2.h.gch dsexceptions.h.gch Test_AVL Test_BST1 Test_BST2 TestBinarySearchTree1.o TestBinarySearchTree2.o TestAVLTree.o


