/*Program:Write a C program to show the solution of Tower of Hanoi problem using recursive method.
 Author: AYUSH RAJ SEDHAI
 Date: 23/07/2016
 Reference: Data Structures. Using C and C++, Chap 3, #page 145-146.*/

#include<stdio.h>
#include<conio.h>
void towers(int, char, char, char);
sss
int main()
{
	int n;
	scanf("%d",&n);
	towers(n,'A','B','C');
}
void towers(int n,char frompeg, char topeg, char auxpeg)
{
	if (n == 1){
		printf("\n%s%c%s%c", "move disk 1 from peg",frompeg,"to peg",topeg);
		return;
		}
	towers(n-1, frompeg, auxpeg, topeg);
	printf("\n%s%d%s%c%s%c", "move disk",n,"from peg",frompeg,"to peg",topeg);
	towers(n-1, auxpeg,topeg,frompeg);	
	}

