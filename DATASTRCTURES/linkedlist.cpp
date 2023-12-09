// #include<iostream>
// using namespace std;

// template<typename T>
// class Node
// //this class is contaning the data and pointer to the  
// {
//     public:
//     Node<T>* next;
//     T data;
    
// };

// template<typename T>
// class Linkedlist
// {
//     public:

//     Node<T>* head;
//     Linkedlist(){head =NULL;}

//     bool isempty()
//     {
//        return (head==NULL);
//     }

//     void insertFirst(T newitem)
//     {
//         Node<T>* newnode=new Node<T>;
//         newnode->data=newitem;
        
//         if(isempty())
//         {
//             newnode->next=NULL;
//             head=newnode;
//         }
//         else
//         {
//             newnode->next = head;
//             head=newnode;

//         }


//     }
//     void display()
//         {
//             Node<T> *temp=head;
//             while(temp!=NULL)
//             {
//                 cout<<temp->data<<endl;
//                 temp = temp->next;
//             }

//         }
//     void insertbefore(T item , T newvalue){
//             Node<T>* newnode=new Node<T>;
//             newnode->data=newvalue;
//             Node<T>* temp=head;
//             while (temp!=NULL && temp->next->data!=item)
//             {
//                 temp=temp->next;
//             }
//             newnode->next=temp->next;
//             temp->next=newnode;
            
//         }
//     void append(T value){
//         Node<T>* newnode=new Node<T>;
//         newnode->data=value;
//         Node<T>* temp=head;

//         while (temp->next!=NULL)
//         {
//             temp=temp->next;
//         }
//         temp->next=newnode;
//         newnode->next=NULL;

//     }

//     void del(T value){
//         Node<T>* delitem=new Node<T>;
//         Node<T>* temp = head;

//         while (temp->next->data!=value)
//         {
//             temp=temp->next;
//         }
//         delitem=temp->next;
//         temp->next=delitem->next;
//         delete delitem;
        

//     }

//     void delfirst(){
//         Node<T>* delitem=head;
//         head=head->next;
//         delete delitem;
//     }

//     void merge(Linkedlist<T>L){
//         Node<T>* temp=head;
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         temp->next=L.head;
//     }
//     T sumrec(Node<T>*newnode){
//         T count=0;
//         if(newnode->next==NULL)return (count+=newnode->data);
//         else {
//             count=newnode->data;
//             newnode=newnode->next;
//             return count+sumrec(newnode);
//         }
        
//     }
// };
        
// /*
// 1-37,2
// 2-log N ,5log N


// */




// int main()
// {
//     Linkedlist<float> list;
//     Linkedlist<float> list1;

//     list.insertFirst(5.6);
//     list.insertFirst(4);
//     list.insertFirst(6);
//     list.insertbefore(4,8);
//     list.append(90);
//     list.del(4);
//     list.display();
//     cout<<"----------"<<endl;
//     list.delfirst();
//     list.display();
//     cout<<"----------"<<endl;
//     list1.insertFirst(7);
//     list1.append(50);list1.append(900);
//     cout<<list.sumrec(list.head);



//     return 0;
// }




#include <iostream>		//To use C++ console I/O functionality
						//, we need to include iostream which contains necessary declarations.
using namespace std;	//This statement enables us to use classes and objects in the standard C++ library
						//without prefixing them with "std::"

// This caod has 1 checkpoint [CheckPoint 1]
//Follow the provided instructions at each check point

//This is the program starting point.

class Car {
	private:
		int carNumber,engineNumber ;
	public:
		void setCarNumber(int number) {
			carNumber = number;
		}
		void setEngineNumber(int number) {
			engineNumber = number;
		}
		int getCarNumber() {
			return carNumber;
		}
		int getEngineNumber() {
			return engineNumber;
		}

		
};
//Exercise 3
template<typename K>
class Nod {
	public:
		K data;
		Nod<K>* next;
		Nod() {
			data = 0;
			next = NULL;
		}
};

template <typename T>
class LLstack {
		

	public:
		Nod<T>* topi;

		LLstack() :  topi(nullptr){}
		
		bool isEmpyt() {
			return(topi == nullptr);
		}

		void push(T item) {
			Nod<T>* newnode = new Nod<T>;
			newnode->data = item;
			
			if (isEmpyt())
			topi = newnode;

			else {
				newnode->next = topi;
				topi = newnode;
			}
		}

		bool pop(T &P) {
			if (isEmpyt()) return false ;
			else {
				Nod<T>* deltemp = topi;
				P = topi->data;
				//cout << P << endl;
				topi = topi->next;
				delete deltemp;
				return true;
			}
		}
		T peek() {
			return topi->data;
		}
		bool collapesmm(LLstack<T> &L) {
			T x , y, sum,M;
			if (L.isEmpyt()) return false;

			else {
				LLstack<T> Col;
				while(L.pop(x)){
					if (L.pop(y)){
						sum = x + y;
						Col.push(sum);
					}
					else {
						Col.push(x);
					}
				}
				while (Col.pop(M)) {
					L.push(M);
				}
				return true;


			}
		}

};
//Exercise 3 End


//rare =(rare+1)%maxsize

int main()
{
	/*
	//Declare a Stack of integers named "S" and with max size = 10 elements
	ArrayStack<int> S(10);

	int i,x,n;

	cout<<"\nEnter no. of values to push into stack:";
	cin>>n;

	//Test the 1st stack by pushing n values then popping
	cout << "Testing stack S......" << endl;
	cout << "Pushing "<<n<<" values into S:" << endl;

	cout<<"Please Enter the "<<n<<" values to push in S :";
	for(i = 0; i < n; i++)
	{	 
		cin>>x;
		S.push(x); //pushing x to S
	}

	cout << endl<<"Popping: ";

	while(S.pop(x))		//As long as pop returns true, x contains a valid value		
		cout << x << " ";

	/// ==> [CheckPoint 1]
	//After 1st run, comment the above while loop and uncomment the while loop below

	//while(S.peek(x))		//as long as peek returns true, so x contains a valid value		
		//cout << x << " ";

	
	cout<<endl;

	cout<<"is S Empty?? ==>"<<boolalpha<<S.isEmpty();
	cout<<endl;
	
	*/
	//Exercise 1 
	/*
		ArrayStack<string> SON(3);
		SON.push("ABood");
		SON.push("Bayoumi");
		string names;
		while (SON.pop(names))
			cout << names << " ";
			*/
	//Exercise 2
		/*
		Car* c1 = new Car;
		Car* c2 = new Car;
		Car* c3 = new Car;

		c1->setCarNumber(1);
		c1->setEngineNumber(10);

		c2->setCarNumber(2);
		c2->setEngineNumber(20);

		c3->setCarNumber(3);
		c3->setEngineNumber(30);

		ArrayStack<Car*>carstack(3);
		carstack.push(c1);
		carstack.push(c2);
		carstack.push(c3);
		Car* tempcar;
		while (carstack.pop(tempcar)) {
			cout << tempcar->getCarNumber() << endl;
			cout << tempcar->getEngineNumber() << endl;
		}
		*/

	//Exercise 3
		/*
		LLstack<int> s1;
		s1.push(5);
		s1.push(4);
		cout<<s1.peek();
		*/
	//Exercise 4 will be found in "2-Passing_Stack" source files
	LLstack<int> S;
	S.push(1);
	S.push(6);
	S.push(4);
	S.push(8);
	int C , K;
	//S.pop(K);
	S.collapesmm(S);
	
	while (!S.isEmpyt()) {
		S.pop(C);
		cout << C<<endl;
	}
	
	return 0;
}
  
