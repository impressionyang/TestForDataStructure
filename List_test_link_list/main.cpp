#include <iostream>
#include"LinkList.h"

using namespace std;

int main()
{
    int e;
    Linklist l1,l2;
    l1.CreateList_t(5);
    l1.OutputList();
    l1.InsertList(6,233);
    l1.OutputList();
    cout<<l1.FindList(233)<<endl;
    l1.OutputList();
    l1.DeleteList2(6);
    l1.OutputList();

    //l1.split(l2);
    //l1.OutputList();
    //l2.OutputList();
    return 0;
}