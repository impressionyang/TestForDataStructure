#include <iostream>
#include"LinkList.h"

using namespace std;

int main()
{
    int n,e;
    Linklist l1,l2;
    cout<<"输入要建立的链表长度:"<<endl;
    cin>>n;
    l1.CreateList_t(n);
    l1.OutputList();
    cout<<"输入要插入的元素和位置:"<<endl;
    cin>>e>>n;
    l1.InsertList(n,e);
    l1.OutputList();
    cout<<"输入要查找的元素:"<<endl;
    cin>>e;
    cout<<"元素"<<e<<"在第"<<l1.FindList(e)<<"位。"<<endl;
    l1.OutputList();

    cout<<"输入要删除的元素位置:"<<endl;
    cin>>n;
    l1.DeleteList2(n);
    l1.OutputList();

    cout<<"输入要删除的元素:"<<endl;
    cin>>e;
    l1.DeleteList(e);
    l1.OutputList();


    l1.split(l2);
    l1.OutputList();
    l2.OutputList();
    return 0;
}
