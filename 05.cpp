#include <stdio.h> 
#include <stdlib.h>
main(void)
{
	int hour1,min1,sec1,hour2,min2,sec2,dif;
	printf("時1:");
	scanf("%d",&hour1);
	printf("分1:");
	scanf("%d",&min1);
	printf("秒1:");
	scanf("%d",&sec1);
	printf("時2:");
	scanf("%d",&hour2);
	printf("分2:");
	scanf("%d",&min2);
	printf("秒2:");
	scanf("%d",&sec2);
	dif=(hour1*3600+min1*60+sec1)-(hour2*3600+min2*60+sec2);
	printf("%d",dif);
	system("pause");
	return 0;
}
