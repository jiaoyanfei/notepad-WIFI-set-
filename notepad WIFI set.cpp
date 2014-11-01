#include<stdio.h>
#include<malloc.h>
#include<windows.h>
#include<conio.h>
#include<dos.h>
#include<time.h>

void f()
{
	unsigned int n;
	char ch;
	char b[100],a[100]="netsh wlan set hostednetwork ssid=",c[100]="netsh wlan set hostednetwork key=";
	char d[50]="netsh wlan start hostednetwork",e[50]="netsh wlan stop hostednetwork",g[50]="netsh wlan set hostednetwork mode=disallow";
	char h[50]="netsh wlan set hostednetwork mode=allow";
	while(1)
	{
		system("cls");
		printf("\n\n\n\n\n\n");
		printf("                  ********************************************\n");
		printf("                  *   1   : Wlan Mode=allow                  *\n");
		printf("                  *   2   : Wlan Mode=disallow（省电）       *\n");
		printf("                  *   3   : Start hostednetwork              *\n");
		printf("                  *   4   : Stop hostednetwork               *\n");
		printf("                  *   5   : 修改用户名                       *\n");
		printf("                  *   6   : 修改密码                         *\n");
		printf("                  *   Esc : 退出                             *\n");
		printf("                  ********************************************\n");
		ch=getch();
		if(ch=='1')
		{
			for(n=0;n<strlen(h);n++)
				printf("%c",h[n]);
			printf("\n");
			system(h);
			Sleep(2000);
			system("cls");
			f();
		
		}
		else if(ch=='2')
		{
			for(n=0;n<strlen(g);n++)
				printf("%c",g[n]);
			printf("\n");
			system(g);
			Sleep(2000);
			system("cls");
			f();
		
		}
		else if(ch=='3')
		{
			for(n=0;n<strlen(d);n++)
				printf("%c",d[n]);
			printf("\n");
			system(d);
			Sleep(2000);
			system("cls");
			f();
		

		}
		else if(ch=='4')
		{
			for(n=0;n<strlen(e);n++)
				printf("%c",e[n]);
			printf("\n");
			system(e);
			Sleep(2000);
			system("cls");
			f();
		
		}
		
	
		else if(ch=='5')
		{
			printf("请输入用户名（最好使用字母或数字）:");
			scanf("%s",b);
			strcat(a,b);
			for(n=0;n<strlen(a);n++)
				printf("%c",a[n]);
			printf("\n");
			system(a);
			Sleep(2000);
			system("cls");
			f();
		
		}
		else if(ch=='6')
		{
			printf("请输入新密码（字母或数字且不得少于8位）:");
			scanf("%s",b);
			strcat(c,b);
			for(n=0;n < strlen(c);n++)
				printf("%c",c[n]);
			printf("\n");
			system(c);
			Sleep(2000);
			system("cls");
			f();
		
		}
		else if(ch==27)  exit(0);
		else  
			printf("\a");
	}
		
}

int main ()
{
	
	system("netsh wlan set hostednetwork mode=allow");
	system("cls");
	f();
	return 0;

}
