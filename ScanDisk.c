#include<stdio.h>
int main(){
	int i,j,sum=0,n;
	int d[20];
	int disk;
	int dloc;
	int temp,max;
	printf("Enter the number of location: ");
	scanf("%d",&n);
	printf("Enter the position of head: ");
	scanf("%d",&disk);
	printf("Enter the elements of disk queue: ");
	for(i=0;i<n;i++){
		scanf("%d",&d[i]);
	}
	d[n]=disk;
	n=n+1;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(d[i]>d[j]){
				temp=d[i];
				d[i]=d[j];
				d[j]=temp;
			}
		}
	}
	max=d[n-1];
	for(i=0;i<n;i++){
		if(disk==d[i]){
			dloc=i;
			break;
		}
	}
	for(i=dloc;i>=0;i--){
		printf("%d-->",d[i]);
	}
	printf("0-->");
	for(i=dloc+1;i<n;i++){
		printf("%d-->",d[i]);
	}
	sum=disk+max;
	printf("\nMovement of total cylinders %d\n",sum);
	return 0;
}
