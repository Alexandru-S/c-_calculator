#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
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
		printf("allowed format a [sign] b\n");
		printf("********************\n");
		printf("please input the numbers you want to add\n");
		std::cin>>a>>sign>> b;
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
			//printf("Result:%f \n",result);
		}

    return 0;
}
