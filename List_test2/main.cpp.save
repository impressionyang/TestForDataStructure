#include <iostream>
#include"List_test.h"
using namespace std;

/*
这个方法是完成--》1 将两个有序表进行合并，要求同样的元素只出现一次
要求的，因为不好写在类里面，毕竟一个对象不能操作另一个对象的数据呀233
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
    cout<<"请输入初始化顺序表长度n=";
    cin>>n;
    l1.InitList(n);         //（1）初始化线性表；

    cout<<"请输入"<<n<<"个数据"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>e;
        l1.ListInsert(i+1,e);    //（2）调用插入函数建立一个线性表
    }
    l1.OutputList();

    cout<<"请输入要寻找的元素：";     //（3）在线性表中寻找指定的元素
    cin>>e;
    if(l1.FindList(e))
    {
        cout<<"元素"<<e<<"位于第"<<l1.FindList(e)<<"位"<<endl;
    }
    else
    {
        cout<<"元素"<<e<<"不存在"<<endl;
    }
    l1.OutputList();

    cout<<"请输入要删除的元素：";     //（4）在线性表中删除指定值的元素
    cin>>e;
    l1.DeleteList1(e);
    l1.OutputList();

    cout<<"请输入要删除的元素位置：";      //（5）在线性表中删除指定位置的元素
    cin>>e;
    l1.DeleteList2(e);
    l1.OutputList();

    cout<<"请输入新建线性表长度n=";
    cin>>n;
    l2.InitList(n);
    cout<<"请输入"<<n<<"个数据建立另一个线性表"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>e;
        l2.ListInsert(i+1,e);
    }
    combine(l1,l2);
    l1.DeleteList4();
    l1.List_rank();
    l1.OutputList();

    cout<<"请输入要删除的元素起始及终止元素范围(空格隔开)：";      //2要求以较高的效率删除线性表中元素值在x到y（x和y自定）之间的所有元素。
    cin>>e>>b;
    cout<<"删除的元素为："<<e<<"~"<<b<<endl;
    for(int i=e; i<=b; i++)
    {
        l1.DeleteList1(i);
    }
    // l1.DeleteList5(e,b);
    l1.OutputList();

    return 0;
}
