//*************************************************//
//*�ۑ薼�F�@�@�@�@�v���O�����ۑ�@No.9�@�@�@�@�@ *//
//*��Җ��F�@�@�@�@���쐬��                       *//
//*���t�@�F�@�@�@�@2017�N4��18��                  *//                                              
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
		