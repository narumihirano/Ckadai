#include <stdio.h>
#include <string.h>
#define  BUFMAX	   256

void moji(char buf[BUFMAX],char password2[BUFMAX]);

void main()
{
	static char password[BUFMAX]="VICTORY"; /* パスワードは VICTORY */
	char password2[BUFMAX];
	char   buf[BUFMAX];						/* 入力エリア buf[256] */
	int    i=0;								/* 変数 */
	
	
	/* 3回比較する */
	for( i = 0 ; i < 3 ; i++ )	
	{
		printf("password nyuryoku =>");		
				
		/* ("入力したい書式", 変数名) */
    	/* scanfはキーボードから入力する時使う */
        scanf("%s",buf);
        
        moji(buf,password2);
				
	    /* 入力したbufとpassword(VICTORY)を比較 */
		if ( strcmp(password2,password) == 0 ) 
		
	     	
		{	
			/* 一致の場合OKを表示 */
			printf("PASSWORD OK\n");
			
		    /* 終了 */
		    return;
        }   
        
        /* 不一致の場合何もしない */ 
		else
		{
		}
	}
	
			
	/* 3回目も不一致の場合NGを表示 */
	if ( strcmp(buf,password) == 0 ) 
	
	{
	}
		else
		{
			printf("PASSWORD NG\n"); 
	    }
	 
}

/* 小文字を大文字に変換する関数 */
void moji(char buf[BUFMAX],char password2[BUFMAX])
{
	int i;  /* 変数 */
	
	/* 256全てみる */
	for( i=0 ; i<BUFMAX ; i++)  
	{
		
		/* iが97(a)～122(z)の小文字のとき */
		if( (97 < buf[i]) && ( 122 > buf[i] ) )
		{
			/* 小文字から大文字の変換 */
			/* 大文字A(65)を起点とするオフセット計算 */
			password2[i] = 'A' + ( buf[i] - 'a' ); 
		}
		
		else
		{ 
			/* 大文字はそのまま格納 */
			password2[i] = buf[i];
			
		}
	}

}
	