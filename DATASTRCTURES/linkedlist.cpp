#include<iostream>
using namespace std;

template<typename T>
class Node
//this class is contaning the data and pointer to the  
{
    public:
    Node<T>* next;
    T data;
    
};

template<typename T>
class Linkedlist
{
    public:

    Node<T>* head;
    Linkedlist(){head =NULL;}

    bool isempty()
    {
       return (head==NULL);
    }

    void insertFirst(T newitem)
    {
        Node<T>* newnode=new Node<T>;
        newnode->data=newitem;
        
        if(isempty())
        {
            newnode->next=NULL;
            head=newnode;
        }
        else
        {
            newnode->next = head;
            head=newnode;

        }


    }
    void display()
        {
            Node<T> *temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<endl;
                temp = temp->next;
            }

        }
    void insertbefore(T item , T newvalue){
            Node<T>* newnode=new Node<T>;
            newnode->data=newvalue;
            Node<T>* temp=head;
            while (temp!=NULL && temp->next->data!=item)
            {
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
            
        }
    void append(T value){
        Node<T>* newnode=new Node<T>;
        newnode->data=value;
        Node<T>* temp=head;

        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;

    }

    void del(T value){
        Node<T>* delitem=new Node<T>;
        Node<T>* temp = head;

        while (temp->next->data!=value)
        {
            temp=temp->next;
        }
        delitem=temp->next;
        temp->next=delitem->next;
        delete delitem;
        

    }

    void delfirst(){
        Node<T>* delitem=head;
        head=head->next;
        delete delitem;
    }

    void merge(Linkedlist<T>L){
        Node<T>* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=L.head;
    }
    T sumrec(Node<T>*newnode){
        T count=0;
        if(newnode->next==NULL)return (count+=newnode->data);
        else {
            count=newnode->data;
            newnode=newnode->next;
            return count+sumrec(newnode);
        }
        
    }
};



int main()
{
    Linkedlist<float> list;
    Linkedlist<float> list1;

    list.insertFirst(5.6);
    list.insertFirst(4);
    list.insertFirst(6);
    list.insertbefore(4,8);
    list.append(90);
    list.del(4);
    list.display();
    cout<<"----------"<<endl;
    list.delfirst();
    list.display();
    cout<<"----------"<<endl;
    list1.insertFirst(7);
    list1.append(50);list1.append(900);
    cout<<list.sumrec(list.head);



    return 0;
}


