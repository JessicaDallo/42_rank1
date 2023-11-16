#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	maxX(int num_max)
{
	int	elementos;

	elementos = (num_max / 2) - 1;

	return (elementos);
}

int	ft_resultado(char *campo, int chose_nb, int num_max)
{
	int i = 0;
	int elementos = maxX(num_max);
	while (campo)
	{

		if (i == chose_nb)
		{
			if (campo[i] == 'O')
			{
				printf ("voce nao foi explodido! Ainda restam %d bombas! Cuidado!\n", elementos);
				return (chose_nb);
			}
			else
			{
				printf("BOOM!!! Voce foi explodido!");
				return(-1);
			}
		}
		i++;
	}
	return (NULL);
}

char	*ft_cria(int num_max)
{
	srand(time(NULL));
	char	*criar_campo[num_max];
	int	i = 0;
	int	elementos;
	while(i <= num_max)
	{
		criar_campo[i] = 'O';
		i++;
	}
	elementos = maxX(num_max);
		while(elementos > 0)
		{
			int pa = rand() % num_max;
			if (criar_campo[pa] == 'O')
			{
				criar_campo[pa] = 'X';
				i++;
				elementos--;
			}
		}
	
	char *campo = malloc(num_max * sizeof(char) + 1);
	if(!campo)
	{
		free(campo);
		return (NULL);
	}
	i = 0;
	while (i != num_max)
	{
		//write(1, &criar_campo[i], 1);
		//write(1, i, 1);
		campo[i] = criar_campo[i];
		i++;
	}
	return(campo);
}
int	verifica(int chose_nb, int resultado)
{
	if(chose_nb == resultado)
	{
		printf("o numero ja voi escolhido anteriormente!\nTente novamente!\n");
		return (0);
	}
	else
		return (1);
}

int	main()
{
	int chose_nb = 2;
	int num_min = 0;
	int num_max = 8;
	int resultado;
	char *campo;
	int bolean = 0;
	int i =0;

 	printf("Vamos jogar campo minado?\n");
	printf("Acerte 3 vezes para ganhar!\n");
	printf("Escolha uma posicao entre %d a %d: ", num_min, num_max - 1);
	scanf("%i", &chose_nb);
	campo = ft_cria(num_max);
	while (i < 2)
	{
		if (chose_nb < num_min || chose_nb >= num_max)
			return (printf("Posicao nao existente"));
		resultado = ft_resultado(campo, chose_nb, num_max);
		if(resultado == -1)
			return (0);
		else
		{
			bolean = 0;
			while (bolean == 0)
			{
				printf("Esolha outra posicao de %d a %d: ", num_min, num_max - 1);
				scanf("%i", &chose_nb);
				//chose_nb = 1;
				bolean = verifica(chose_nb, resultado);
			}
		}
		i++;
	}
	printf("VOCE GANHOU!!");
	return (0);

}