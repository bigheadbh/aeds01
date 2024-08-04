#include <stdio.h>
#include <string.h>

// Função para criptografar a mensagem
void criptografar(char mensagem[], int k) {
    int i;
    for (i = 0; i < strlen(mensagem); i++) {
        mensagem[i] = mensagem[i] + k;
    }
}

int main() {
    char mensagem[100];
    int k;
    
    printf("Digite a mensagem para criptografar: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    // Remove o caractere de nova linha, se presente
    mensagem[strcspn(mensagem, "\n")] = '\0';
    
    printf("Digite a constante K: ");
    scanf("%d", &k);
    
    criptografar(mensagem, k);
    
    printf("Mensagem criptografada: %s\n", mensagem);
    
    return 0;
}
