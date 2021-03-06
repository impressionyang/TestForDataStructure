#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED

typedef struct BiTNode{
    char data;
    struct BiTNode * lchild, *rchild;
}BiTNode,*BiTree;

class BinaryTree{
private:
    BiTree root;
public:
    BinaryTree();
    void init_tree();
    int CreateBiTree(BiTree &T);     //递归建立二叉树
    int PreOderTaverse(BiTree T);   //先序归遍历二叉树
    int MidOderTaverse(BiTree T);   //中序递归遍历二叉树
    int EndOderTaverse(BiTree T);   //后序递归遍历二叉树
    int Mid_none_OderTaverse(BiTree node);     //中序非递归遍历二叉树
    int LayerOderTaverse(BiTree node);         //层次遍历二叉树
    int display_leaf(BiTree node);     //显示叶子节点
    int count_leaf(BiTree node);       //统计叶子节点数
    //int visit(BiTree e);    //visit函数
    BiTree get_root();
};

#endif // BINARYTREE_H_INCLUDED
