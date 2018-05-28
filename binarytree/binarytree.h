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
    int CreateBiTree(BiTree &T);     //递归建立二叉树
    int PreOderTaverse();   //先序、中序和后序递归遍历二叉树
    int MidOderTaverse();   //先序、中序和后序递归遍历二叉树
    int EndOderTaverse();   //先序、中序和后序递归遍历二叉树
    int Mid_none_OderTaverse();     //中序递归遍历二叉树
    int LayerOderTaverse();         //层次遍历二叉树
    int display_leaf();     //显示叶子节点
    int count_leaf();       //统计叶子节点数

};

#endif // BINARYTREE_H_INCLUDED
