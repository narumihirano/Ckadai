/*ƒvƒƒOƒ‰ƒ€6*/


#include <stdio.h>
#define MAX 50


char pro5(char x[MAX] ) /*pro5*/
{
		
//	x="A_BC___D_E__FG__";
	       char y[MAX];
	int i,k;
    int space='_';

i=0;
k=0;

	for(i=0;i<MAX;i++){
	   if(x[i]==space){
}      else{y[k]=x[i];
	k++;
	}

}
     
printf("%s\n",y);

}
//   return y;
//}




char main()
{
	
	
	static char a[MAX]="A_BC___D_E__FG__";
	static char b[MAX]="B__B__B_C_D__B";
	static char c[MAX]="I_have_a_pen";
	
	pro5(a);
	pro5(b);
	pro5(c);
	
}
	
