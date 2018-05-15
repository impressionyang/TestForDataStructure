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
    void CreatList_h(int n);            //��1����ͷ�巨��������
    void CreateList_t(int n);           //��2����β�巨��������
    void InsertList(int i, int e);        //��3���������ָ��λ��i����Ԫ��
    void DeleteList(int i);              //��4��ɾ��������ָ��Ԫ��ֵ
    void DeleteList2(int i);              //��4��ɾ��������ָ��λ��Ԫ��
    int FindList(int e);                //��5�����������е�Ԫ��e
    void OutputList();              //��6�����������Ԫ��
    int getlength();                    //��ȡ����
    Link_List getelem();                    //��ȡelem

    /** \brief
     *
     * \param l_another Linklist&
     * \return void
     *
     ��һ��ͷ�ڵ�ָ��Ϊheada�ĵ�����A�ֽ������������A��B��
    ��ͷ���ָ��ֱ�Ϊheada��headb��ʹ��A���к���ԭ������A�����Ϊ������Ԫ�أ�
    B���к���ԭ����A�����Ϊż����Ԫ�أ��ұ���ԭ�������˳��
     */
    void split(Linklist &l_another);

};


#endif // LINKLIST_H_INCLUDED
