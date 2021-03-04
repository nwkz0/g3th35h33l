#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////

short int option;
char login[12],password[12];
char shell_code[168];

//////////////////////////////////

int main(void)
{
	void loop_function(); loop_function();
	return 0;
}

void loop_function()
{
	system("clear");
	void painel(); painel();
}

void painel()
{
	printf("\ntry g3t p445w0rd!\n");

	getchar();
	printf(" - - - - - - - - - - - - P41N3L - - - - - - - - - - - - \n");
	printf("\n(1) - l0g1n\n\n");
	scanf("%d",&option);

	if(option == 1)
	{
		system("clear");
		printf("L0G1N: ");
		scanf("%s",&login);

		// fgets(login,12,stdin); - fgets pulando direto pro 2*, pesquisar dps //

		printf("P455W0RD: ");
		scanf("%s",&password);
		// fgets(password,12,stdin); //

		if(strcmp(password,"@xls&0xBAxyz") == 0)
		{
			system("clear");
			printf("\nW3lc0me 4g41n, 0wn#z ..."); system("sleep 2");
			printf("\nInitializing Operational System ...\n\n"); system("sleep 5");
			
			while(1)
			{
				printf("root@0wn#z:~# ");
				scanf("%s",&shell_code);
				sprintf(shell_code, "%s", shell_code);
				system(shell_code);

				if(strcmp(shell_code,"exit") == 0) break;
			}
		}
		else
		{
			printf("\n1nc0rr3ct l0g1n or p455w0rd, try 4g41n >:)\n"); system("sleep 2"); loop_function();
		}
	}

}
