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
	int count=0, i, j, temp_i=0;

	for(i=0; i<strlen(original); i++){
		for(temp_i=i, j=0; j<strlen(pattern) && temp_i<=strlen(original); j++,temp_i++){
			if(original[temp_i]!=pattern[j]) break; 
		}
		if(j==strlen(pattern)) count+=1;
	}
	return count;
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
	int noOfg=0, noOfc=0, i=1, res=0;
	
	for(i=0; i<n && i<strlen(str); i++){
		if(str[i]=='G') noOfg+=1;
		else if(str[i]=='C') noOfc+=1;
	}

	res = noOfg-noOfc;
	return res;
}

int getMaxSkewN(char str[50], int n){
	
}

int getMinSkewN(char str[50], int n){
	
}

int main(){
	int res;
	char str1[50], str2[50];
	int num;
	printf("str1: ");	
	scanf( "%s",str1);
	printf("str2: ");	
	scanf( "%d",&num);
	res=getSkew(str1, num);
	printf("%d", res);

}