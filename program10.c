/************************************************/
/*�v���O�������Fprogram10�i�\�[�g�אڌ����@�j   */
/*��Җ��@�@�@�F���쐬���@�@�@�@�@�@�@�@�@�@�@�@*/
/*�쐬���t�@�@�F2017�N4��19�� �i�ŏI�X�V���j�@�@*/
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
	
	
	for( j = 0 ; j <5 ; j++)     /*�����̕��ёւ�*/
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



	for( j = 0 ; j <5 ; j++)    /*�~���̕��ёւ�*/
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

