// Tree Traversal Recursion/Iterative Pre/Post

#include <bits/stdc++.h>
using namespace std;

struct bin{
struct bin *left;
struct bin *right;
int data;
}*top;


void traverse(bin *a)
{
	if(a==NULL){
		return;
	}
	
	traverse(a->left);
	traverse(a->right);
	cout<<a->data<<" ";
}

void iterativein(bin* a){
     if(a==NULL)
     return;    
    	stack <bin*> binStack;
	while(true){
		if(a!=NULL)
		{
			binStack.push(a);
			a=a->left;
		}
		else{
			if(binStack.empty()==true) break;
			a=binStack.top();
			binStack.pop();
			cout<<a->data<<" ";
            a=a->right;
		}
	}
  
}
void iterativepost(bin* a){ 
    	stack <bin*> binStack;
    	//while top is not empty or stack is not empty
	while(a!=NULL||!binStack.empty()){
		if(a!=NULL)//go left
		{
			binStack.push(a);
			a=a->left;}
		//if no further left then 
		else{
			//set a temp to binStack top and shift right once
            
			bin* temp=binStack.top()->right;
			//if right not avail. pop and print top
			if(temp==NULL)
			{
               temp=binStack.top();
               binStack.pop();
               cout<<temp->data<<" ";
               //go on pop and print top unless stack is empty or
               //cur top != next top->right
               while(!binStack.empty()&&temp==binStack.top()->right){
                  temp=binStack.top();
                  binStack.pop();
               cout<<temp->data<<" ";
               }
			}
			//if right avail. go left left
			else
		     a=temp;
		}
	}
  
}
void iterativepre(bin* a){

  //if tree is empty
   if(a==NULL)
		return;
  //push top in bin_stack
   stack<bin*>binStack;
   binStack.push(a);

//while bin stack turns empty
while(binStack.empty()==false)
{
    //print top node
	bin* node= binStack.top();
    cout<<node->data<<" ";
    binStack.pop();
    //if right exist push
    if(node->right)
    	binStack.push(node->right);
    //if left exist push
    if(node->left)
    	binStack.push(node->left);
    
}
}

bin* addnode(int data){
bin *newnode=new bin();
newnode->left=NULL;
newnode->right=NULL;
newnode->data=data;
}
int main(){
top=addnode(2);
top->left=addnode(3);
top->right=addnode(4);
top->left->left=addnode(5);
top->left->right=addnode(6);
top->left->left->left=addnode(7);
top->left->left->right=addnode(8);
traverse(top);
cout<<endl;
iterativepre(top);
cout<<endl;
iterativein(top);
cout<<endl;
iterativepost(top);
return 0;	
}