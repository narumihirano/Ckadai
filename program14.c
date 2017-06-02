//********************************************************************************//
//*課題名　　：　プログラム課題　No.14   　　                      　　　 　 　　*//
//*課題内容　：　入力10進数を10進文字列に変換する関数を作成し文字列を表示する　　*//
//*作者名　　：　平野成実                                       　　　       　　*//
//*最終更新日：　2017年5月18日      											 *//
//*																				 *//
//*																				 *//
//********************************************************************************//



#include <stdio.h>
#define  MAX  256

/*　関数のプロトタイプ宣言　*/
void itohex( int , char*);

void main(void)
{
	int work;           /* int型の入力値 */
	char buf[MAX];      /* 文字列変換ワーク　buf */


	printf("atai wo nyuryoku =>");

	/* データの入力 */
	scanf("%d", &work);

	/* 16進文字列変換 関数の引数 */
	itohex( work ,buf);

	/* 文字列の表示 */
	printf( "10mojiretu= %s", buf );

}


//************************************************************************************//
//************************************************************************************//

/* 10進数を16進数に変換する関数 */
void itohex( int sinsu , char *iremono) /* work == sinsu , buf == *iremono */
{
	int syo=0;           /* 商   */
	int i=0;			 /* 変数 */
	int j=0;		   	 /* 変数 */
	int hako[MAX];	   	 /* 余りを入れとく配列 */
	int kotae;			 /* 変数 */

//************************************************************************************//

	/* 入力値が範囲内の正数の場合 */
	if( sinsu <= 32767 )
	{
			/* 10000～32767 */
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
			
			
			/* 1000～9999 */
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
			
			
			
			/* 100～999 */
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
			
			
			
			/* 10～99 */
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
			
			
		
			/* 0～9 */
			if( sinsu >= 0 && sinsu <= 9 )
			{
				kotae = sinsu;
				hako[i] = (kotae+48);
				i++;
			}
			
			else
			{
			}
					
			
			/* iremonoポインタが指すアドレスにhakoをいれる */
			for( j=0 ; j < i ; j++)
			{
			
			*(iremono+j) = hako[j];
			
			}
			
		/* buf配列の最後に￥0を入れる */
			*(iremono+j) = '\0';
					
	} /* 正数の場合　おわり */	
	
//************************************************************************************//	
	/* 正数だが32767以上の場合　範囲外 */
	else if( sinsu >= 32767 )
	{
			*(iremono) = 78;
			*(iremono+1) = 79;
	}
	
//************************************************************************************//	
	/* 入力範囲　負の数 */
	if( sinsu <= -1 && sinsu >= -32768 )
	{
			sinsu = sinsu*(-1);
			printf("%d\n",sinsu);
			
			/* 10000～32767 */
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
			
			
			/* 1000～9999 */
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
			
			
			
			/* 100～999 */
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
			
			
			
			/* 10～99 */
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
			
			
		
			/* 1～9 */
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
					
			
			/* iremonoポインタが指すアドレスにhakoをいれる */
			for( j=0 ; j < i ; j++)
			{
			
			*(iremono+j) = hako[j];
			
			}
			
		/* buf配列の最後に￥0を入れる */
			*(iremono+j) = '\0';
	}
	/* 関数終了 */
} 
	 
	 