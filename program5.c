#include <stdio.h>
#define MAX 50

void main(void){
		
	static char a[MAX]="A_BC___D_E__FG__";
	       char b[MAX];
	int i,k;
    int space='_';

i=0;
k=0;

	for(i=0;i<MAX;i++){
	   if(a[i]==space){
}      else{b[k]=a[i];
	k++;
	}

}

printf("%s\n",b);


}