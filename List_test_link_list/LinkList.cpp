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
    Link_List p,q;
    int a;
    try
    {
        if(i<1||i>length+1)
        {
            throw i;
        }
         p=elem->next;
        for(a=1; a<i-1; a++)
        {
            p=p->next;
        }
        q=(Link_List) malloc(sizeof(LNode));
        q->a=e;
        q->next=p->next;
        p->next=q;
        length++;
    }
    catch(int)
    {
        cout<<"input error"<<endl;
    }
}

/** \brief
 *
 * \param e int
 * \return void
 *
 */
void Linklist::DeleteList(int e)
{
    Link_List p,q;
    int counter=1;
    p=q=elem->next;
    while(counter<=length)
    {
        if(counter==1) {}       //如果为1的话就跳过，保证第一节点无误
        else
        {
            p=p->next;
        }
        if(p->a==e)
        {
            if(counter==1)
            {
                elem=p->next;
                length--;
            }
            else
            {
                q->next=p->next;
                length--;
            }

        }
        else
        {
            q=p;
        }
        counter++;
    }


}

/** \brief
 *
 * \param i int
 * \return void
 *
 */
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

        p=q=elem->next;
        while(p)
        {
            p=p->next;
            counter++;
            if(counter==i||i==1)
            {
                break;
            }
            q=p;
        }

        if(i==1)
        {
            elem=p;
        }
        else
        {
            q->next=p->next;
        }
    }
    catch(int)
    {
        cout<<"input error"<<endl;
    }
}

/** \brief
 *
 * \param e int
 * \return int
 *
 */
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

/** \brief
 *
 * \return int
 *
 */
int Linklist::getlength()
{
    return length;
}

Link_List Linklist::getelem()
{
    return elem;
}

void Linklist::split(Linklist &l_another){
    /** \brief
     *p,
     q,
     get,
     sets;
     * \param
     * \param
     * \return
     *
     */
    Link_List p,q,get,head2;
    int counter=1;
    p=q=elem;
    head2=l_another.getelem();
    while(p){
        if((p->a%2)==0){
               cout<<p->a<<endl;
           // get=p;
            l_another.InsertList(counter,p->a);
            p=p->next;
            counter++;
           // q->next=p;
           // head2->next=get;
        }else{
            p=p->next;
        }
        q=p;
    }

    cout<<l_another.getlength()<<endl;
   // for(int i=0;i<l_another.getlength()-1;i++){
       // head2=head2->next;
  //  }
   // head2->next=NULL;

}



