//********************************************************************************//
//*課題名　　：　プログラム課題　No.13   　　                      　　　 　 　　*//
//*課題内容　：　入力10進数を16進数文字列に変換する関数を作成し文字列を表示する　*//
//*作者名　　：　平野成実                                       　　　       　　*//
//*最終更新日：　2017年5月17日      											 *//
//*																				 *//
//*出力結果　：atai wo nyuryoku =>2000											 *//
//*　　　　　　atai 2000													   	 *//
//*　　　　　　16sinsu=7D0														 *//
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
	printf( "16sinsu=%s\n", buf );

}

/* 10進数を16進数に変換する関数 */
void itohex( int sinsu , char *iremono) /* work == sinsu , buf == *iremono */
{
	int syo=0;           /* 商 */
	int i=0;			 /* 変数 */
	int j=1;		   	 /* 変数iremono */
	char henkan;		 /* char型変数 */
	int amari[MAX];	   	 /* 余りを入れとく配列 */




	/* 入力値が範囲内の場合 */
	if( sinsu <= 32767 )
	{

		/* 入力値が16以上の場合 */
		if( sinsu >= 16 )
		{
			/* syoにsinsuを入れる */
			syo = sinsu;
			
			printf("atai %d\n",syo);
			
			
			/* syoが16より小さくなるまで繰り返す */
			for( i = 1 ; syo >= 16 ; i++ )
			{
				/* 商÷16の余りをamari配列に入れる */
				amari[i] = ( syo %16 );
				
				/* 商÷16の商をsyoに入れる */
				syo = (syo / 16);
				
				
			}
			
			
			
			/* 商が16より小さくなったら */
			/* henkanに、対応の文字を入れる */
			
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
			
			
			/* henkanをポインタが指すアドレスbuf[0]アドレスへ入れる */
			*iremono = henkan;
			
			/* amariをずらす */
			amari[i--];
			
			/* 余りも文字に変換。iが0になるまで繰り返す */
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
					
					
				/* iremonoポインタが指すアドレスにhenkanをいれる */
				*(iremono+j) = henkan;
				
				
				
				
				/* amariを一つずらす */
				i--;
				
				/* iremonoが指すとこ(bufのアドレス）を隣に移動 */
				j++;
				
				/* 繰返しおわり */	
			}
			
			
			/* buf配列の最後に￥0を入れる */
			*(iremono+j) ='\0';
		
			
		} /* 16以上の場合 おわり */
		
		
		
		/* 入力値が16より下の場合 */
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
			
			/* iremonoポインタが指すアドレスにhenkanをいれる */
			*iremono = henkan;
			
			
			/* buf配列の最後に￥0を入れる */
			*(iremono+1) ='\0';
			
		}  /* 16以下の場合　おわり */	
		
	} /* 範囲内の場合　おわり */	
	
	
	
	/* 入力範囲外 */
	else
	{
	}
	
} 
	 
	 