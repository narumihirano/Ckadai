//*************************************************//
//*課題名：　　　　プログラム課題　No.9　　　　　 *//
//*作者名：　　　　平野成実                       *//
//*日付　：　　　　2017年4月18日                  *//                                              
//*************************************************//

#include <stdio.h>
#define MAX 7
void main()
{

	char a[]="VZ@GTRP";
	char i;
	
	for( i =0 ; i < MAX ; i++ )
	{
		
//		printf("a[%d]:<0x%X>\n",i,a[i]);
		
		if( (a[i] & 0X01) !=0 ) 
		{
		   a[i] = a[i] & 0XFE ;
		}
		   else
		   {
			 a[i] = a[i] | 0X01 ;
		   }
//		printf("a[%d]:<0x%X>\n",i,a[i]);
	}
		   
	for( i =0 ; i < MAX ; i++ )
	{
		
//			printf("a[%d]:<0x%X>\n",i,a[i]);
		
		if( (a[i] & 0X04) !=0 )
		{
		   a[i] = a[i] & 0XFB ;
		}
 	    	else
 	        {
			a[i] = a[i] | 0X04 ;
 	        }
 //	    	printf("a[%d]:<0x%X>\n",i,a[i]);
	}
	
	
	for( i = 0 ; i < MAX ; i++ )
	{
		
		if( (a[i] & 0X10) !=0 )
		{
		   a[i] = a[i] & 0XEF ;
		}
 		    else
 		    {
			a[i] = a[i] | 0X10 ;
	        }
//	    	printf("a[%d]:<0x%X>\n",i,a[i]);
	}
		printf("%s\n",a);
	
	
}
		