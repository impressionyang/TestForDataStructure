#include <iostream>
#include"List_test.h"
using namespace std;

/*
������������--��1 �������������кϲ���Ҫ��ͬ����Ԫ��ֻ����һ��
Ҫ��ģ���Ϊ����д�������棬�Ͼ�һ�������ܲ�����һ�����������ѽ233
*/
void combine(List_test &a,List_test &b)
{
    int *header=b.getheader();
    int leng=a.getlength();
    for(int i=0; i<b.getlength(); i++)
    {
        a.ListInsert(leng+i+1,header[i]);
    }
}

int main()
{
    int n,e,b;
    List_test l1,l2;
    cout<<"�������ʼ��˳�����n=";
    cin>>n;
    l1.InitList(n);         //��1����ʼ�����Ա�

    cout<<"������"<<n<<"������"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>e;
        l1.ListInsert(i+1,e);    //��2�����ò��뺯������һ�����Ա�
    }
    l1.OutputList();

    cout<<"������ҪѰ�ҵ�Ԫ�أ�";     //��3�������Ա���Ѱ��ָ����Ԫ��
    cin>>e;
    if(l1.FindList(e))
    {
        cout<<"Ԫ��"<<e<<"λ�ڵ�"<<l1.FindList(e)<<"λ"<<endl;
    }
    else
    {
        cout<<"Ԫ��"<<e<<"������"<<endl;
    }
    l1.OutputList();

    cout<<"������Ҫɾ����Ԫ�أ�";     //��4�������Ա���ɾ��ָ��ֵ��Ԫ��
    cin>>e;
    l1.DeleteList1(e);
    l1.OutputList();

    cout<<"������Ҫɾ����Ԫ��λ�ã�";      //��5�������Ա���ɾ��ָ��λ�õ�Ԫ��
    cin>>e;
    l1.DeleteList2(e);
    l1.OutputList();

    cout<<"�������½����Ա���n=";
    cin>>n;
    l2.InitList(n);
    cout<<"������"<<n<<"�����ݽ�����һ�����Ա�"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>e;
        l2.ListInsert(i+1,e);
    }
    combine(l1,l2);
    l1.DeleteList4();
    l1.List_rank();
    l1.OutputList();

    cout<<"������Ҫɾ����Ԫ����ʼ����ֹԪ�ط�Χ(�ո����)��";      //2Ҫ���Խϸߵ�Ч��ɾ�����Ա���Ԫ��ֵ��x��y��x��y�Զ���֮�������Ԫ�ء�
    cin>>e>>b;
    cout<<"ɾ����Ԫ��Ϊ��"<<e<<"~"<<b<<endl;
    for(int i=e; i<=b; i++)
    {
        l1.DeleteList1(i);
    }
    // l1.DeleteList5(e,b);
    l1.OutputList();

    return 0;
}
