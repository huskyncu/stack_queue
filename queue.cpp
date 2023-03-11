#include <iostream>
using namespace std;
 
int front = -1;
int last = -1;
int queue[10000];
 
int empty(){
	if(front==last){
		return 1;
	}
	else{
		return 0;
	}
}
int del(){
	front+=1;
	int tmp = queue[front];
	return tmp;
}
 
void insert(int n){
	last+=1;
	queue[last]=n;
}
int main() {
	// your code goes here
 
	int input_num;
	int choice =0;
	while(1){
		cout<<"(1)insert (2)delete (3)end process:";
		cin>>choice;
		if(choice==3){
			cout<<"end process"<<endl;
			break;
		}
		else if(choice==1){
			cout<<"insert:";
			cin>>input_num;
			insert(input_num);
		}
		else if(choice==2){
			cout<<"delete:";
			if(!empty())
			{
				int last=del();
				cout<<"last element in queue:"<<last<<endl;
			}
		}
		if(!empty())
		{
			cout<<"present queue is:"<<endl;
			for(int i=front+1;i<=last;i++)
			{
				cout<<queue[i]<<" ";
			}
			cout<<endl;
		}
		else{
			cout<<"the queue is empty."<<endl;
		}
	}
	return 0;
}