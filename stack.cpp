#include <iostream>
using namespace std;
 
int index = -1;
int stack[10000];
 
int empty(){
	if(index==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int pop(){
	int tmp = stack[index];
	index--;
	return tmp;
 
}
 
void push(int n){
	index++;
	stack[index]=n;
}
int main() {
	// your code goes here
 
	int input_num;
	int choice =0;
	while(1){
		cout<<"(1)push (2)pop (3)end process:";
		cin>>choice;
		if(choice==3){
			cout<<"end process"<<endl;
			break;
		}
		else if(choice==1){
			cout<<"push:";
			cin>>input_num;
			push(input_num);
		}
		else if(choice==2){
			cout<<"pop:";
			if(!empty())
			{
				int last=pop();
				cout<<"last element in stack:"<<last<<endl;
			}
			else{
				cout<<"the stack is empty."<<endl;
			} 
		}
		if(!empty())
		{
			cout<<"present stack is:"<<endl;
			for(int i=0;i<=index;i++)
			{
				cout<<stack[i]<<" ";
			}
			cout<<endl;
		}
 
 
	}
	return 0;
}