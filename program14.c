//********************************************************************************//
//*�ۑ薼�@�@�F�@�v���O�����ۑ�@No.14   �@�@                      �@�@�@ �@ �@�@*//
//*�ۑ���e�@�F�@����10�i����10�i������ɕϊ�����֐����쐬���������\������@�@*//
//*��Җ��@�@�F�@���쐬��                                       �@�@�@       �@�@*//
//*�ŏI�X�V���F�@2017�N5��18��      											 *//
//*																				 *//
//*																				 *//
//********************************************************************************//



#include <stdio.h>
#define  MAX  256

/*�@�֐��̃v���g�^�C�v�錾�@*/
void itohex( int , char*);

void main(void)
{
	int work;           /* int�^�̓��͒l */
	char buf[MAX];      /* ������ϊ����[�N�@buf */


	printf("atai wo nyuryoku =>");

	/* �f�[�^�̓��� */
	scanf("%d", &work);

	/* 16�i������ϊ� �֐��̈��� */
	itohex( work ,buf);

	/* ������̕\�� */
	printf( "10mojiretu= %s", buf );

}


//************************************************************************************//
//************************************************************************************//

/* 10�i����16�i���ɕϊ�����֐� */
void itohex( int sinsu , char *iremono) /* work == sinsu , buf == *iremono */
{
	int syo=0;           /* ��   */
	int i=0;			 /* �ϐ� */
	int j=0;		   	 /* �ϐ� */
	int hako[MAX];	   	 /* �]������Ƃ��z�� */
	int kotae;			 /* �ϐ� */

//************************************************************************************//

	/* ���͒l���͈͓��̐����̏ꍇ */
	if( sinsu <= 32767 )
	{
			/* 10000�`32767 */
			if( sinsu >= 10000 )
			{
				kotae = sinsu;
				
				syo = kotae / 10000;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *10000 );
				i++;
				
				syo = kotae / 1000;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *1000 );
				i++;
				
				syo = kotae / 100;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *100 );
				i++;
				
				syo = kotae / 10;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *10 );
				i++;
				
				hako[i] = (kotae+48);
				i++;
				
			}
			else
			{
			}
			
			
			/* 1000�`9999 */
			if( sinsu >= 1000 && sinsu <= 9999 )
			{
				
				kotae = sinsu;
				syo = kotae / 1000;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *1000 );
				i++;
				
				syo = kotae / 100;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *100 );
				i++;
				
				syo = kotae / 10;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *10 );
				i++;
				
				hako[i] = (kotae+48);
				i++;
				
			}
			else
			{
			}
			
			
			
			/* 100�`999 */
			if( sinsu >= 100 && sinsu <= 999 )
			{
				kotae = sinsu;
				syo = kotae / 100;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *100 );
				i++;
				
				syo = kotae / 10;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *10 );
				i++;
				
				hako[i] = (kotae+48);
				i++;
			
			}
			else
			{
			}
			
			
			
			/* 10�`99 */
			if( sinsu >= 10 && sinsu <= 99 )
			{	
				kotae = sinsu;
				syo = kotae / 10;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *10 );
				i++;
				
				hako[i] = (kotae+48);
				i++;
			
			}
			else
			{
			}
			
			
		
			/* 0�`9 */
			if( sinsu >= 0 && sinsu <= 9 )
			{
				kotae = sinsu;
				hako[i] = (kotae+48);
				i++;
			}
			
			else
			{
			}
					
			
			/* iremono�|�C���^���w���A�h���X��hako������� */
			for( j=0 ; j < i ; j++)
			{
			
			*(iremono+j) = hako[j];
			
			}
			
		/* buf�z��̍Ō�Ɂ�0������ */
			*(iremono+j) = '\0';
					
	} /* �����̏ꍇ�@����� */	
	
//************************************************************************************//	
	/* ��������32767�ȏ�̏ꍇ�@�͈͊O */
	else if( sinsu >= 32767 )
	{
			*(iremono) = 78;
			*(iremono+1) = 79;
	}
	
//************************************************************************************//	
	/* ���͔͈́@���̐� */
	if( sinsu <= -1 && sinsu >= -32768 )
	{
			sinsu = sinsu*(-1);
			printf("%d\n",sinsu);
			
			/* 10000�`32767 */
			if( sinsu >= 10000 )
			{
				hako[i]=45;
				i++;
				kotae = sinsu;
				
				syo = kotae / 10000;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *10000 );
				i++;
				
				syo = kotae / 1000;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *1000 );
				i++;
				
				syo = kotae / 100;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *100 );
				i++;
				
				syo = kotae / 10;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *10 );
				i++;
				
				hako[i] = (kotae+48);
				i++;
				
			}
			else
			{
			}
			
			
			/* 1000�`9999 */
			if( sinsu >= 1000 && sinsu <= 9999 )
			{
				hako[i]=45;
				i++;
				kotae = sinsu;
				syo = kotae / 1000;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *1000 );
				i++;
				
				syo = kotae / 100;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *100 );
				i++;
				
				syo = kotae / 10;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *10 );
				i++;
				
				hako[i] = (kotae+48);
				i++;
				
			}
			else
			{
			}
			
			
			
			/* 100�`999 */
			if( sinsu >= 100 && sinsu <= 999 )
			{
				hako[i]=45;
				i++;
				kotae = sinsu;
				syo = kotae / 100;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *100 );
				i++;
				
				syo = kotae / 10;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *10 );
				i++;
				
				hako[i] = (kotae+48);
				i++;
			
			}
			else
			{
			}
			
			
			
			/* 10�`99 */
			if( sinsu >= 10 && sinsu <= 99 )
			{	
				hako[i]=45;
				i++;
				kotae = sinsu;
				syo = kotae / 10;
				hako[i] = (syo+48);
				kotae = kotae - ( syo *10 );
				i++;
				
				hako[i] = (kotae+48);
				i++;
			
			}
			else
			{
			}
			
			
		
			/* 1�`9 */
			if( sinsu >= 1 && sinsu <= 9 )
			{
				hako[i]=45;
				i++;
				kotae = sinsu;
				hako[i] = (kotae+48);
				i++;
			}
			
			else
			{
			}
					
			
			/* iremono�|�C���^���w���A�h���X��hako������� */
			for( j=0 ; j < i ; j++)
			{
			
			*(iremono+j) = hako[j];
			
			}
			
		/* buf�z��̍Ō�Ɂ�0������ */
			*(iremono+j) = '\0';
	}
	/* �֐��I�� */
} 
	 
	 