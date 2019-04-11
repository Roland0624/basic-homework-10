#include<stdio.h>    //導入標頭檔 
#include<stdlib.h>


int main(void)	
{
	char number[100]; 				   				 //建立char陣列 
	int x=0;         									//建立int變數=0
	char option;
	while(true)
	{
			
		printf("輸入字串\n");
		scanf("%s",&number);  						//keyin字串 
		while(x<100&&number[x]>=65)               //大小寫轉換
		
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
