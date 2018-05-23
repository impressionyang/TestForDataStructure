#include <iostream>
#include"LinkList.h"

using namespace std;

int main()
{
    int n,e;
    Linklist l1,l2;
    cout<<"输入要建立的链表长度:";
    cin>>n;
    l1.CreateList_t(n);
    l1.OutputList();
    cout<<endl;

    cout<<"输入要插入的元素和位置:";
    cin>>e>>n;
    l1.InsertList(n,e);
    l1.OutputList();
    cout<<endl;

    cout<<"输入要查找的元素:";
    cin>>e;
    if(l1.FindList(e)==0){
        cout<<"元素"<<e<<"不存在!"<<endl;
    }else{
        cout<<"元素"<<e<<"在第"<<l1.FindList(e)<<"位。"<<endl;

    }
    l1.OutputList();
    cout<<endl;

    cout<<"输入要删除的元素位置:";
    cin>>n;
    l1.DeleteList2(n);
    l1.OutputList();
    cout<<endl;

    cout<<"输入要删除的元素:";
    cin>>e;
    l1.DeleteList(e);
    l1.OutputList();
    cout<<endl;


    cout<<"拆分的链表为:";
    l1.OutputList();
    cout<<"拆分的链表分别为:"<<endl;
    l1.split(l2);
    l1.OutputList();
    l2.OutputList();
    return 0;
}
