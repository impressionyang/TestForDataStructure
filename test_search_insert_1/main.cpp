#include <iostream>
#include "search_sort.h"

using namespace std;


void panel(){
    cout<<"---------------------------------------------"<<endl;
    cout<<"-------1:ֱ�Ӳ�������----------"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"-------2:�۰��������---------------"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"-------3:��������-------------"<<endl;
    cout<<"---------------------------------------------"<<endl;

}

void panel2(){
    cout<<"---------------------------------------------"<<endl;
    cout<<"-------1:��ͨ��̬����----------"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"-------2:�۰����---------------"<<endl;
    cout<<"---------------------------------------------"<<endl;

}

int main()
{
    int e=4;
    SSTable a(10);
    cout<<"�����˳���Ϊ��";
    a.display();
    cout<<endl;
    int *b=a.elem;
    SortBinaryTree btree(11);
    for(int i=0;i<11;i++){
        btree.SearchBST(b[i]);
    }
    cout<<"�����������������:";
//    btree.display_sort(btree.groot());
//    cout<<endl;
//    cout<<endl;

    btree.sort_to_table(btree.groot());
    cout<<"�õ�����˳���:";
    btree.display();
    cout<<endl;

    panel2();
    int select2;
    cout<<"����ѡ��:";
    cin>>select2;
    cout<<endl;
    switch(select2){
    case 1:
        cout<<"��ͨ��̬����Ԫ��"<<e<<"��δ������"<<a.search_Seq(e)<<"λ."<<endl;
        cout<<endl;
        break;
    case 2:
        cout<<"�۰����Ԫ��"<<e<<"���������"<<btree.Search_Bin(e)<<"λ."<<endl;
        cout<<endl;
        break;
    }
//    cout<<btree.Search_Bin(3)<<endl;


    int select;
    SSTable d(10);
    //d.BInsertSort();
    panel();
    cout<<"����ѡ��:";
    cin>>select;

    cout<<endl;
    switch(select){
    case 1:
        d.InsertSort();
        break;
    case 2:
        d.BInsertSort();
        break;
    case 3:
        d.QSort(0,d.length);
        break;
    }

    cout<<"������"<<endl;
    d.display();

    return 0;
}
