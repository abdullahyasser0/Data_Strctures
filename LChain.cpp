#include<iostream>
using namespace std;

template <typename T>
class Node{
    public:

    Node* next;
    
    T data;
};

template <typename T>
class Lchain{
    public:
        Node<T>* backptr;
        Lchain(){ backptr=nullptr;}
        
        bool isempty(){
            return (backptr==nullptr);
        }

        void enqueue (int x){
            
            Node<T>* newnode= new  Node<T>;
            newnode->data=x;
            
            if(isempty())
            {
                backptr=newnode;
                newnode->next=backptr;
            }

            else{

                newnode->next=backptr->next;
                backptr->next=newnode;
                backptr=newnode;
            }
        }

        int dequeue ()
        {
            if (!isempty()) {
                 Node<T>* temp = backptr->next;
                backptr->next = temp->next;
                int poppedData = temp->data;
                delete temp;
                return poppedData;
            }
            else {
                cout << "Queue is empty." << endl;
                return -1;
            }
        }

        void displayB(){
            if (!isempty()) {
                cout << backptr->data << endl;
            }
            else {
                cout << "Queue is empty." << endl;
            }
        }

        
        void displayF(){
            if (!isempty()) {
                cout<<backptr->next->data<<endl;
            }
            else {
                cout << "Queue is empty." << endl;
            }
        }
        void displayall(){
            if (!isempty()) {
                Node<T>* loop=new  Node<T>;
                loop=backptr->next;
                
                do{
                cout<<loop->data<<endl;
                loop=loop->next;
                }
                while (loop!=backptr->next);
                
            }
            else {
                cout << "Queue  is empty." << endl;
            }
        }
};
int occ(int arr[],int L, int val){
    if (L==0) return 0;
    L--;

    if(arr[L]==val) return 1 + occ(arr,L,val);

    else 
    return occ(arr,L,val);


}

int main(){

    // Lchain<int> L1;
    // cout<<L1.isempty()<<endl;
    // L1.enqueue (2);
    // L1.displayB();
    // cout<<L1.isempty()<<endl;
    // L1.enqueue (8);
    // L1.enqueue (11);
    // L1.displayall();

    int A[]={1,2,1,2,3,4,5,6,1};
    cout<<occ(A,9,2);


    return 0;
}