#inlcude <stdio.h>

int main(void){
	int productcode;
	float orderamount, rate = 0.0;
	printf("enter productcode");
	scanf("%d", &productcode);
	printf("enter orderamout\n");
	scanf("%f", &orderamout);
	if(productcode ==1){
		if(orderamuont>=500){
			rate =0.12;
		else if(orderamount >=300)
		rate =0.5;
		}
		else
		rate =0.02;
	}
	else if(productcode==2){
		if(orderamount  >= 2000)
		rate = 0.10;
		else if (orderamount>=1500)
		rate =0.05;
	}
	orderamount - = orderamount * rate;
	printf("%2f",orderamuont);
	return 0;
	
	
}
