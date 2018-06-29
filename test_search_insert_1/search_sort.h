#ifndef SEARCH_SORT_H_INCLUDED
#define SEARCH_SORT_H_INCLUDED
typedef struct BiTNode{
    int data;
    struct BiTNode * lchild, *rchild;
}BiTNode,*BiTree;

class SSTable{
public:
    int * elem;
    int * normal;
    int length;
    void tonormal();
    SSTable(int length);
    int search_Seq(int key);    //静态查找
    void display();
    void InsertSort();          //直接插入排序
    void BInsertSort();     //二分插入排序
    int Partition(int low,int high);        //单次移动数据
    int Partition2(int low,int high);        //单次移动数据2
    void QSort(int low,int high);          //递归形式快速排序
};

class SortBinaryTree{
private:
    BiTree root;
    int *elem;
    int elem_length;
public:
    SortBinaryTree(int length);
    BiTree groot();
    int* gelem();
    void display();
    int Search_Bin(int key);
    int SearchBST(int key);
    void sort_to_table(BiTree T);
    void display_sort(BiTree T);
};


#endif // SEARCH_SORT_H_INCLUDED
