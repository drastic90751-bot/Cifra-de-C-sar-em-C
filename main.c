#include <stdio.h>
#include <stdlib.h>

// Criptografia Hll

//Normal :       A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
//Criptografia : Se for Shift 10 ira ficar: K L M N O P Q R S T U V W X Y Z A B C D E F G H I J

// Senha:Sapao
//Resultado: Ckzkx (Shift 10)

int main() {
	int N;
	int chave;
	char texto[26];
	printf ("Digite uma palavra para Criptografia:\n ");
	scanf("%s", texto);
	printf("Digite o Shift:\n ");
	scanf("%d",&chave);
	for (int i = 0; texto[i] != '\0'; i++) {

		if (texto[i] >= 'a' && texto[i] <= 'z') {
			texto[i] = ((texto[i] - 'a') + chave) % 26 + 'a';

		}

		else if (texto[i] >= 'A' && texto[i] <= 'Z') {
			texto[i] = ((texto[i] - 'A') + chave) % 26 + 'A';
		}

	}
		printf("Texto Cifrado: %s\n", texto);

		return 0;
	}
