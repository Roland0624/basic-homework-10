#include<stdio.h>    //�ɤJ���Y�� 
#include<stdlib.h>


int main(void)	
{
	char number[100]; 				   				 //�إ�char�}�C 
	int x=0;         									//�إ�int�ܼ�=0
	char option;
	while(true)
	{
			
		printf("��J�r��\n");
		scanf("%s",&number);  						//keyin�r�� 
		while(x<100&&number[x]>=65)               //�j�p�g�ഫ
		
		{              
			if(number[x]>=65&&number[x]<=90) 
			     //A-Z
			{  
				number[x]+=32;
				printf("%c",number[x]);
			}
			
			else if(number[x]>=97&&number[x]<=122)
			{  //a-z
				number[x]-=32;
				printf("%c",number[x]);
			}
			
			x++;
		}
		
		printf("\n");
		x=0;
		
	} 
	
	
} 
