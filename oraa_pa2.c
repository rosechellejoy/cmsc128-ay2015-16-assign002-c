#include<stdio.h>
#include<string.h>

int getHammingDistance(char str1[50], char str2[50]){
	int dist, i;

	
	if(strlen(str1)!=strlen(str2)){
		printf("Error! Strings are not equal\n");
		return -1;
	}
	else if(strlen(str1)==0 || strlen(str2)==0){
		printf("Error! Empty string(s)\n");
		return -1;
	}

	for(i=0; i<strlen(str1); i++) 
		if(str1[i]!=str2[i]) dist+=1;

	return dist;

}

int countSubstrPattern(char original[50], char pattern[50] ){

}

int isValidString(char str[50], char alphabet[50]){
	int i, j;

	for(i=0; i<strlen(str); i++){
		for(j=0; j<strlen(alphabet); j++)
			if(str[i]==alphabet[j]) break; 
		if(j==strlen(alphabet)) return 1;
	}
	return 0;
}

int getSkew(char str[50], int n){
	
}

int getMaxSkewN(char str[50], int n){
	
}

int getMinSkewN(char str[50], int n){
	
}

int main(){
	int res;
	char str1[50], str2[50];
	printf("str1: ");	
	scanf( "%s",str1);
	printf("str2: ");	
	scanf( "%s",str2);
	res=isValidString(str1, str2);
	printf("%d", res);

}