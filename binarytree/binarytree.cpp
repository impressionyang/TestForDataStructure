#include"binarytree.h"
#include<iostream>
#include<string>
using namespace std;

int BinaryTree::CreateBiTree(BiTree &T){
    char ch;
    cin>>ch;
    if(ch==' '){
        T=NULL;
    }else{
        if(!(T=new BiTNode[1])){
            return 0;
        }
        T->data=ch;
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
    return 1;
}


