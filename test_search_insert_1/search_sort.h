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
    int search_Seq(int key);    //��̬����
    void display();
    void InsertSort();          //ֱ�Ӳ�������
    void BInsertSort();     //���ֲ�������
    int Partition(int low,int high);        //�����ƶ�����
    int Partition2(int low,int high);        //�����ƶ�����2
    void QSort(int low,int high);          //�ݹ���ʽ��������
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