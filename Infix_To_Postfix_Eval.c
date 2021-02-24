#include<stdio.h>
#include<stdlib.h>
#include<ctype.h> 
#define SIZE 20 
char Expr[SIZE]; 
char Stack[SIZE]; 
int Top=-1; 
void push(char ch); 
void pop(); 
void infix_to_postfix(); 
int m,l; 
void main() 
{
	char ch; 
	printf("Covert Infix To Postfix Expression:\n"); 
	printf("Enter Your Expression \n");
	printf("To Quit Enter Fullstop(.)\n"); 
	while((ch=getc(stdin))!='\n') 
	{ 
		Expr[m]=ch; 
		m++; 
	} 
	l=m; 
	infix_to_postfix(); 
	 
} 
void push(char ch) 
{ 
	if(Top+1 >= SIZE) 
	{ 
		printf("\nStack is full"); 
	} 
	else 
	{ 
		Top=Top+1; 
		Stack[Top] = ch; 
	} 
} 
void pop() 
{ 
	if (Top < 0) 
	{ 
		printf("\n Stack is empty"); 
	} 
	else 
	{ 
		if(Top >=0) 
		{ 
			if(Stack[Top]!='(') 
				printf("%c",Stack[Top]); 
			Top=Top-1; 
		} 
	} 
} 
void infix_to_postfix() 
{ 
	m=0; 
	while(m<l) 
	{ 
		switch(Expr[m]) 
		{	 
			case '+' : 
			case '-' :					 
			while(Stack[Top] =='-' || Stack[Top] =='+' ||Stack[Top] =='*'||Stack[Top] =='/' ||Stack[Top] =='^' && Stack[Top] !='(') 
					pop(); 
				push(Expr[m]); 
				++m; 
				break; 
	 
			case '/' : 
			case '*' :	 
			while(Stack[Top] =='*' ||Stack[Top] =='/' ||Stack[Top] =='^' && Stack[Top] !='(') 
					pop(); 
				push(Expr[m]); 
				++m; 
				break; 
			case '^': 
				push(Expr[m]); 
				++m; 
				break; 
			case '(': 
				push(Expr[m]); 
				++m; 
				break; 
			case ')': 
				while(Stack[Top]!='(') 
					pop(); 
				pop(); 
				++m; 
				break; 
			case '.' : 
				while (Top >= 0) 
					pop(); 
				exit(0); 
			default : 
				if(isalpha(Expr[m])) 
				{ 
					printf("%c",Expr[m]); 
					++m; 
					break; 
				} 
				else 
				{ 
					printf("\n Exception Has Popped Up"); 
					exit(0); 
				}
        }
    }
}