//********************************************************************************//
//*�ۑ薼�@�@�F�@�v���O�����ۑ�@No.13   �@�@                      �@�@�@ �@ �@�@*//
//*�ۑ���e�@�F�@����10�i����16�i��������ɕϊ�����֐����쐬���������\������@*//
//*��Җ��@�@�F�@���쐬��                                       �@�@�@       �@�@*//
//*�ŏI�X�V���F�@2017�N5��17��      											 *//
//*																				 *//
//*�o�͌��ʁ@�Fatai wo nyuryoku =>2000											 *//
//*�@�@�@�@�@�@atai 2000													   	 *//
//*�@�@�@�@�@�@16sinsu=7D0														 *//
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
	printf( "16sinsu=%s\n", buf );

}

/* 10�i����16�i���ɕϊ�����֐� */
void itohex( int sinsu , char *iremono) /* work == sinsu , buf == *iremono */
{
	int syo=0;           /* �� */
	int i=0;			 /* �ϐ� */
	int j=1;		   	 /* �ϐ�iremono */
	char henkan;		 /* char�^�ϐ� */
	int amari[MAX];	   	 /* �]������Ƃ��z�� */




	/* ���͒l���͈͓��̏ꍇ */
	if( sinsu <= 32767 )
	{

		/* ���͒l��16�ȏ�̏ꍇ */
		if( sinsu >= 16 )
		{
			/* syo��sinsu������ */
			syo = sinsu;
			
			printf("atai %d\n",syo);
			
			
			/* syo��16��菬�����Ȃ�܂ŌJ��Ԃ� */
			for( i = 1 ; syo >= 16 ; i++ )
			{
				/* ����16�̗]���amari�z��ɓ���� */
				amari[i] = ( syo %16 );
				
				/* ����16�̏���syo�ɓ���� */
				syo = (syo / 16);
				
				
			}
			
			
			
			/* ����16��菬�����Ȃ����� */
			/* henkan�ɁA�Ή��̕��������� */
			
			if( syo == 0)
			{
				henkan = '0' ;
			}
			
			if( syo == 1)
			{
				henkan = '1' ;
			}
				
			if( syo == 2)
			{
				henkan = '2' ;
			}
			
			if( syo == 3)
			{
				henkan = '3' ;
			}
				
			if( syo == 4)
			{
				henkan = '4' ;
			}
			
			if( syo == 5)
			{
				henkan = '5' ;
			}
			
			if( syo == 6)
			{
				henkan = '6' ;
			}
			
			if( syo == 7)
			{
				henkan = '7' ;
			}
			
			if( syo == 8)
			{
				henkan = '8' ;
			}
			
			if( syo == 9)
			{
				henkan = '9' ;
			}
			if( syo == 10)
			{
				henkan = 'A' ;
			}
				
			if( syo == 11)
			{
				henkan = 'B' ;
			}
				
			if( syo == 12)
			{
				henkan = 'C' ;
			}
				
			if( syo == 13)
			{
				henkan = 'D' ;
			}
				
			if( syo == 14)
			{
				henkan = 'E' ;
			}
				
			if( syo == 15)
			{
				henkan = 'F' ;
			}
			
			
			/* henkan���|�C���^���w���A�h���Xbuf[0]�A�h���X�֓���� */
			*iremono = henkan;
			
			/* amari�����炷 */
			amari[i--];
			
			/* �]��������ɕϊ��Bi��0�ɂȂ�܂ŌJ��Ԃ� */
			while( i != 0 )
			{
				
				if( amari[i] == 0)
				{
					henkan = '0' ;
				}
				
				if( amari[i] == 1)
				{
					henkan = '1' ;
				}
					
				if( amari[i] == 2)
				{
					henkan = '2' ;
				}
				
				if( amari[i] == 3)
				{
					henkan = '3' ;
				}
					
				if( amari[i] == 4)
				{
					henkan = '4' ;
				}
					
				if( amari[i] == 5)
				{
					henkan = '5' ;
				}
					
				if( amari[i] == 6)
				{
					henkan = '6' ;
				}
				
				if( amari[i] == 7)
				{
					henkan = '7' ;
				}
					
				if( amari[i] == 8)
				{
					henkan = '8' ;
				}
				
				if( amari[i] == 9)
				{
					henkan = '9' ;
				}
					
					
				if( amari[i] == 10)
				{
					henkan = 'A' ;
				}
						
				if( amari[i] == 11)
				{
					henkan = 'B' ;
				}
				
				if( amari[i] == 12)
				{
					henkan = 'C' ;
				}
						
				if( amari[i] == 13)
				{
					henkan = 'D' ;
				}
				
				if( amari[i] == 14)
				{
					henkan = 'E' ;
				}
						
				if( amari[i] == 15)
				{
					henkan = 'F' ;
				}
					
					
				/* iremono�|�C���^���w���A�h���X��henkan������� */
				*(iremono+j) = henkan;
				
				
				
				
				/* amari������炷 */
				i--;
				
				/* iremono���w���Ƃ�(buf�̃A�h���X�j��ׂɈړ� */
				j++;
				
				/* �J�Ԃ������ */	
			}
			
			
			/* buf�z��̍Ō�Ɂ�0������ */
			*(iremono+j) ='\0';
		
			
		} /* 16�ȏ�̏ꍇ ����� */
		
		
		
		/* ���͒l��16��艺�̏ꍇ */
		else
		{
			if( sinsu == 0)
			{
				henkan = '0' ;
			}
			
			if( sinsu == 1)
			{
				henkan = '1' ;
			}
				
			if( sinsu == 2)
			{
				henkan = '2' ;
			}
				
			if( sinsu == 3)
			{
				henkan = '3' ;
			}
				
			if( sinsu == 4)
			{
				henkan = '4' ;
			}
				
			if( sinsu == 5)
			{
				henkan = '5' ;
			}
				
			if( sinsu == 6)
			{
				henkan = '6' ;
			}
			if( sinsu == 7)
			{
				henkan = '7' ;
			}
				
			if( sinsu == 8)
			{
				henkan = '8' ;
			}
				
			if( sinsu == 9)
			{
				henkan = '9' ;
			}
				
			if( sinsu == 10)
			{
				henkan = 'A' ;
			}
				
			if( sinsu == 11)
			{
				henkan = 'B' ;
			}
				
			if( sinsu == 12)
			{
				henkan = 'C' ;
			}
				
			if( sinsu == 13)
			{
				henkan = 'D' ;
			}
				
			if( sinsu == 14)
			{
				henkan = 'E' ;
			}
				
			if( sinsu == 15)
			{
				henkan = 'F' ;
			}
			
			/* iremono�|�C���^���w���A�h���X��henkan������� */
			*iremono = henkan;
			
			
			/* buf�z��̍Ō�Ɂ�0������ */
			*(iremono+1) ='\0';
			
		}  /* 16�ȉ��̏ꍇ�@����� */	
		
	} /* �͈͓��̏ꍇ�@����� */	
	
	
	
	/* ���͔͈͊O */
	else
	{
	}
	
} 
	 
	 