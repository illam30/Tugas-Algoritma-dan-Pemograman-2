//line

#include <stdio.h>	/*line 1*/
/*line 2*/
int main(){	/*line 3*/
/*line 4*/
	printf("Welcome \n");	/*line 5*/
	//print current line	/*line 6*/
	printf("Line: %d\n",__LINE__);	/*line 7*/
	//ubah nomor line ke 23	/*line 8*/
	#line 23
	//print line baru	/*line 23*/
	printf("Line : %d\n",__LINE__);	/*line 24*/
	printf("Thank You !\n");	/*line 25*/
}

