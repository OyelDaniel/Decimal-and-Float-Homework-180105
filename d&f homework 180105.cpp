#include<stdio.h>
int main()
{
	float tinggiPelajar;
	float pointerExamPelajar;
	int umurPelajar;
	int bilanganAdikBeradikPelajar;
	
	printf("\nmasukkan maklumat ketinggian pelajar: ");
	scanf("%f",&tinggiPelajar);
	printf("tinggi pelajar ialah %.2f",tinggiPelajar);
	
	printf("\n\nmasukkan maklumat pointer exam pelajar: ");
	scanf("%f",&pointerExamPelajar);
	printf("pointer exam pelajar ialah %.2f",pointerExamPelajar);
	
	printf("\n\nmasukkan maklumat umur pelajar: ");
	scanf("%d",&umurPelajar);
	printf("umur pelajar ialah %d",umurPelajar);
	
	printf("\n\nmasukkan maklumat bilangan adik beradik pelajar: ");
	scanf("%d",&bilanganAdikBeradikPelajar);
	printf("bilangan adik beradik pelajar ialah %d",bilanganAdikBeradikPelajar);
	return 0;	
}
