#ifndef LIST_TEST_H_INCLUDED
#define LIST_TEST_H_INCLUDED
//List_test.h
//类List_test的头文件
/*
2018/4/11
*/
using namespace std;

class List_test
{
private:
    int * elem;
    int length;		//表长
    int listsize;	//空间大小
public:
    List_test()
    {
        length=0;
        listsize=0;
    }    //默认构造函数，初始数据length=0；size=0；不过用不上233

    int  * getheader()          //返回值为地址
    {
        return elem;   // //获取顺序表头
    }
    int getlength()
    {
        return length;   //获取顺序表长度
    }
    void set_data(int);             //添加数据
    void InitList(int i);		//List_test &L构造空的有空间的线性表
    void DestroyList();		//List_test &L销毁线性表
    void ClearList();		//List_test &L重置线性表为空表
    bool IsEmpty();			//List_test L若空表为空返回true，反之返回false
    int ListLength();		//List_test L返回线性表中元素个数
    int GetElement(int i);			//List_test L,获取线性表中第i个元素
    int FindList(int e);		//List_test L,返回线性表中第一个与e相同元素的逻辑位置，若没有则返回0;
    int PriorElememt(int cur_e);		//List_test L,若cur_e不是第一个元素，则返回他的前一个元素，否则抛出异常
    int NextElememt(int cur_e);			//List_test L,若cur_e不是最后一个元素，则返回他的后一个元素，否则抛出异常
    bool ListInsert(int i,int e);		//List_test &L,在线性表第i个位置前插入元素e,1<=i<L.ListLength()+1;
    void DeleteList1(int e);           ////删除顺序表中指定值e
    int DeleteList2(int i);				//删除线性表中第i个元素并返回元素;
    void DeleteList3(int start,int end_l);       //较高的效率删除线性表中元素     位置        在x到y（x和y自定）之间的所有元素。(比重复调用delete2高效)
    void DeleteList4();                 //删除元素是线性表只存在不同元素；
    void DeleteList5(int elem_start,int elem_end);       //较高的效率删除线性表中元素       值        在x到y（x和y自定）之间的所有元素。
    void OutputList();			//显示顺序表
    void List_rank();               //排序顺序表

};


#endif // LIST_TEST_H_INCLUDED
