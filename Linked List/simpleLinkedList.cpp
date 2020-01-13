#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;	
};
class list
{
		private:
		node *head, *tail;
		public:
		list()
		{
			head=NULL;
			tail=NULL;
		}
		void createnode(int value)
		{
			node *temp=new node;
			temp->data=value;
			temp->next=NULL;
			if(head==NULL)
			{
				head=temp;
				tail=temp;
				temp=NULL;
			}
			else
			{	
				tail->next=temp;
				tail=temp;
			}
		}
		void display()
		{
			node *temp=new node;
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<"\t";
				temp=temp->next;
			}
		}
		
		void add(){
		    int sum=0;
		    node *temp=new node;
			temp=head;
			while(temp!=NULL)
			{
				
				sum += temp->data;
				temp=temp->next;
			}
		    cout<<"Sum is "<<sum;
		    
		}
};
int main()
{
	list obj;
	int choice=0, value=0;
    
    cout<<"Do you want to create a node?"<<endl;
    cout<<"Press 1 for yes\nOR press any other number to exit"<<endl;
    cin>>choice;
    
    if (choice == 1){
        while (choice == 1){
            
            cout<< "Enter the value of your node"<<endl;
            cin>>value;
            obj.createnode(value);
            cout<< "Do you want to create another node?"<<endl;
            cout<<"Press 1 to create another node"<<endl;
            cout<<"Press 2 if you don't want to create another node"<<endl;
            cout<<"Press any other number to exit the program"<<endl;
            cin>>choice;
        }
    }
    
    else if(choice!=-1){
        return 0;
    }
    
    int choice1=0;
    
    cout<<"Do you want to display the nodes"<<endl;
    cout<<"Press 1 to display nodes\nOr press 2 to add nodes\nOr press -1 to exit the program\n";
    cin>> choice1;
    
    if(choice1 == 1){
        
        obj.display();
        
    }
        
    else if(choice1 ==2){
      
        obj.add();
        
    }
    else if(choice1==-1){
        return 0;
    }
    
     cout<<"Do you want to add the nodes"<<endl;
    cout<<"Press 1 to add\nOr press -1 to exit the program"<<endl;
    
     choice1 =0;
    cin>> choice1;
    
    if(choice1==1){
        
        obj.add();
        
    }
    else if(choice1==-1){
        return 0;
    }
 
	return 0;
}
