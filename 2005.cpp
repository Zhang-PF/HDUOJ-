//计算今天是今年第几天

#include <stdio.h>
void main()
{
	int a,b,c;
	while(scanf("%d/%d/%d",&a,&b,&c)!=EOF)
	{
		if((a%4==0 && a%100!=0) || (a%400==0))
			{

				switch(b)
			{
				case 1:printf("%d\n",c);
				break;
				case 2:printf("%d\n",c+31);
				break;
				case 3:printf("%d\n",c+31+29);
				break;
				case 4:printf("%d\n",c+31+29+31);
				break;
				case 5:printf("%d\n",c+31+29+31+30);
				break;
				case 6:printf("%d\n",c+31+29+31+30+31);
				break;
				case 7:printf("%d\n",c+31+29+31+30+31+30);
				break;
				case 8:printf("%d\n",c+31+29+31+30+31+30+31);
				break;
				case 9:printf("%d\n",c+31+29+31+30+31+30+31+31);
				break;
				case 10:printf("%d\n",c+31+29+31+30+31+30+31+31+30);
				break;
				case 11:printf("%d\n",c+31+29+31+30+31+30+31+31+30+31);
				break;
				case 12:printf("%d\n",c+31+29+31+30+31+30+31+31+30+31+30);
				break;
			}
		}
		else
		{	
			switch(b)
			{
				case 1:printf("%d\n",c);
				break;
				case 2:printf("%d\n",c+31);
				break;
				case 3:printf("%d\n",c+31+28);
				break;
				case 4:printf("%d\n",c+31+28+31);
				break;
				case 5:printf("%d\n",c+31+28+31+30);
				break;
				case 6:printf("%d\n",c+31+28+31+30+31);
				break;
				case 7:printf("%d\n",c+31+28+31+30+31+30);
				break;
				case 8:printf("%d\n",c+31+28+31+30+31+30+31);
				break;
				case 9:printf("%d\n",c+31+28+31+30+31+30+31+31);
				break;
				case 10:printf("%d\n",c+31+28+31+30+31+30+31+31+30);
				break;
				case 11:printf("%d\n",c+31+28+31+30+31+30+31+31+30+31);
				break;
				case 12:printf("%d\n",c+31+28+31+30+31+30+31+31+30+31+30);
				break;
			}
		}
	

	}
}
