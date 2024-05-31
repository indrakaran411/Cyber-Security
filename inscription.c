#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>
int d;

void encryption(){
char message[1000],ch;
	int i,val=9;
	system("cls");
	printf("Enter your message here-\n");
	fgets(message,1002,stdin);

	for(i=0;message[i]!=NULL;i++){
		ch=message[i];
		if(message[i]>='a' && message[i]<='z'){
			ch=ch+val;
			if(message[i]>'z'){
				ch=ch-'z'+'a'-1;
			}
		}
		else if(message[i]==' '){
			ch=message[i];
		}
		else{
			if(message[i]>='A' && message[i]<='Z'){
			ch=ch+val;
			if(message[i]>'Z'){
				ch=ch-'Z'+'A'-1;
			}
		}
		}
		message[i]=ch;
	}
	printf("\nEncrypted message:\n");
	system("color 0");
	puts(message);
	system("color 0A");
	Sleep(2000);
	printf("\n\n\t\t# Press 'y' to continue!\n\n");
	printf("\n\t\t# Press 'n' to continue!\n\n");
	d=getche();
	if(d=='y'||d=='Y'){
		system("cls");
	}
	if(d=='n'||d=='N'){
		exit(1);
	}
	else{
		system("cls");
		printf("\n\n\n\n");
		printf("\n\t\tHey don't press other keys,Press only 'y' to continue and 'n' to exit!! :p");
		d=getche();
	if(d=='y'||d=='Y'){
		system("cls");
	}

}
}
void decryption(){
	int i,key=9;
	char ch,message[1000];
	printf("\nEnter the message:\n");
	fgets(message,1000,stdin);
	 for(i = 0; message[i] != '\0'; ++i){
        ch = message[i];

        if(ch >= 'a' && ch <= 'z'){
            ch = ch - key;

            if(ch < 'a'){
                ch = ch + 'z' - 'a' + 1;
            }

            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch - key;

            if(ch < 'A'){
                ch = ch + 'Z' - 'A' + 1;
            }

            message[i] = ch;
        }
    }
    printf("\nDecrypted message:\n");
   	system("color 0F");
	puts(message);
	system("color 0A");
    printf("\n\n");
    Sleep(2000);
   	printf("\n\n\t\t# Press 'y' to continue!\n\n");
	printf("\n\t\t# Press 'n' to exit!\n\n");
	d=getche();
	if(d=='y'||d=='Y'){
		system("cls");
	}
	if(d=='n'||d=='N'){
		exit(1);
	}
	else{
		system("cls");
		printf("\n\n\n\n");
		printf("\n\t\tHey don't press other keys,Press only 'y' to continue and 'n' to exit!! :p");
		d=getche();
	if(d=='y'||d=='Y'){
		system("cls");
	}

}
}
int main()
{
	int c;
	char d;
	printf("Author: arghac14");
	system("color 0A");
	printf("\n\n\n\n");
	printf("\t\t______________________C I P H E R______________________\n");
	printf("\t\t| Cipher is a secret or distinguised way of writing.   |\n");
	printf("\t\t| Here you can type any secret message and it will be  |\n");
	printf("\t\t| fully encrypted so that any unauthorized party can't |\n");
	printf("\t\t| read.Further you can decrypt it in its original form.|\n");
	printf("\t\t|______________________________________________________|\n");
	Sleep(2000);
	printf("\n\n\t\tPress 'y' to continue!\n");
	Sleep(10);
    d=getche();
	if(d=='y'||d=='Y'){
		system("cls");
	}
	else{
		system("cls");
		printf("\n\n\n\n");
		printf("\n\t\tHey don't press other keys,Press only 'y' to continue!! :p");
		d=getche();
	if(d=='y'||d=='Y'){
		system("cls");
	}
	}
	while(1){

	printf("\n\n\n\n");
	printf("\t\t______________________C I P H E R______________________\n");
	printf("\t\t| Press 1 for Encryption >>>>>>>>>>>>>>>  1            |\n");
	printf("\t\t|                                                      |\n");
	printf("\t\t| Press 2 for Decryption >>>>>>>>>>>>>>>  2            |\n");
	printf("\t\t|______________________________________________________|\n");

	Sleep(1000);
	printf("\n\n\t\tEnter your choice:");
	c=getche();
	if(c=='1'){
		encryption();
	}
	else if(c=='2'){
		decryption();
	}
	else{
		printf("Invalid choice!");
		exit(1);
	}
}
}
/*	switch(c){
		case 1: encryption();
				break;
		case 2: decryption();
				break;
		default: printf("Invalid choice!\n");
				exit(1);
	}
	}
}*/