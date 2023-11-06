#include <stdio.h>

void hillCipherEncrypt(char*, char*);

int main(int argc, char *argv[]) { char message[100]; char key[100];

	printf("Plaintext: ");
	fgets(message, sizeof(message), stdin);

	printf("Key: ");
	fgets(key, sizeof(key), stdin);

	hillCipherEncrypt(message, key);	
	return 0;
}

void hillCipherEncrypt(char *message, char *key) {
	int keyMatrix[3][3];
	int messageVector[3][1];
	int cipherMatrix[3][3];
	char cipherText[100];
	
	int k = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			keyMatrix[i][j] = key[k] % 65;
			k++;
		}
	}	

	for (int i = 0; i < 3; i++) {
		messageVector[i][0] = message[i] % 65;
	}


	for (int i = 0;  i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cipherMatrix[i][j] = 0;
			for (int k = 0; k < 3; k++) {
				cipherMatrix[i][j] += keyMatrix[i][k] * messageVector[k][j];
			}

			cipherMatrix[i][j] = cipherMatrix[i][j] % 26;
		}
	}

	int i;
	for (i = 0; i < 3; i++) {
		cipherText[i] = cipherMatrix[i][0] + 65;
	}

	cipherText[i] = '\0';

	printf("Cipher Text: %s", cipherText);
}
