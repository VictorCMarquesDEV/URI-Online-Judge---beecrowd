#include <stdio.h>
#include <string.h>
#include <ctype.h>


void maiusculo(char s1[], char s2[]){
    int i = 0;
    while(s1[i] != '\0'){
        s2[i] = toupper(s1[i]);
        i++;
        //printf("entrou maiusculo");
    }
    s2[i] = '\0';
}

int main(){

	int i,i2,b,cont,v[1000],*p;
	char s1[2001],s2[2001],aux[2];

	do{
		START:
		//setbuf(stdin,NULL);
		//printf("comecou\n");
		scanf(" %[^\n]",s1);
		//printf("Passou\n");
		
		if(s1[0]=='*'){
			break;
		}
		
		maiusculo(s1,s2);
		aux[0]=s2[0];
		
		for(i=0,i2=0,cont=1;i<strlen(s2)-1;i++){
			if((int)s2[i]==32){
				cont++;
				v[i2]=i;
				i2++;
			}
		}
		if(cont==1){
			printf("Y\n");
			goto START;
		}
		for(i=0,b=0,p=&v[0];i<cont-1;i++,p++){
			if(s2[*p+1]==aux[0]){
				b=1;
			}else{
				b=0;
				break;
		}
	}
		if(b==1){
			printf("Y\n");
		}else{
			printf("N\n");
		}
	}while(1);
	
	return 0;
}