#include <stdio.h> 
#include <stdlib.h>
main(void)
{
	int hour1,min1,sec1,hour2,min2,sec2,dif;
	printf("��1:");
	scanf("%d",&hour1);
	printf("��1:");
	scanf("%d",&min1);
	printf("��1:");
	scanf("%d",&sec1);
	printf("��2:");
	scanf("%d",&hour2);
	printf("��2:");
	scanf("%d",&min2);
	printf("��2:");
	scanf("%d",&sec2);
	dif=(hour1*3600+min1*60+sec1)-(hour2*3600+min2*60+sec2);
	printf("%d",dif);
	system("pause");
	return 0;
}
