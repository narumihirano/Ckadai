#include <stdio.h>
#include <string.h>
#define  BUFMAX	   256

void moji(char buf[BUFMAX],char password2[BUFMAX]);

void main()
{
	static char password[BUFMAX]="VICTORY"; /* �p�X���[�h�� VICTORY */
	char password2[BUFMAX];
	char   buf[BUFMAX];						/* ���̓G���A buf[256] */
	int    i=0;								/* �ϐ� */
	
	
	/* 3���r���� */
	for( i = 0 ; i < 3 ; i++ )	
	{
		printf("password nyuryoku =>");		
				
		/* ("���͂���������", �ϐ���) */
    	/* scanf�̓L�[�{�[�h������͂��鎞�g�� */
        scanf("%s",buf);
        
        moji(buf,password2);
				
	    /* ���͂���buf��password(VICTORY)���r */
		if ( strcmp(password2,password) == 0 ) 
		
	     	
		{	
			/* ��v�̏ꍇOK��\�� */
			printf("PASSWORD OK\n");
			
		    /* �I�� */
		    return;
        }   
        
        /* �s��v�̏ꍇ�������Ȃ� */ 
		else
		{
		}
	}
	
			
	/* 3��ڂ��s��v�̏ꍇNG��\�� */
	if ( strcmp(buf,password) == 0 ) 
	
	{
	}
		else
		{
			printf("PASSWORD NG\n"); 
	    }
	 
}

/* ��������啶���ɕϊ�����֐� */
void moji(char buf[BUFMAX],char password2[BUFMAX])
{
	int i;  /* �ϐ� */
	
	/* 256�S�Ă݂� */
	for( i=0 ; i<BUFMAX ; i++)  
	{
		
		/* i��97(a)�`122(z)�̏������̂Ƃ� */
		if( (97 < buf[i]) && ( 122 > buf[i] ) )
		{
			/* ����������啶���̕ϊ� */
			/* �啶��A(65)���N�_�Ƃ���I�t�Z�b�g�v�Z */
			password2[i] = 'A' + ( buf[i] - 'a' ); 
		}
		
		else
		{ 
			/* �啶���͂��̂܂܊i�[ */
			password2[i] = buf[i];
			
		}
	}

}
	