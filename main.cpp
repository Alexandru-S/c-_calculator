#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;
main()
{
		float result=0;
		char sign;
		int a=0;
		int b=0;
		printf("********************\n");
    printf("Alexs c++ Calculator\n");
		printf("********************\n");
		printf("       Menu         \n");
		printf("allowed signs +,-,*,/\n");
		printf("allowed signs c for cos,s for sin\n");
		printf("allowed format a [sign] b\n");
		printf("********************\n");
		printf("please input the numbers you want to add\n");
		std::cin>>a>>sign>> b;
		if(!cin)
		{
		printf("please input something\n");		
		}
		switch(sign)
		{
			case'+':
				result=a+b;
				printf("Result:%f \n",result);
				break;
			case'-':
				result=a-b;
				printf("Result:%f \n",result);
				break;
			case'/':
				result=a/b;
				printf("Result:%f \n",result);
				break;
			case'*':
				result=a-b;
				printf("Result:%f \n",result);
				break;
			case'c':
				result=a*cos(b);
				printf("Result:%f \n",result);
				break;
			case's':
				result=a*sin(b);
				printf("Result:%f \n",result);
				break;
			//printf("Result:%f \n",result);
		}

    return 0;
}
