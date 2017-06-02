//********************************************************************************//
//*課題名　　：　　　　プログラム課題　No.12   　　                       　 　　*//
//*課題内容　：　　　　入力した値がdata[MAX]内にあるかを2分検索を使い結果を出力　*//
//*作者名　　：　　　　平野成実                                              　　*//
//*最終更新日：　　　　2017年4月27日                                         　　*//
//********************************************************************************//



#include <stdio.h>
#define MAX  10

void main(void)
{
	static int data[MAX]={5,10,15,20,25,30,35,40,45,50};
	int  work;					/* 入力値 */
	int  high,low,mid; 			
	
	high = MAX;					/* 最大,data[MAX]=50 */
	low  = 0;                   /* 最小,data[0]=5 */
	mid  = (low + high)/2 ;		/* 中間 */


	/* 表示 */
	printf("data nyuryoku =>");

	/* データの入力 */
	scanf("%d",&work);	
	
	
	/* 最低が最大より小さい場合　繰り返す */
	while( low <= high )
	{
		
		
		/* 中間を決める　　中間 = (最小+最大)/2 */
		mid  = (low + high)/2 ;
	
	
		/* work(入力値)と中間が等しいとき */
		if( work == data[mid] )
		{	
			/* 中間目を表示して終了 */
			printf("%2d banme \n", mid+1);
			return;
		}	
			else
			{
			}
			
			
		
		/* 入力値が中間より大きい場合 */
		if( work > data[mid] ) 
		{
			/* 検索範囲の最低を中間より上にする */
			low = ( mid+1 ) ;
		} 
			else
			{
			}
	
		
			
		/* 入力値が中間より小さい場合 */
	    if( work < data[mid] )
		{
			
			/* 検索範囲の最高を中間より下にする */
			high = ( mid-1 );
		}
			else
			{
			}	
		
	}
	/* 繰返し終了 */
	
	
	
	/* data配列内に入力値がなかったら */
	if( work != data[MAX] )
	{
		/* NO DATA を表示して終了 */
		printf(" NO DATA \n");
	}

}