#ifndef LIST_TEST_H_INCLUDED
#define LIST_TEST_H_INCLUDED
//List_test.h
//��List_test��ͷ�ļ�
/*
2018/4/11
*/
using namespace std;

class List_test
{
private:
    int * elem;
    int length;		//��
    int listsize;	//�ռ��С
public:
    List_test()
    {
        length=0;
        listsize=0;
    }    //Ĭ�Ϲ��캯������ʼ����length=0��size=0�������ò���233

    int  * getheader()          //����ֵΪ��ַ
    {
        return elem;   // //��ȡ˳���ͷ
    }
    int getlength()
    {
        return length;   //��ȡ˳�����
    }
    void set_data(int);             //�������
    void InitList(int i);		//List_test &L����յ��пռ�����Ա�
    void DestroyList();		//List_test &L�������Ա�
    void ClearList();		//List_test &L�������Ա�Ϊ�ձ�
    bool IsEmpty();			//List_test L���ձ�Ϊ�շ���true����֮����false
    int ListLength();		//List_test L�������Ա���Ԫ�ظ���
    int GetElement(int i);			//List_test L,��ȡ���Ա��е�i��Ԫ��
    int FindList(int e);		//List_test L,�������Ա��е�һ����e��ͬԪ�ص��߼�λ�ã���û���򷵻�0;
    int PriorElememt(int cur_e);		//List_test L,��cur_e���ǵ�һ��Ԫ�أ��򷵻�����ǰһ��Ԫ�أ������׳��쳣
    int NextElememt(int cur_e);			//List_test L,��cur_e�������һ��Ԫ�أ��򷵻����ĺ�һ��Ԫ�أ������׳��쳣
    bool ListInsert(int i,int e);		//List_test &L,�����Ա��i��λ��ǰ����Ԫ��e,1<=i<L.ListLength()+1;
    void DeleteList1(int e);           ////ɾ��˳�����ָ��ֵe
    int DeleteList2(int i);				//ɾ�����Ա��е�i��Ԫ�ز�����Ԫ��;
    void DeleteList3(int start,int end_l);       //�ϸߵ�Ч��ɾ�����Ա���Ԫ��     λ��        ��x��y��x��y�Զ���֮�������Ԫ�ء�(���ظ�����delete2��Ч)
    void DeleteList4();                 //ɾ��Ԫ�������Ա�ֻ���ڲ�ͬԪ�أ�
    void DeleteList5(int elem_start,int elem_end);       //�ϸߵ�Ч��ɾ�����Ա���Ԫ��       ֵ        ��x��y��x��y�Զ���֮�������Ԫ�ء�
    void OutputList();			//��ʾ˳���
    void List_rank();               //����˳���

};


#endif // LIST_TEST_H_INCLUDED
