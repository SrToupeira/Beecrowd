#include <iostream>
#include <string.h>
#include <iterator>

using namespace std;

int main()
{
	string word[50];
	int l = 0;

	while(cin >> word != EOF)
	{
		//A intenção desse if é colocar espaços antes de cada palavra com excessão da primeira
		//que sera a única em que o valor de l sera igual a zero;

		if(l != 0)
		{
			printf(" ");
		}

		//O loop será executado de acordo com o tamanho da palavra armazenada em um vetor, verificando
		//letra por letra se alguma entra na condição de alteração;
		
		lenght = (int)strlen(word);

		for(int i = 0; i < lenght; i++)
		{
			switch(word[i])
			{
				case 'S':
					word[i] = 'F';
					break;
				case 's':
					word[i] = 'f';
					break;
				case 'J':
					word[i] = 'F';
					break;
				case 'j':
					word[i] = 'f';
					break;
				case 'B':
					word[i] = 'F';
					break;
				case 'b':
					word[i] = 'f';
					break;
				case 'Z':
					word[i] = 'F';
					break;
				case 'z':
					word[i] = 'f';
					break;
				case 'P':
					word[i] = 'F';
					break;
				case 'p':
					word[i] = 'f';
					break;
				case 'V':
					word[i] = 'F';
					break;
				case 'v':
					word[i] = 'f';
					break;
				case 'X':
					word[i] = 'F';
					break;
				case 'x':
					word[i] = 'f';
					break;
			}
			
			//Caso uma letra seja alterada por 'f' quando ja havia um 'f' anteriormente o vetor todo
			//sera reajustado uma posição para trás eliminando a repetição de f's

			if(word[i] == 'f' && word[i-1] == 'f')
			{
				int k = i;

				for(int j = 0; j < (lenght - i); j++)
				{
					word[k] = word [k+1];
					k++;
				}
			}
			
			//cada letra é impressa individualmente após a verificação;

			cout << word[i];
		}
		
		//Variavel que controla os espaços antes de cada palavra, como seu valor e alterado a partir
		//do primeiro loop apenas a primeira palavra nao terá um espaço antes;

		l = 1;
	}

	return 0;
}
