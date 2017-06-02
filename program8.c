#include <stdio.h>


void main()
{
		int	i,j;
		int kuku[9][9];


//‹ã‹ã‚ÌŒvŽZ‚ðkuku‚É“ü‚ê‚é
	
	for(i=0; i<9 ; i++ ){
		
		for(j=0; j<9 ; j++){
			 kuku[9][9]=(i+1)*(j+1);
			 printf(" %2d",kuku[9][9]); 
			 //"_%2d" = "%3d"
		}
        //2‚Â–Ú‚Ìfor‚ªI‚í‚Á‚½‚ç‰üs
		printf("\n");
    }
		//1‚Â–Ú‚Ìfor‚É–ß‚é
}
