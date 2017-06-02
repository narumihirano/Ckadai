/************************************************/
/*プログラム名：program10（ソート隣接交換法）   */
/*作者名　　　：平野成実　　　　　　　　　　　　*/
/*作成日付　　：2017年4月19日 （最終更新日）　　*/
/************************************************/


#include <stdio.h>
#define N   5


/*int sort(int data[])*/

void main()
{ 
	int i,j;
	int data[N]={9,21,119,45,3};
	int a;



	printf("sortmae=%d\n",data[0]);
	printf("sortmae=%d\n",data[1]);
	printf("sortmae=%d\n",data[2]);
	printf("sortmae=%d\n",data[3]);
	printf("sortmae=%d\n",data[4]);
	
	
	for( j = 0 ; j <5 ; j++)     /*昇順の並び替え*/
	{
		for( i = 0 ; i < 5 ; i++ )
		{	
			if( data[i] < ( data[i+1]) )
			{
			}
			else{         
					a = data[i] ; 
			  data[i] = data[i+1] ;
			data[i+1] = a ; 

		    	}
		}
	}
	
	printf("\n");
	printf("syoujun\n");
	printf("data[0]=%d\n",data[0]);
	printf("data[1]=%d\n",data[1]);
	printf("data[2]=%d\n",data[2]);
	printf("data[3]=%d\n",data[3]);
	printf("data[4]=%d\n",data[4]);



	for( j = 0 ; j <5 ; j++)    /*降順の並び替え*/
	{
		for( i = 0 ; i < 5 ; i++ )
		{	
			if( data[i] > ( data[i+1]) )
			{
			}
			else{        
			    	a = data[i] ; 
		      data[i] = data[i+1] ;
   		    data[i+1] = a ; 

		    	}
		}
	}
	
	printf("\n");
	printf("koujun\n");
	printf("data[0]=%d\n",data[0]);
	printf("data[1]=%d\n",data[1]);
	printf("data[2]=%d\n",data[2]);
	printf("data[3]=%d\n",data[3]);
	printf("data[4]=%d\n",data[4]);
}

