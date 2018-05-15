#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED

using namespace std;

typedef struct L_Node
{
    int a;
    struct L_Node * next;
} LNode, *Link_List;

class Linklist
{
private:
    Link_List elem;
    int length;

public:
    Linklist();
    void CreatList_h(int n);            //（1）用头插法建立链表
    void CreateList_t(int n);           //（2）用尾插法建立链表
    void InsertList(int i, int e);        //（3）向链表的指定位置i插入元素
    void DeleteList(int i);              //（4）删除链表中指定元素值
    void DeleteList2(int i);              //（4）删除链表中指定位置元素
    int FindList(int e);                //（5）查找链表中的元素e
    void OutputList();              //（6）输出链表中元素
    int getlength();                    //获取长度
    Link_List getelem();                    //获取elem

    /** \brief
     *
     * \param l_another Linklist&
     * \return void
     *
     将一个头节点指针为heada的单链表A分解成两个单链表A和B，
    其头结点指针分别为heada和headb，使得A表中含有原单链表A中序号为奇数的元素，
    B表中含有原链表A中序号为偶数的元素，且保持原来的相对顺序。
     */
    void split(Linklist &l_another);

};


#endif // LINKLIST_H_INCLUDED
