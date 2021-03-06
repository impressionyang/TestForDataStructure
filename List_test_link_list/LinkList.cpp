#include<iostream>
#include<cstdlib>
#include"LinkList.h"

Linklist::Linklist(){
    length=0;
}

/** \brief
 *
 * \param n int
 * \return void
 *
 */
void Linklist::CreateList_t(int n)
{
    length=0;
    Link_List p,q;
    cout<<"请输入"<<n<<"个数字"<<endl;
    elem=(Link_List)malloc(sizeof(LNode));
    q=elem;
    for(int i=0; i<n; i++)
    {
        p=(Link_List)malloc(sizeof(LNode));
        cin>>p->a;
        q->next=p;
        length++;
        q=p;
    }
    p->next=NULL;
}

/** \brief
 *
 * \param n int
 * \return void
 *
 */
void Linklist::CreatList_h(int n)
{
    //length=0;构造函数已写了
    Link_List p,q;
    elem=(Link_List) malloc (sizeof (LNode) );
    elem->next=NULL;
    cout<<"请输入"<<n<<"个数字"<<endl;
    for(int i=n; i>0; --i)
    {
        p=(Link_List) malloc(sizeof (LNode) );
        cin >> p->a;
        p->next=elem->next;
        length++;
        elem->next=p;
    }
}

/** \brief
 *
 * \param i int
 * \param e int
 * \return void
 *
 */
void Linklist::InsertList(int i, int e)
{
    Link_List p,q,temp;
    int a;
    try
    {
        if(i<1||i>length+1)
        {
            throw i;
        }
        q=elem;
         p=elem->next;
        for(a=0; a<i-1; a++)
        {
            q=p;
            p=p->next;
        }
        temp=new LNode[1];
        temp->a=e;
        temp->next=p;
        q->next=temp;
        length++;
    }
    catch(int)
    {
        cout<<"input error"<<endl;
    }
}


void Linklist::DeleteList(int e)
{
    Link_List p,q;
    int key=1;
    q=elem;
    p=elem->next;
    while(p)
    {
        if(p->a==e){
            q->next=p->next;
            p=p->next;
            length--;
            key=0;
        }else{
            q=p;
            p=p->next;
        }
    }

    if(key){
        cout<<"元素"<<e<<"不存在"<<endl;
    }

}


void Linklist::DeleteList2(int i)
{
    Link_List p,q;
    int counter=1;
    try
    {
        if(i<1||i>length)
        {
            throw i;
        }

        q=elem;
        p=elem->next;
        while(p)
        {
            if(counter==i||i==1)
            {
                break;
            }
            counter++;
            q=p;
            p=p->next;
        }
        if(i==1)
        {
            elem=p;
        }
        else
        {
            q->next=p->next;
            length--;
        }
    }
    catch(int)
    {
        cout<<"input error"<<endl;
    }
}


int Linklist::FindList(int e)
{
    Link_List p;
    int counter=1;
    p=elem->next;
    while(p)
    {
        if(p->a==e)
        {
            return counter;
        }
        p=p->next;
        counter++;
    }
    if(counter>length)
    {
        return 0;
    }
    else
    {
        return counter;
    }
}

/** \brief
 *
 * \return void
 *
 */
void Linklist::OutputList()
{
    Link_List p;
    p=elem->next;
    while(p)
    {
        cout<<p->a<<" ";
        p=p->next;
    }
    cout<<endl;
}

int Linklist::getlength()
{
    return length;
}

Link_List Linklist::getelem()
{
    return elem;
}

int Linklist::setlength(int new_length){
    length=new_length;
    return 1;
}

void Linklist::set_new_list(Link_List l){
    elem=l;
}

void Linklist::split(Linklist &l_another){
    Link_List p,q,pt,temp;
    temp=new LNode[1];
    int l_length=0;
    q=elem;
    p=elem->next;
    pt=temp;
    while(p){
        if(p->a%2==0){
            pt->next=p;
            q->next=p->next;
            p=p->next;
            pt=pt->next;
            l_length++;
        }else{
            q=p;
            p=p->next;
        }
    }
    pt->next=NULL;

    l_another.setlength(l_length);
    l_another.set_new_list(temp);

}



