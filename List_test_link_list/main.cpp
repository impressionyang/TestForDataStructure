#include <iostream>
#include"LinkList.h"

using namespace std;

int main()
{
    int n,e;
    Linklist l1,l2;
    cout<<"����Ҫ������������:";
    cin>>n;
    l1.CreateList_t(n);
    l1.OutputList();
    cout<<endl;

    cout<<"����Ҫ�����Ԫ�غ�λ��:";
    cin>>e>>n;
    l1.InsertList(n,e);
    l1.OutputList();
    cout<<endl;

    cout<<"����Ҫ���ҵ�Ԫ��:";
    cin>>e;
    if(l1.FindList(e)==0){
        cout<<"Ԫ��"<<e<<"������!"<<endl;
    }else{
        cout<<"Ԫ��"<<e<<"�ڵ�"<<l1.FindList(e)<<"λ��"<<endl;

    }
    l1.OutputList();
    cout<<endl;

    cout<<"����Ҫɾ����Ԫ��λ��:";
    cin>>n;
    l1.DeleteList2(n);
    l1.OutputList();
    cout<<endl;

    cout<<"����Ҫɾ����Ԫ��:";
    cin>>e;
    l1.DeleteList(e);
    l1.OutputList();
    cout<<endl;


    cout<<"��ֵ�����Ϊ:";
    l1.OutputList();
    cout<<"��ֵ�����ֱ�Ϊ:"<<endl;
    l1.split(l2);
    l1.OutputList();
    l2.OutputList();
    return 0;
}
