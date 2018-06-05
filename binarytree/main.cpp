#include <iostream>
#include"binarytree.h"
#include<string>

using namespace std;

void panel()
{
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"----------1.中序建立树---------------------------------------"<<endl;
    cout<<"----------2.先序遍历树---------------------------------------"<<endl;
    cout<<"----------3.中序遍历树---------------------------------------"<<endl;
    cout<<"----------4.后序遍历树---------------------------------------"<<endl;
    cout<<"----------5.层次遍历树---------------------------------------"<<endl;
    cout<<"----------6.输出所有叶子-----------------------------------"<<endl;
    cout<<"----------7.输出叶子数---------------------------------------"<<endl;
    cout<<"----------0.退出--------------------------------------------------"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
}

int main()
{
    //ABC##DE#G##F###

    string input;
    BinaryTree b;
    int select,key=1;
    while(key)
    {
        panel();
        cout<<"请输入选择项："<<endl;
        cin>>select;
        switch(select)
        {
        case 0:
            key=0;
            break;
        case 1:
            cout<<"请输入先序建立树序列："<<endl;
            b.init_tree();
            break;
        case 2:
            cout<<"先序遍历树："<<endl;
            b.PreOderTaverse(b.get_root());
            cout<<endl;
            break;
        case 3:
            cout<<"中序遍历树："<<endl;
            b.MidOderTaverse(b.get_root());
            cout<<endl;
            break;
        case 4:
            cout<<"后序遍历树："<<endl;
            b.EndOderTaverse(b.get_root());
            cout<<endl;
            break;
        case 5:
            cout<<"层次遍历树："<<endl;
            b.LayerOderTaverse(b.get_root());
            cout<<endl;
            break;
        case 6:
            b.display_leaf(b.get_root());
            cout<<endl;
            break;
        case 7:
            cout<<endl<<"叶子节点数为："<<b.count_leaf(b.get_root())<<endl;
            break;
        default:
            cout<<"2333"<<endl;
        }
    }
    //b.MidOderTaverse(b.get_root());
    //cout<<endl;
    //b.display_leaf(b.get_root());
    //cout<<endl<<b.count_leaf(b.get_root())<<endl;
    return 0;
}
