#include<stdio.h>
char a[3][3];
int i,j;
int r,c;
int flag = 0;
int count1 = 0;
int count2 = 0;

int main(){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("-\t",a[i][j]);
			a[i][j] = '-';
		}
		printf("\n");
	}
	while(flag == 0){
		player1();
		if(count1==5){
			flag = 1;
			printf("Tie\n");
			break;
		}
		if(flag == 1){
			break;
		}
		player2();
	}
	return 0;
}
void display(){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%c\t",a[i][j]);
		}
		printf("\n");
	}
}

void player1(){
	count1 = count1+1;
	printf("Player 1\n");
rep : 
	printf("Enter The Position : ");
	scanf("%d %d",&r,&c);
	if(a[r][c]=='-'){
		a[r][c] = 'X';
	}
	else{
		printf("Another Position\n");
		goto rep;		
	}
	check1();
	display();
}

void player2(){
	count2 = count2+1;
	printf("Player 2\n");
rep : 
	printf("Enter The Position : ");
	scanf("%d %d",&r,&c);
	if(a[r][c]=='-'){
		a[r][c] = 'O';
	}
	else{
		printf("Another Position\n");
		goto rep;		
	}
	check2();
	display();
}

void check1(){
	if((a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X')||(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X')||(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X')){
		printf("Player 1 Wins\n");
		flag=1;
	}
	else if ((a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X')||(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X')||(a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X')){
		printf("Player 1 Wins \n");
		flag = 1;
	}
	else if((a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X')||(a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X')){
		printf("Player 1 Wins\n");
		flag = 1;
	}
}

void check2(){
	if((a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O')||(a[1][0]=='O'&&a[1][1]=='O'&&a[1][2]=='O')||(a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O')){
		printf("Player 2 Wins\n");
		flag=1;
	}
	else if ((a[0][0]=='O'&&a[1][0]=='O'&&a[2][0]=='O')||(a[0][1]=='O'&&a[1][1]=='O'&&a[2][1]=='O')||(a[0][2]=='O'&&a[1][2]=='O'&&a[2][2]=='O')){
		printf("Player 2 Wins \n");
		flag = 1;
	}
	else if((a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O')||(a[0][2]=='O'&&a[1][1]=='O'&&a[2][0]=='O')){
		printf("Player 2 Wins\n");
		flag = 1;
	}
}
