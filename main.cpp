// ---------------------------------------------------------------------------
// Name: Patrick Vandergrift
// Course-Section: CS355-01
// Assignment: 8
// Date due: 11/9/2025
// Description: This program use recursion to find the max and min value of the
//  BST
// ---------------------------------------------------------------------------
#include <iostream>
#include "binarySearchTree.h"

using namespace std;

int main()
{
    bSearchTreeType<int> bst;

    int temp;

    for(int i=0; i<5; i++)  //Inserts Items in the list
    {
        cin>>temp;
        bst.insert(temp);
    }

    cout<<"In-Order Traversal"<<endl;
    bst.inorderTraversal();
    cout<<endl<<"Pre-Order Traversal"<<endl;
    bst.preorderTraversal();
    cout<<endl<<"Post-Order Traveral"<<endl;
    bst.postorderTraversal();

    cout << endl;
    cout << "Minimum Value: " << bst.minValue() << endl;    //Min Value
    cout << "Maximum Value: " << bst.maxValue() << endl;    //Max Value

    return 0;
}
