#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED

typedef class BiTNode{
public:
    int data;
    BiTNode * lchild, *rchild;
}*BiTree;

class BinaryTree{
private:
    BiTree root;
public:
    int CreateBiTree();
    int PreOderTaverse();
    int MidOderTaverse();
    int EndOderTaverse();
    int Mid_none_OderTaverse();
    int LayerOderTaverse();
    int display_leaf();
    int count_leaf();

};

#endif // BINARYTREE_H_INCLUDED
