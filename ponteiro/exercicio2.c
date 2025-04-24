#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int hora;
    int min;
    int seg;
} Horario;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Data *data_compromisso;
    Horario *horario_compromisso;
    char descricao[50];
} Compromisso;

int main() {
    Compromisso c;

    // Alocando memória para os ponteiros
    c.data_compromisso = (Data *)malloc(sizeof(Data));
    c.horario_compromisso = (Horario *)malloc(sizeof(Horario));

    if (c.data_compromisso == NULL || c.horario_compromisso == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Lendo os dados do usuário
    printf("Digite o dia, mês e ano do compromisso (dd mm aaaa): ");
    scanf("%d %d %d", &c.data_compromisso->dia, &c.data_compromisso->mes, &c.data_compromisso->ano);

    printf("Digite a hora, minuto e segundo do compromisso (hh mm ss): ");
    scanf("%d %d %d", &c.horario_compromisso->hora, &c.horario_compromisso->min, &c.horario_compromisso->seg);

    getchar(); // limpa o '\n' que ficou no buffer

    printf("Digite a descrição do compromisso: ");
    fgets(c.descricao, sizeof(c.descricao), stdin);

    // Remover o \n final, se existir
    c.descricao[strcspn(c.descricao, "\n")] = '\0';

    // Exibindo os dados
    printf("\nCompromisso: %s\n", c.descricao);
    printf("Data: %02d/%02d/%04d\n", 
           c.data_compromisso->dia, 
           c.data_compromisso->mes, 
           c.data_compromisso->ano);
    printf("Horário: %02d:%02d:%02d\n", 
           c.horario_compromisso->hora, 
           c.horario_compromisso->min, 
           c.horario_compromisso->seg);

    // Liberando memória
    free(c.data_compromisso);
    free(c.horario_compromisso);

    return 0;
}
