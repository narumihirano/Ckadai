#include <stdio.h>


void main()
{
		int	i,j;
		int kuku[9][9];


//九九の計算をkukuに入れる
	
	for(i=0; i<9 ; i++ ){
		
		for(j=0; j<9 ; j++){
			 kuku[9][9]=(i+1)*(j+1);
			 printf(" %2d",kuku[9][9]); 
			 //"_%2d" = "%3d"
		}
        //2つ目のforが終わったら改行
		printf("\n");
    }
		//1つ目のforに戻る
}
