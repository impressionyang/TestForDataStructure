#include <iostream>
#include"binarytree.h"

using namespace std;

int main()
{
    //ABC##DE#G##F###
    BinaryTree b;
    //cout<<b.get_root()->data;
    b.MidOderTaverse(b.get_root());
    cout<<endl;
    b.display_leaf(b.get_root());
    cout<<endl<<b.count_leaf(b.get_root())<<endl;
    return 0;
}
