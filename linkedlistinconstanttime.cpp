#include<iostream>
#include<vector>
using namespace std;
struct node
{
    // we can declare the as many data as we want to store!!
    int data;
};
vector <node *> v1;
void insertatbegin(int data)
{
    node *temp;
    temp=new node;
    temp->data=data;
    vector<node*>::iterator it=v1.begin();
    v1.insert(it,temp);
}
void insertatend(int data)
{
    node *temp;
    temp=new node;
    temp->data=data;
    v1.push_back(temp);
}
void insertatanywhere(int data)
{
    node *temp=new node();
    temp->data=data;
    vector<node*>::iterator it=v1.begin();
    cout<<"enter the position"<<endl;
    int pos;
    cin>>pos;
    v1.insert(it+pos-1,temp);
}
void deleteatanywhere()
{
    cout<<"enter the position"<<endl;
    int pos;
    cin>>pos;
    v1.erase(v1.begin()+pos-1);
}
void deleteatbegin()
{
    v1.erase(v1.begin());
}
void deleteatend()
{
    int pos;
    pos=v1.size();
    v1.erase(v1.begin()+pos-1);
}
void viewalldata()
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<"Address: "<<v1[i]<<" data: "<<v1[i]->data<<endl;
    }
    cout<<endl;
}
int main()
{
    while(1)
    {
        cout<<"choose one "<<endl;
        cout<<"1.insert at begin"<<endl;
        cout<<"2.insert at end"<<endl;
        cout<<"3.insert at middle"<<endl;
        cout<<"4.delete at begin"<<endl;
        cout<<"5.delete at anywhere"<<endl;
        cout<<"6.delete at end"<<endl;
        cout<<"7.view all data"<<endl;
        cout<<"8.exit"<<endl;
        int choose,a;
        cin>>choose;
        switch(choose)
        {
        case 1:
            {
                cout<<"enter the data"<<endl;
                cin>>a;
                insertatbegin(a);
            }
            break;
        case 2:
            {
                cout<<"enter the data"<<endl;
                cin>>a;
                insertatend(a);
            }
            break;
        case 3:
            {
                cout<<"enter the data"<<endl;
                cin>>a;
                insertatanywhere(a);
            }

            break;
        case 4:
            deleteatbegin();
            break;
        case 5:
            deleteatanywhere();
            break;
        case 6:
            deleteatend();
            break;
        case 7:
            viewalldata();
            break;
        case 8:
            exit(1);
            break;
        default:
            cout<<"invalid input"<<endl;
            break;

        }
    }

}


