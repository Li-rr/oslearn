#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define NUM 8
#define TIME 5
struct PCB
{
	int name;
	int runtime;
	int runedtime;
	int killtime;
	struct PCB *next;
};
typedef struct PCB _pcb, *_PCB;
void createPCB(_PCB &tail,_PCB &top)
{
	int i;
	_PCB temp;
	top = new _pcb;
	top -> next = NULL;
	tail = new _pcb;
	tail -> next = NULL;
	srand((int)time(0));
	for(i=0; i<NUM ;i++)
	{
		temp = new _pcb;
		temp -> name = i;
		temp -> runtime = rand()%16+1;
		temp -> runedtime = 0;
		temp -> killtime = 0;
		temp -> next = NULL;
		if(i==0)
		{
			tail = temp;
			top = temp;
		}
		else
		{
			tail -> next = temp;
			tail = temp;
		}
	}
	tail = top;
}
void printPCB(_PCB top)
{
	_PCB temp;
	temp = top;
	while(temp!=NULL)
	{
		cout<<"process name:"<<temp->name
			<<"runtime="<<temp->runtime
			<<" runedtime="<<temp->runedtime
			<<" killtime="<<temp->killtime<<endl;
		temp = temp -> next;
	}
	
}
void run(_PCB &top,_PCB &runqueue)
{
	runqueue = top;
	top = top->next;
	runqueue -> runtime = run
}
int main()
{
	_PCB runqueue;
	_PCB tail,top;
	createPCB(tail,top);
	printPCB(tail);
	return 0;
}
