//*****************************************************************************************//
//*課題名　　：　プログラム課題　マージ 　　                      　　　 　  　　         *//
//*課題内容　：　2つのファイルを読み込み併せて昇順にしたものを別のファイルに書き込む　　　*//
//*作者名　　：　平野成実                                       　　　       　　         *//
//*最終更新日：　2017年5月30日      											          *//
//*																				          *//
//*																				          *//
//*****************************************************************************************//



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 5

struct FILE_BUF
{
	char num[MAX];    /* 数字 */
	char kind;        /* 種別 */
	char crlf[2];     /* 改行コード */

};

int main(void)
{
	
	struct FILE_BUF data[20],data2; /* 構造体変数宣言 */
	
	int i=0;          /* 変数 */
	int j=0; 
	int k=0; 
	int n=0;
	
	int iremono[256]; /* num数値変換保管 */
	int iremono2;     /* num数値ソート時の一時保管場所 */
	char kind2;       /* kindソートの時の一時保管場所 */
	
	FILE *fileA;      /* FILE型のポインタ */
	FILE *fileB;
	FILE *fileC;
	
	char bufA[256];   /* 配列 testファイルの中身入れる所　*/
	char bufB[256];   
	
	
	
	
	
	
	/* ファイルを開くtest1.dat */
	fileA = fopen("test1.dat","rb");
	
	
	/* ファイル開けない場合 */
	if(   !(fileA = fopen("test1.dat","rb")) )
	{ 
        printf(" ファイルオープンエラー(test1)\n"); 
        return -1; 
    } 
		
	/* ファイルをbufに取り込む */
	fread(&bufA,sizeof(bufA),1,fileA);

	/* ファイルを閉じる */
	fclose(fileA);
	
	
	/* ファイルを開くtest2.dat */
	fileB = fopen("test2.dat","rb");
	
	
	/* ファイル開けない場合 */
	if(   !(fileB = fopen("test2.dat","rb")) )
	{ 
        printf(" ファイルオープンエラー(test2)\n"); 
        return -1; 
    } 
		
	/* ファイルをbufに取り込む */
	fread(&bufB,sizeof(bufB),1,fileB);

	/* ファイルを閉じる */
	fclose(fileB);

	
		
	/* bufAを全てみる　構造体に入れる k=0 n=0 */
	for( i = 0 ; bufA[i] != '\0' ; i++)
	{
		/* スペースだったらnumに入れる */
		if( bufA[i] == ' ')
		{
			data[k].num[n] = bufA[i];
			n++;
		}
		
		/* 数字だったらnumに入れる */
		if( bufA[i] == '1' ||  bufA[i] == '2')
		{
			data[k].num[n] = bufA[i];
			n++;
		}
		
		if( bufA[i] == '3' ||  bufA[i] == '4')
		{
			data[k].num[n] = bufA[i];
			n++;
			
		}
		
		if( bufA[i] == '5' ||  bufA[i] == '6')
		{
			data[k].num[n] = bufA[i];
			n++;
		}
		
		if( bufA[i] == '7' ||  bufA[i] == '8')
		{
			data[k].num[n] = bufA[i];
			n++;
		}
		
		if( bufA[i] == '9' || bufA[i] == '0')
		{
			data[k].num[n] = bufA[i];
			n++;
		}
		
		/* Aだったらkindにいれる */
		if( bufA[i] == 'A')
		{
			data[k].kind = bufA[i];
		}
		
		/* 改行だったらcrlfに入れる */
		if( bufA[i] == '\r')
		{
			data[k].crlf[0] = bufA[i];
		}
		
		if( bufA[i] == '\n')
		{
			data[k].crlf[1] = bufA[i];
			
			/* \nの後は構造体配列を一つずらす */	
			k++;
			n=0;
			
		}

	}
	
	
	/* bufBを全てみる　構造体に入れる k=10 n=0 */
	for( i = 0 ; bufB[i] != '\0' ; i++)
	{
		/* スペースだったらnumに入れる */
		if( bufB[i] == ' ')
		{
			data[k].num[n] = bufB[i];
			n++;
		}
			
		/* 数字だったらnumに入れる */
		if( bufB[i] == '1' ||  bufB[i] == '2')
		{
			data[k].num[n] = bufB[i];
			n++;
		}
		
		if( bufB[i] == '3' ||  bufB[i] == '4')
		{
			data[k].num[n] = bufB[i];
			n++;
			
		}
		
		if( bufB[i] == '5' ||  bufB[i] == '6')
		{
			data[k].num[n] = bufB[i];
			n++;
		}
		
		if( bufB[i] == '7' ||  bufB[i] == '8')
		{
			data[k].num[n] = bufB[i];
			n++;
		}
		
		if( bufB[i] == '9' || bufB[i] == '0')
		{
			data[k].num[n] = bufB[i];
			n++;
		}
		
		/* Bだったらkindにいれる */
		if( bufB[i] == 'B')
		{
			data[k].kind = bufB[i];
		}
		
		/* 改行だったらcrlfに入れる */
		if( bufB[i] == '\r')
		{
			data[k].crlf[0] = bufB[i];
		}
		
		if( bufB[i] == '\n')
		{
			data[k].crlf[1] = bufB[i];
			
			
			/* \nの後は構造体配列を一つずらす */
			k++;
			n=0;
			
		}
	/* 	bufを構造体に格納　完了 */
	}
	
	
	/* 0に戻す */
	k = 0;
	i = 0;
	
	
	/* 文字列を数値変換　iremonoへ */
	for( k = 0 ; k < 19 ; k++)
	{
		int suuti = atoi(data[k].num); 
		iremono[i] = suuti;
		printf("%d\n",iremono[i]);
		i++;
	}
	
	/* 構造体配列最後のnumに\0を詰め込む data[19].num[5]="\0,\0,\0,\0,\0"*/
	memset(data[19].num,'\0',MAX);
	
	/* 構造体配列最後のkindに\0を入れる　*/
	data[19].kind = '\0';
	
	/* 構造体配列最後のcrlfに\0を詰め込む data[19].kind[2]="\0,\0" */
	memset(data[19].crlf,'\0',sizeof(data[19].crlf));
	
	
	/* 昇順の並び替え 17周　1週17回隣接比較 */
	for( j = 0 ;  j < 18  ; j++)
	{
		for( i = 0 ; i < 18 ; i++ )
		{	
			/* 数値を比較 */
			if( iremono[i] < ( iremono[i+1]) )
			{
			}
			else{    
				    /* 数値ソート */
					iremono2 = iremono[i]; 
			  		iremono[i] = iremono[i+1];
					iremono[i+1] = iremono2; 
					
					/* 構造体ソート */
					data2 = data[i];
					data[i] = data[i+1];
					data[i+1] = data2;
					
					
		    	}
		    	
		    	
		    /* 数値が同じだった場合　kindを比較　A先B後 */
		    if( iremono[i] == iremono[i+1] )
		    {
				
				/* 構造体のkindのみソート */
				kind2 = data[i].kind;
				data[i].kind = data[i+1].kind;
				data[i+1].kind = kind2;
			}
		}
	/* 構造体ソート完了 */		
	}

	/* ファイルを開くtest3.dat */
	fileC = fopen("test3.dat","wb");
		
	/* ファイル開けない場合 */
	if(   !(fileC = fopen("test3.dat","wb")) )
	{ 
        printf(" ファイルオープンエラー(test3)\n"); 
        return -1; 
    } 
	
		
	/* 構造体配列dataをファイルに書き込む */
	fwrite(data,sizeof(data),1,fileC);
	

	/* ファイルを閉じる */
	fclose(fileC);
	
	
	
	printf("data\n%s",data);
	
	return 0;
	
}