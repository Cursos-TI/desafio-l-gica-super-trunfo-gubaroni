#include <stdio.h>
#include <string.h> 
typedef struct {
    char estado[3];
    char codigo_carta[10];
    char nome_cidade[50];
    unsigned long int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} CartaCidade;

int main() {
    CartaCidade carta1;
    CartaCidade carta2;

    printf("--- Dados da Carta 1 (Sao Paulo) ---\n");
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo_carta, "SP001");
    strcpy(carta1.nome_cidade, "Sao Paulo");
    carta1.populacao = 12396372;
    carta1.area = 1521.11;
    carta1.pib = 763868000000.0;
    carta1.pontos_turisticos = 250;

    printf("\n--- Dados da Carta 2 (Rio de Janeiro) ---\n");
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo_carta, "RJ001");
    strcpy(carta2.nome_cidade, "Rio de Janeiro");
    carta2.populacao = 6775561;
    carta2.area = 1200.28;
    carta2.pib = 370425000000.0;
    carta2.pontos_turisticos = 180;

    if (carta1.area > 0) {
        carta1.densidade_populacional = (float)carta1.populacao / carta1.area;
    } else {
        carta1.densidade_populacional = 0.0f;
    }

    if (carta1.populacao > 0) {
        carta1.pib_per_capita = (float)carta1.pib / carta1.populacao;
    } else {
        carta1.pib_per_capita = 0.0f;
    }

    if (carta2.area > 0) {
        carta2.densidade_populacional = (float)carta2.populacao / carta2.area;
    } else {
        carta2.densidade_populacional = 0.0f;
    }

    if (carta2.populacao > 0) {
        carta2.pib_per_capita = (float)carta2.pib / carta2.populacao;
    } else {
        carta2.pib_per_capita = 0.0f;
    }

    printf("\n--- Informacoes Completas da Carta 1 (%s) ---\n", carta1.nome_cidade);
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo_carta);
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2lf\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta1.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta1.pib_per_capita);

    printf("\n--- Informacoes Completas da Carta 2 (%s) ---\n", carta2.nome_cidade);
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo_carta);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2lf\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta2.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta2.pib_per_capita);

    const char* ATRIBUTO_PARA_COMPARAR = "DENSIDADE";

    printf("\n--- Comparacao de Cartas (Atributo: %s) ---\n", ATRIBUTO_PARA_COMPARAR);

    if (strcmp(ATRIBUTO_PARA_COMPARAR, "POPULACAO") == 0) {
        printf("Carta 1 - %s (%s): %lu\n", carta1.nome_cidade, carta1.estado, carta1.populacao);
        printf("Carta 2 - %s (%s): %lu\n", carta2.nome_cidade, carta2.estado, carta2.populacao);
        if (carta1.populacao > carta2.populacao) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
        } else if (carta2.populacao > carta1.populacao) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    else if (strcmp(ATRIBUTO_PARA_COMPARAR, "AREA") == 0) {
        printf("Carta 1 - %s (%s): %.2f km2\n", carta1.nome_cidade, carta1.estado, carta1.area);
        printf("Carta 2 - %s (%s): %.2f km2\n", carta2.nome_cidade, carta2.estado, carta2.area);
        if (carta1.area > carta2.area) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
        } else if (carta2.area > carta1.area) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(ATRIBUTO_PARA_COMPARAR, "PIB") == 0) {
        printf("Carta 1 - %s (%s): %.2lf\n", carta1.nome_cidade, carta1.estado, carta1.pib);
        printf("Carta 2 - %s (%s): %.2lf\n", carta2.nome_cidade, carta2.estado, carta2.pib);
        if (carta1.pib > carta2.pib) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
        } else if (carta2.pib > carta1.pib) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(ATRIBUTO_PARA_COMPARAR, "PONTOS_TURISTICOS") == 0) {
        printf("Carta 1 - %s (%s): %d pontos\n", carta1.nome_cidade, carta1.estado, carta1.pontos_turisticos);
        printf("Carta 2 - %s (%s): %d pontos\n", carta2.nome_cidade, carta2.estado, carta2.pontos_turisticos);
        if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
        } else if (carta2.pontos_turisticos > carta1.pontos_turisticos) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(ATRIBUTO_PARA_COMPARAR, "DENSIDADE") == 0) {
        printf("Carta 1 - %s (%s): %.2f hab/km2\n", carta1.nome_cidade, carta1.estado, carta1.densidade_populacional);
        printf("Carta 2 - %s (%s): %.2f hab/km2\n", carta2.nome_cidade, carta2.estado, carta2.densidade_populacional);
        if (carta1.densidade_populacional < carta2.densidade_populacional) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
        } else if (carta2.densidade_populacional < carta1.densidade_populacional) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(ATRIBUTO_PARA_COMPARAR, "PIB_PER_CAPITA") == 0) {
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nome_cidade, carta1.estado, carta1.pib_per_capita);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nome_cidade, carta2.estado, carta2.pib_per_capita);
        if (carta1.pib_per_capita > carta2.pib_per_capita) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
        } else if (carta2.pib_per_capita > carta1.pib_per_capita) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else {
        printf("Atributo '%s' nao reconhecido para comparacao.\n", ATRIBUTO_PARA_COMPARAR);
    }

    return 0;
}


#include <stdio.h>
#include <string.h>

typedef struct {
    char nome_pais[50];
    unsigned long int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    float densidade_demografica;
    float pib_per_capita;
} CartaPais;

int exibirMenu() {
    int escolha;
    printf("\n--- Escolha o Atributo para Comparacao ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("6. PIB per Capita\n");
    printf("0. Sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    while (getchar() != '\n'); 
    return escolha;
}

void compararCartas(CartaPais carta1, CartaPais carta2, int atributo_escolhido) {
    printf("\n--- Resultado da Comparacao ---\n");

    switch (atributo_escolhido) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %lu habitantes\n", carta1.nome_pais, carta1.populacao);
            printf("%s: %lu habitantes\n", carta2.nome_pais, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Resultado: %s venceu!\n", carta1.nome_pais);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Resultado: %s venceu!\n", carta2.nome_pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f km2\n", carta1.nome_pais, carta1.area);
            printf("%s: %.2f km2\n", carta2.nome_pais, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Resultado: %s venceu!\n", carta1.nome_pais);
            } else if (carta2.area > carta1.area) {
                printf("Resultado: %s venceu!\n", carta2.nome_pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2lf\n", carta1.nome_pais, carta1.pib);
            printf("%s: %.2lf\n", carta2.nome_pais, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Resultado: %s venceu!\n", carta1.nome_pais);
            } else if (carta2.pib > carta1.pib) {
                printf("Resultado: %s venceu!\n", carta2.nome_pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d pontos\n", carta1.nome_pais, carta1.pontos_turisticos);
            printf("%s: %d pontos\n", carta2.nome_pais, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                printf("Resultado: %s venceu!\n", carta1.nome_pais);
            } else if (carta2.pontos_turisticos > carta1.pontos_turisticos) {
                printf("Resultado: %s venceu!\n", carta2.nome_pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f hab/km2\n", carta1.nome_pais, carta1.densidade_demografica);
            printf("%s: %.2f hab/km2\n", carta2.nome_pais, carta2.densidade_demografica);
            
            if (carta1.densidade_demografica < carta2.densidade_demografica) {
                printf("Resultado: %s venceu!\n", carta1.nome_pais);
            } else {
                if (carta2.densidade_demografica < carta1.densidade_demografica) {
                    printf("Resultado: %s venceu!\n", carta2.nome_pais);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f\n", carta1.nome_pais, carta1.pib_per_capita);
            printf("%s: %.2f\n", carta2.nome_pais, carta2.pib_per_capita);
            if (carta1.pib_per_capita > carta2.pib_per_capita) {
                printf("Resultado: %s venceu!\n", carta1.nome_pais);
            } else if (carta2.pib_per_capita > carta1.pib_per_capita) {
                printf("Resultado: %s venceu!\n", carta2.nome_pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Por favor, escolha um numero entre 1 e 6 (ou 0 para sair).\n");
            break;
    }
}

int main() {
    CartaPais carta1;
    CartaPais carta2;
    strcpy(carta1.nome_pais, "Brasil");
    carta1.populacao = 203062512;
    carta1.area = 8515767.049;
    carta1.pib = 1920000000000.0;
    carta1.pontos_turisticos = 300;

    if (carta1.area > 0) {
        carta1.densidade_demografica = (float)carta1.populacao / carta1.area;
    } else {
        carta1.densidade_demografica = 0.0f;
    }
    if (carta1.populacao > 0) {
        carta1.pib_per_capita = (float)carta1.pib / carta1.populacao;
    } else {
        carta1.pib_per_capita = 0.0f;
    }
    strcpy(carta2.nome_pais, "Argentina");
    carta2.populacao = 46621847;
    carta2.area = 2780400.0;
    carta2.pib = 641000000000.0;
    carta2.pontos_turisticos = 150;

    if (carta2.area > 0) {
        carta2.densidade_demografica = (float)carta2.populacao / carta2.area;
    } else {
        carta2.densidade_demografica = 0.0f;
    }
    if (carta2.populacao > 0) {
        carta2.pib_per_capita = (float)carta2.pib / carta2.populacao;
    } else {
        carta2.pib_per_capita = 0.0f;
    }
    int escolha_do_jogador;
    do {
        escolha_do_jogador = exibirMenu();
        if (escolha_do_jogador != 0) {
            compararCartas(carta1, carta2, escolha_do_jogador);
        } else {
            printf("\nObrigado por jogar! Saindo...\n");
        }
    } while (escolha_do_jogador != 0);

    return 0;
}



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome_pais[50];
    unsigned long int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    float densidade_demografica;
    float pib_per_capita;
} CartaPais;

const char* obterNomeAtributo(int opcao) {
    switch (opcao) {
        case 1: return "Populacao";
        case 2: return "Area";
        case 3: return "PIB";
        case 4: return "Pontos Turisticos";
        case 5: return "Densidade Demografica";
        case 6: return "PIB per Capita";
        default: return "Invalido";
    }
}

double getAtributeValue(const CartaPais* carta, int atributo_opcao) {
    switch (atributo_opcao) {
        case 1: return (double)carta->populacao;
        case 2: return (double)carta->area;
        case 3: return carta->pib;
        case 4: return (double)carta->pontos_turisticos;
        case 5: return (double)carta->densidade_demografica;
        case 6: return (double)carta->pib_per_capita;
        default: return 0.0;
    }
}

int exibirMenuDinamico(const char* titulo, int atributo_ja_escolhido) {
    int escolha;
    printf("\n--- %s ---\n", titulo);
    if (atributo_ja_escolhido != 1) printf("1. Populacao\n");
    if (atributo_ja_escolhido != 2) printf("2. Area\n");
    if (atributo_ja_escolhido != 3) printf("3. PIB\n");
    if (atributo_ja_escolhido != 4) printf("4. Pontos Turisticos\n");
    if (atributo_ja_escolhido != 5) printf("5. Densidade Demografica\n");
    if (atributo_ja_escolhido != 6) printf("6. PIB per Capita\n");
    printf("0. Sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    while (getchar() != '\n');
    return escolha;
}

void compararCartasFinal(CartaPais carta1, CartaPais carta2) {
    int escolha1 = -1, escolha2 = -1;
    do {
        escolha1 = exibirMenuDinamico("Escolha o PRIMEIRO Atributo", -1);

        if (escolha1 < 0 || escolha1 > 6) {
            printf("Opcao invalida. Tente novamente.\n");
        } else if (escolha1 == 0) {
            printf("\nComparacao cancelada. Saindo...\n");
            return; 
        }
    } while (escolha1 < 1 || escolha1 > 6);
    do {
        escolha2 = exibirMenuDinamico("Escolha o SEGUNDO Atributo", escolha1);

        if (escolha2 < 0 || escolha2 > 6 || escolha2 == escolha1) {
            if (escolha2 == escolha1 && escolha2 != 0) {
                 printf("Atributo ja escolhido! Por favor, selecione um atributo diferente.\n");
            } else if (escolha2 != 0) {
                 printf("Opcao invalida. Tente novamente.\n");
            }
        } else if (escolha2 == 0) {
            printf("\nComparacao cancelada. Saindo...\n");
            return;
        }
    } while (escolha2 < 1 || escolha2 > 6 || escolha2 == escolha1); 
    const char* nome_atributo1 = obterNomeAtributo(escolha1);
    const char* nome_atributo2 = obterNomeAtributo(escolha2);

    double valor1_atrib1 = getAtributeValue(&carta1, escolha1);
    double valor2_atrib1 = getAtributeValue(&carta2, escolha1);

    double valor1_atrib2 = getAtributeValue(&carta1, escolha2);
    double valor2_atrib2 = getAtributeValue(&carta2, escolha2);

    printf("\n--- Detalhes da Comparacao ---\n");
    printf("Atributo 1 Escolhido: %s\n", nome_atributo1);
    printf("  %s: %.2lf\n", carta1.nome_pais, valor1_atrib1);
    printf("  %s: %.2lf\n", carta2.nome_pais, valor2_atrib1);

    printf("Atributo 2 Escolhido: %s\n", nome_atributo2);
    printf("  %s: %.2lf\n", carta1.nome_pais, valor1_atrib2);
    printf("  %s: %.2lf\n", carta2.nome_pais, valor2_atrib2);

    int ponto1_atrib1 = 0;
    if (escolha1 == 5) {
        ponto1_atrib1 = (valor1_atrib1 < valor2_atrib1) ? 1 : 0;
    } else {
        ponto1_atrib1 = (valor1_atrib1 > valor2_atrib1) ? 1 : 0;
    }

    int ponto1_atrib2 = 0;
    if (escolha2 == 5) {
        ponto1_atrib2 = (valor1_atrib2 < valor2_atrib2) ? 1 : 0;
    } else {
        ponto1_atrib2 = (valor1_atrib2 > valor2_atrib2) ? 1 : 0;
    }

    double soma_carta1 = valor1_atrib1 + valor1_atrib2;
    double soma_carta2 = valor2_atrib1 + valor2_atrib2;

    printf("\n--- Resultado Final ---\n");
    printf("Soma dos atributos para %s: %.2lf\n", carta1.nome_pais, soma_carta1);
    printf("Soma dos atributos para %s: %.2lf\n", carta2.nome_pais, soma_carta2);

    if (soma_carta1 > soma_carta2) {
        printf("Vencedor da Rodada: %s!\n", carta1.nome_pais);
    } else if (soma_carta2 > soma_carta1) {
        printf("Vencedor da Rodada: %s!\n", carta2.nome_pais);
    } else {
        printf("Resultado: Empate!\n");
    }
    printf("-----------------------------------\n");
}


int main() {

    CartaPais carta1;
    CartaPais carta2;

    strcpy(carta1.nome_pais, "Brasil");
    carta1.populacao = 203062512;
    carta1.area = 8515767.049;
    carta1.pib = 1920000000000.0;
    carta1.pontos_turisticos = 300;

    carta1.densidade_demografica = (carta1.area > 0) ? (float)carta1.populacao / carta1.area : 0.0f;
    carta1.pib_per_capita = (carta1.populacao > 0) ? (float)carta1.pib / carta1.populacao : 0.0f;
a
    strcpy(carta2.nome_pais, "Argentina");
    carta2.populacao = 46621847;
    carta2.area = 2780400.0;
    carta2.pib = 641000000000.0;
    carta2.pontos_turisticos = 150;

    carta2.densidade_demografica = (carta2.area > 0) ? (float)carta2.populacao / carta2.area : 0.0f;
    carta2.pib_per_capita = (carta2.populacao > 0) ? (float)carta2.pib / carta2.populacao : 0.0f;

    compararCartasFinal(carta1, carta2);

    return 0;
}