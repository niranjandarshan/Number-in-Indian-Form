#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char unit[21][50]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fiurteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char tenth[][50]={"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
	char hundred[][50]={"hundred","thousand","lakh","crore"};
       long number;
       int i,j;
	clrscr();
	printf("\t Enter number:-");
	scanf("%ld",&number);
	//if number is zero
	if(number==0)
	printf("zero");
	//if number is between 1 to 19

	if(number>=0&&number<=19){
	//for(i=0;i<number-1;i++){
	for(j=0;j<9;j++){
	printf("%c",unit[number][j]);


	}
	}

		if(number>19&&number<=99){

	for(j=0;j<9;j++){
      printf("%c",tenth[number/10][j]);
       //	char a[i][j]=tenth[number/10][j];



	}

	for(j=0;j<9;j++){
		printf("%c",unit[number%10][j]);
	}
}
//number between 100 and 999

if(number>=100 &&number<=999){
for(j=0;j<9;j++){
printf("%c",unit[number/100][j]);

}
for(j=0;j<9;j++){
printf("%c",hundred[0][j] );
}
for(j=0;j<9;j++){
	printf("%c",tenth[(number%100)/10][j]);


}
for(j=0;j<9;j++){
	printf("%c",unit[(number%100)%10][j]);



}

}
// number between 1000 to 99999

if(number>=1000 &&number<=99999){
for(j=0;j<19;j++){
printf("%c",unit[number/1000][j]);

}
//if(number/1000 !=0){
for(j=0;j<9;j++){
printf("%c",hundred[1][j] );
//}
}
for(j=0;j<9;j++){
	printf("%c",unit[(number%1000)/100][j]);


}
//if((number%1000)/100 ==0)  {

for(j=0;j<9;j++){
printf("%c",hundred[0][j] );
//}
}
for(j=0;j<9;j++){
	printf("%c",tenth[((number%1000)%100)/10][j]);



}
for(j=0;j<9;j++){
	printf("%c",unit[((number%1000)%100)%10][j]);



}

}
//number between 100000to 9999999
if(number>=100000 &&number<=9999999){
for(j=0;j<19;j++){
printf("%c",unit[number/100000][j]);

}
//if((number/100000) ==0){

for(j=0;j<9;j++){
//break;
printf("%c",hundred[2][j] );
//}
}
for(j=0;j<9;j++){
	printf("%c",tenth[(number%100000)/10000][j]);


}
for(j=0;j<9;j++){
	printf("%c",unit[((number%100000)%10000)/1000][j]);


}

//if((number%100000)/1000 )== 0){
//break;
for(j=0;j<9;j++){

printf("%c",hundred[1][j]);
}
//}
for(j=0;j<9;j++){
	printf("%c",unit[((number%100000)%1000)/100][j]);




}
//if(((number%100000)%1000)/100) ==0){
//break;
for(j=0;j<9;j++){

printf("%c",hundred[0][j] );
//}
}


for(j=0;j<9;j++){
	printf("%c",tenth[(((number%100000)%1000)%100)/10][j]);



}
for(j=0;j<9;j++){
	printf("%c",unit[(((number%100000)%1000)%100)%10][j]);



}


}
//number between 10,000,000to 999999999
if(number>=10000000 &&number<=999999999){
for(j=0;j<19;j++){
printf("%c",unit[number/10000000][j]);

}
//if((number/100000) ==0){

for(j=0;j<9;j++){
//break;
printf("%c",hundred[3][j] );
//}
}
for(j=0;j<9;j++){
	printf("%c",tenth[(number%10000000)/1000000][j]);


}
for(j=0;j<9;j++){
	printf("%c",unit[((number%10000000)%1000000)/100000][j]);


}

//if((number%100000)/1000 )== 0){
//break;
for(j=0;j<9;j++){

printf("%c",hundred[2][j]);
}
//}
for(j=0;j<9;j++){
	printf("%c",tenth[(((number%10000000)%1000000)%100000)/10000][j]);




}
for(j=0;j<9;j++){
	printf("%c",unit[((((number%10000000)%1000000)%100000)%10000)/1000][j]);



}

//if(((number%100000)%1000)/100) ==0){
//break;
for(j=0;j<9;j++){

printf("%c",hundred[1][j] );
//}
}


for(j=0;j<9;j++){
	printf("%c",unit[(((((number%10000000)%1000000)%100000)%10000)%1000)/100][j]);



}
for(j=0;j<9;j++){

printf("%c",hundred[0][j] );
//}
}


for(j=0;j<9;j++){
	printf("%c",tenth[((((((number%10000000)%1000000)%100000)%10000)%1000)%100)/10][j]);



}
for(j=0;j<9;j++){
	printf("%c",unit[((((((number%10000000)%1000000)%100000)%10000)%1000)%100)%10][j]);



}



}


 }

