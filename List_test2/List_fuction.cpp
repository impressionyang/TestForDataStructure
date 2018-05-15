#include"List_test.h"
#include<cstdlib>
#include<iostream>
const int LISTINCREMENT=10;

void List_test::set_data(int a)
{
    if(a<=listsize)
    {
        for(int i=0; i<a; i++)
        {
            cin>>elem[i];
            length++;
        }
    }
}

void List_test::InitList(int i)
{
    elem=(int *)malloc(i*sizeof(int));
    length=0;
    listsize=i;
}

void List_test::DestroyList()
{
    free(elem);
}

void List_test::ClearList()
{
    length=0;
}

bool List_test::IsEmpty()
{
    if(length==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int List_test::ListLength()
{
    return length;
}

int List_test::GetElement(int i)
{
    return elem[i-1];
}

int List_test::FindList(int e)
{
    int position=0;
    for(int i=0; i<length; i++)
    {
        if(elem[i]==e)
        {
            position=i+1;
            break;
        }
    }
    return position;
}

bool List_test::ListInsert(int i,int e)
{

    if(i<1||i>length+1)
    {
        return false;		//越界返回false
    }

    //判断空间大小是否小于表长，若是，则重新分配空间
    if(length>=listsize)
    {
        int *newbase=(int *)realloc(elem,(listsize+LISTINCREMENT)*sizeof(int));
        //free(elem);
        elem=newbase;
        listsize+=LISTINCREMENT;
    }

    int *q=&elem[i-1];
    for(int *p=&(elem[length-1]); p>=q; --p)
    {
        *(p+1)=*p;
    }

    *q=e;  //插入
    length++;
    return true;
}

void List_test::DeleteList1(int e)
{
    int counter=0,key=1;
    for(int i=0; i<length; i++)
    {
        if(elem[i]!=e)
        {
            elem[counter]=elem[i];
            counter++;
        }
        else
        {
            key=0;
        }
    }

    if(key)
    {
        cout<<"不存在元素:"<<e<<endl;
    }

    length=counter;
}

int List_test::DeleteList2(int i)
{
    int dele_e;
    try
    {
        //判断i是否合法
        if(i<1||i>length)
        {
            throw i;
        }

        int *p=&(elem[i-1]);
        int *q=&(elem[length-1]);
        for(++p; p<=q; ++p)
        {
            dele_e=*(p-1);
            *(p-1)=*p;
        }
        length--;
        return dele_e;
    }
    catch(int)
    {
        cout<<"输入失败!!"<<endl<<"输入为:"<<i<<"但必须小于表长:"<<length<<endl;
    }
}

void List_test::DeleteList3(int start,int end_l)
{
    int leng=0;
    try
    {
        //判断i是否合法
        if(start<1||start>length)
        {
            throw start;
        }

        if(end_l<start||end_l>length)
        {
            throw end_l;
        }

        leng=length;
        length=start-1;
        for(int i=start-1; (end_l+(i-start))<leng-1; i++)
        {
            elem[i]=elem[end_l+(i-start)+1];
            length++;
        }
    }
    catch(int)
    {
        cout<<"输入失败!!"<<endl<<"输入为:"<<start<<"~"<<end_l<<"但必须小于表长:"<<length<<endl;
    }
}

void List_test::DeleteList4()
{
    for(int i=0; i<length-1; i++)
    {
        for(int j=i+1; j<length; j++)
        {
            if(elem[i]==elem[j])
            {
                DeleteList2(j+1);
            }
        }
    }
}

void List_test::DeleteList5(int elem_start,int elem_end)
{
    int counter=0,key=1;
    for(int i=elem_start; i<=elem_end; i++)
    {
        DeleteList1(i);
    }

}

void List_test::OutputList()
{
    for(int i=0; i<length; i++)
    {
        cout<<elem[i]<<" ";
    }
    cout<<endl;
}

int List_test::PriorElememt(int cur_e)
{
    try
    {
        if(elem[0]!=cur_e)
        {
            for(int i=1; i<length; i++)
            {
                if(elem[i]==cur_e)
                {
                    return elem[i-1];
                }
            }
        }
        else
        {
            throw cur_e;
        }
    }
    catch(int)
    {
        cout<<"输入异常!!!"<<endl;
    }
}

int List_test::NextElememt(int cur_e)
{
    try
    {
        if(elem[length-1]!=cur_e)
        {
            for(int i=length-2; i>=0; i--)
            {
                if(elem[i]==cur_e)
                {
                    return elem[i+1];
                }
            }
        }
        else
        {
            throw cur_e;
        }
    }
    catch(int)
    {
        cout<<"输入异常!!!"<<endl;
    }
}

void List_test::List_rank()
{
    int temp;
    for(int i=0; i<length-1; i++)
    {
        for(int j=i; j<length; j++)
        {
            if(elem[i]>=elem[j])
            {
                temp=elem[i];
                elem[i]=elem[j];
                elem[j]=temp;
            }
        }
    }
}


