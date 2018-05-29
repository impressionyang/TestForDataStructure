#include"binarytree.h"
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
BinaryTree::BinaryTree(){
    CreateBiTree(root);
}

BiTree BinaryTree::get_root(){
    return root;
}

int BinaryTree::CreateBiTree(BiTree &T){
    char ch;
    cin>>ch;
    if(ch=='#'){
        T=NULL;
    }else{
//        if(!(T=new BiTNode[1])){
//            return 0;
//        }
        T=new BiTNode[1];
        T->data=ch;
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
    return 1;
}


int BinaryTree::PreOderTaverse(BiTree T){
    if(T!=NULL){
        cout<<T->data<<" ";
        PreOderTaverse(T->lchild);
        PreOderTaverse(T->rchild);
    }
    return 1;
}

int BinaryTree::MidOderTaverse(BiTree T){
    if(T!=NULL){
        MidOderTaverse(T->lchild);
        cout<<T->data<<" ";
        MidOderTaverse(T->rchild);
    }
    return 1;
}

int BinaryTree::EndOderTaverse(BiTree T){
    if(T!=NULL){
        EndOderTaverse(T->lchild);
        EndOderTaverse(T->rchild);
        cout<<T->data<<" ";
    }
    return 1;
}

int BinaryTree::Mid_none_OderTaverse(BiTree node){
    stack<BiTree> s;
    BiTree p=node;
    while(p||!s.empty()){
        while(p){
            s.push(p);
            p=p->lchild;
        }

        if(!s.empty()){
            p=s.top();
            cout<<p->data<<" ";
            s.pop();
            p=p->rchild;
        }
    }
    return 1;
}

int BinaryTree::LayerOderTaverse(BiTree node){
    queue<BiTree> q;
    BiTree bt=node;
    if(bt==NULL){
        return 0;
    }
    q.push(bt);
    while(!q.empty()){
        bt=q.front();
        q.pop();
        cout<<bt->data<<" ";
        if(bt->lchild){
            q.push(bt->lchild);
        }
        if(bt->rchild){
            q.push(bt->rchild);
        }
    }
    return 1;
}

int BinaryTree::display_leaf(BiTree node){
    queue<BiTree> q;
    BiTree bt=node;
    if(bt==NULL){
        return 0;
    }
    q.push(bt);
    while(!q.empty()){
        bt=q.front();
        q.pop();
        if(bt->lchild==NULL&&bt->rchild==NULL){
            cout<<bt->data<<" ";
        }
        if(bt->lchild){
            q.push(bt->lchild);
        }
        if(bt->rchild){
            q.push(bt->rchild);
        }
    }
    return 1;
}

int BinaryTree::count_leaf(BiTree node){
    int counter=0;
    queue<BiTree> q;
    BiTree bt=node;
    if(bt==NULL){
        return -1;
    }
    q.push(bt);
    while(!q.empty()){
        bt=q.front();
        q.pop();
        if(bt->lchild==NULL&&bt->rchild==NULL){
                counter++;
            //cout<<bt->data<<" ";
        }
        if(bt->lchild){
            q.push(bt->lchild);
        }
        if(bt->rchild){
            q.push(bt->rchild);
        }
    }
    return counter;
}



