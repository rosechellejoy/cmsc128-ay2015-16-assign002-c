#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
/*
	getHammingDistance(char str1[50], char str2[50]) 
		-gets the no. of inversions needed for str1 and str2 to be equal
*/
int getHammingDistance(char str1[50], char str2[50]){
	int dist, i;

	if(strlen(str1)!=strlen(str2)){						//unequal strings
		printf("Error! Strings are not equal\n");
		return -1;
	}
	else if(strlen(str1)==0 || strlen(str2)==0){		//empty string(s)
		printf("Error! Empty string(s)\n");
		return -1;
	}

	for(i=0; i<strlen(str1); i++) 
		if(str1[i]!=str2[i]) dist+=1;			//for each different pair of characters, dist+1

	return dist;

}
/*
	countSubstrPattern(char original[50], char pattern[50])
		-returns no.ofoccurences of pattern in string original
*/
int countSubstrPattern(char original[50], char pattern[50] ){
	int count=0, i, j, temp_i=0;

	for(i=0; i<strlen(original); i++){				//for each character in original		
		for(temp_i=i, j=0; j<strlen(pattern) && temp_i<=strlen(original); j++,temp_i++){			//store current value of i to temp_i		
			if(original[temp_i]!=pattern[j]) break; 												//if current character matches with 1st character in pattern
		}																							//compare it to the succeeding characters of pattern
																									//break if the characters are different
		if(j==strlen(pattern)) count+=1;						//if all characters in pattern has been compared, then count of pattern in incremented								
	}
	return count;				
}

/*
	isValidString(char str[50], char alphabet[50])
		-returns 0 (true) if string is valid or 1 (false) if string is false
*/

int isValidString(char str[50], char alphabet[50]){
	int i, j;

	for(i=0; i<strlen(str); i++){
		for(j=0; j<strlen(alphabet); j++)		//for each letter in alphabet
			if(str[i]==alphabet[j]) break; 		//if str[i] is found, then that character is valid
		if(j==strlen(alphabet)) return 1;		//if str[i] doesn't match with any character in alphabet, then str is invalid
	}
	return 0;
}
/*
	getSkew(char str[50], int n)
		-returns no of 'G' - no of 'C' from index 1 to n of str
		note:1st character is of index 1 
*/
int getSkew(char str[50], int n){
	int noOfg=0, noOfc=0, i=1, res=0;

	for(i=0; i<n && i<strlen(str); i++){
		if(str[i]=='G') noOfg+=1;			//counts occurences of 'G'
		else if(str[i]=='C') noOfc+=1;		//counts occurences of 'C'
	}

	res = noOfg-noOfc;	
	return res;		
}
/*
	getMaxSkewN(char str[50], int n)
		-returns max skew among the skews from 1 to n 
*/
int getMaxSkewN(char str[50], int n){
	int i, max, *skew;			
	skew = (int *) malloc (n*sizeof(int));	//malloc pointer to array of skews

	for(i=0; i<n; i++) skew[i]=getSkew(str, i+1);	//getSkew(1) to getSkew(n)

	for(i=1, max=skew[0]; i<n; i++) 
		if(max<skew[i]) max = skew[i];			//find max skew from array of skews
	
	free(skew);	//free allocated pointer
	return max;
}
/*
	getMinSkewN(char str[50], int n)
		-returns min skew among the skews from 1 to n 
*/
int getMinSkewN(char str[50], int n){
	int i, min, *skew;
	skew = (int *) malloc (n*sizeof(int));	//malloc pointer to array of skews

	for(i=0; i<n; i++) skew[i]=getSkew(str, i+1);		//getSkew(1) to getSkew(n)

	for(i=1, min=skew[0]; i<n; i++) 
		if(min>skew[i]) min = skew[i];			//find min skew from array of skews
	
	free(skew);	//free allocated pointer
	return min;	
}

int main(){

}