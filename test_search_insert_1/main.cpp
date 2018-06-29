#include <iostream>
#include "search_sort.h"

using namespace std;


void panel(){
    cout<<"---------------------------------------------"<<endl;
    cout<<"-------1:直接插入排序----------"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"-------2:折半插入排序---------------"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"-------3:快速排序-------------"<<endl;
    cout<<"---------------------------------------------"<<endl;

}

void panel2(){
    cout<<"---------------------------------------------"<<endl;
    cout<<"-------1:普通静态查找----------"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"-------2:折半查找---------------"<<endl;
    cout<<"---------------------------------------------"<<endl;

}

int main()
{
    int e=4;
    SSTable a(10);
    cout<<"输入的顺序表为：";
    a.display();
    cout<<endl;
    int *b=a.elem;
    SortBinaryTree btree(11);
    for(int i=0;i<11;i++){
        btree.SearchBST(b[i]);
    }
    cout<<"中序遍历二叉排序树:";
//    btree.display_sort(btree.groot());
//    cout<<endl;
//    cout<<endl;

    btree.sort_to_table(btree.groot());
    cout<<"得到有序顺序表:";
    btree.display();
    cout<<endl;

    panel2();
    int select2;
    cout<<"输入选择:";
    cin>>select2;
    cout<<endl;
    switch(select2){
    case 1:
        cout<<"普通静态查找元素"<<e<<"在未排序表第"<<a.search_Seq(e)<<"位."<<endl;
        cout<<endl;
        break;
    case 2:
        cout<<"折半查找元素"<<e<<"在排序表后第"<<btree.Search_Bin(e)<<"位."<<endl;
        cout<<endl;
        break;
    }
//    cout<<btree.Search_Bin(3)<<endl;


    int select;
    SSTable d(10);
    //d.BInsertSort();
    panel();
    cout<<"输入选择:";
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

    cout<<"排序结果"<<endl;
    d.display();

    return 0;
}
