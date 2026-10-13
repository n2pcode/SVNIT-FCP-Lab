#include<stdio.h>
int main(){

	int n,x,max1,max2=0,hassecond=0;
	printf("How many numbers?: ");
	scanf("%d",&n);

	printf("Enter number 1: ");
	scanf("%d",&max1);

	for(int i=2;i<=n;i++){
		printf("Enter number %d: ",i);
		scanf("%d",&x);

		if(x>max1){
			max2=max1;
			max1=x;
			hassecond=1;
		}
		else if((x<max1)&&((x>max2)||(!hassecond))){
			max2=x;
			hassecond=1;
		}
	}
	
	printf("Max=%d\n",max1);
	if(hassecond){
        	printf("Second max = %d\n",max2);
        }
   	else{
        	printf("No second max (all numbers are equal)\n");
        }

    return 0;
}