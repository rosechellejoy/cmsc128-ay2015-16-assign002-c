#include<stdio.h>
#include<string.h>

int getHammingDistance(char str1[50], char str2[50]){
	int len1, len2, dist, i;

	
	if(strlen(str1)!=strlen(str2)){
		printf("Error! Strings are not equal\n");
		return -1;
	}
	else if(strlen(str1)==0 || strlen(str2)==0){
		printf("Error! Empty string(s)\n");
		return -1;
	}
	for(i=0; i<strlen(str1); i++){
		if(str1[i]!=str2[i]) dist+=1;
	}

	return dist;

}

int main(){
	int ch, res;
	char str1[50], str2[50];
	printf("------Menu------\n");
	printf("[1] getHammingDistance\n");
	printf("[2] countSubstrPattern\n");
	printf("[3] isValidString\n");
	printf("[4] getSkew\n");
	printf("[5] getMaxSkewN\n");
	printf("[6] getMinSkewN\n");
	printf("[0] Exit\n");
	printf("Choice: ");
	scanf("%d", &ch);

	switch(ch){
		case 1:	printf("str1: ");	
				scanf( "%s",str1);
				printf("str2: ");	
				scanf( "%s",str2);
				res=getHammingDistance(str1, str2);
				if(res>0) printf("%d", res);
				break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7: printf("Bye!\n");
				break;
	}
}