//////////////////
//copyright(c) 2017 banban All right reserved.
//////////////////


#include<stdio.h>
int main(){
	char text[]="PXFR2QIVTMSZCNDKUWAGJB1LHYEO";
	char plain[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ12";
	char chipher[]="A2FFDNEA22HDJN2LGH2PWO";
	int i=0,j=0;
	
	while(chipher[j]){
		i=0;
		while(i<43){
			if(chipher[j]==text[i]){
				chipher[j]=plain[i];
				break;
			}else{
				i++;
			}
		}
		j++;
	}
	printf("%s\n",chipher);
}
