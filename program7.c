#include <stdio h>

char main(){
char pro5(char x[] ) /*pro5*/
{
		
             //  char x[];
	       char y[];
	       
	       char *x;
               char *y;

                x=&x;   //xポインターはx[]を指す
                x=&y;

	      int i,k;
              int space='_';

                i=0;
                k=0;

	   for(i=0;i<MAX;i++){
	   if(x[i]==space){
}         else{y[k]=x[i];
	         k++;
	}
             return y;
}
     
printf("%s\n",y);

}

char main()
{
	char z[];
	
	static char a[MAX]="A_BC___D_E__FG__";
	static char b[MAX]="B__B__B_C_D__B";
	static char c[MAX]="I_have_a_pen";
	
 	 z= pro5(a);
         printf("%s\n",z);
	pro5(b);
	pro5(c);
	
}
	