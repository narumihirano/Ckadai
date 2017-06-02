include <stdio.h>
void main(void)
{
	int uriage[12],i,j,k,MaxVal,MinVal,SumVal,AvgVal;


        uriage[0]=7852;
        uriage[1]=4569;
	uriage[2]=1258;
	uriage[3]=9875;
	uriage[4]=258;
	uriage[5]=432;
        uriage[6]=477;
	uriage[7]=58;
	uriage[8]=64;
	uriage[9]=123;
	uriage[10]=120;
	uriage[11]=369;

    MaxVal=0;

	for(i=0 ; i<12; i++){
		if(MaxVal<uriage[i]){
			MaxVal=uriage[i];
			}
	}
	
	MinVal=9999;
	
	for(j=0 ; j<12; j++){
		if(MinVal>uriage[j]){
			MinVal=uriage[j];
			}
	}
    
    SumVal=0;
    
    for(k=0;k<12;k++){
		SumVal+=uriage[k];
	}

	
	AvgVal=SumVal/12;
	
	printf("MAX %d\n",MaxVal);
	printf("MIN %d\n",MinVal);
	printf("AVERAGE %d\n",AvgVal);
}