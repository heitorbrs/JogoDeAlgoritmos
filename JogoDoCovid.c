/************************************************************************************
|                                 Jogo do COVID-19                                  |
|                         Desenvolvido por Heitor Brasiel                           |
|                         Engenharia Elétrica - 1º Período                          |
|                   Disciplina: Algoritmos e lógica de programção                   |
************************************************************************************/

#include <stdio.h> //biblioteca padrão de entrada e saída
#include <stdlib.h> //biblioteca do system()
#include <locale.h> //biblioteca de acentuacao
#include <windows.h> //biblioteca do Sleep()

void covid();
void nivel_1();
void nivel_2();
void nivel_3();

int main() {

    char nome[40], perguntas, palpite;
    int menu = 1, cores, opcoes, xp1 = 0, xp2 = 0, xp3 = 0, erros = 0;
    int forca_1 = 1, forca_2 = 1, forca_3 = 1, forca_4 = 1, forca_5 = 1;

    setlocale(LC_ALL,""); //comando necessário para usar caracteres especiais
	voltar:

/************************ REDEFININDO O VALOR DAS VARIÁVEIS ************************/

    xp1 = 0; xp2 = 0; xp3 = 0;

/********************************** MENU DO JOGO ***********************************/

    system("cls"); //limpa a tela
    printf("\n\tSEJA BEM VINDO E BOM JOGO!!!\n\n");
    printf("\t*--------------------------*\n");
    printf("\t|     1 - INICIAR JOGO     |\n");
    printf("\t|     2 - OPÇÕES           |\n");
    printf("\t|     3 - AJUDA            |\n");
    printf("\t|     4 - CRÉDITOS         |\n");
    printf("\t|     5 - SAIR             |\n");
    printf("\t*--------------------------*\n");
    printf("\n\tO QUE VOCÊ DESEJA FAZER? ");
    scanf("%d", &menu);

    switch (menu) {

    case 1: //iniciar jogo

        system("cls");
        covid();

        for (int i = 0; i < 1; i++) {

        printf("\n\n\n\n\n\n\t\t\t");
        printf(" Loading [");


            for (int j = 0; j < 15; j++) {

                printf("#");
                Sleep(120);
            }

        printf("]\r");
        printf("\t\t\tComplete [\n\n\n\n\n\t\t");
        }
        system("pause");

/*********************************** PERGUNTA 1 ************************************/

        nivel_1();
        printf("\tPERGUNTA 1\n\n");
        printf("\tO que é corona vírus?\n\n");
        printf("\ta) É um tipo de câncer\n");
        printf("\tb) É uma grande família de vírus\n");
        printf("\tc) É um tipo de depressão\n");
        printf("\td) É um único vírus\n");
        printf("\te) Nenhuma das alternativas\n\n\t");
        printf("Sua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'b' || perguntas == 'B') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/1", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/*********************************** PERGUNTA 2 ************************************/

        nivel_1();
        printf("\tPERGUNTA 2\n\n");
        printf("\tQual das alternativas NÃO é uma das formas de transmissão do vírus?\n\n");
        printf("\ta) Gotículas de saliva\n");
        printf("\tb) Ar\n");
        printf("\tc) Tosse\n");
        printf("\td) Objetos contaminados\n");
        printf("\te) Espirro\n\n\t");
        printf("Sua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'b' || perguntas == 'B') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/2", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/*********************************** PERGUNTA 3 ************************************/

        nivel_1();
        printf("\tPERGUNTA 3\n\n");
        printf("\tQual das alternativas não é um sintoma do vírus?\n\n");
        printf("\ta) Febre.\n");
        printf("\tb) Tosse seca.\n");
        printf("\tc) Cansaço.\n");
        printf("\td) Perda de paladar ou olfato.\n");
        printf("\te) Dor no peito. \n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'e' || perguntas == 'E') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/3", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/*********************************** PERGUNTA 4 ************************************/

        nivel_1();
        printf("\tPERGUNTA 4\n\n");
        printf("\tQual foi o primeiro país no qual começou as primeiras mortes?\n\n");
        printf("\ta) Brasil\n");
        printf("\tb) Estados Unidos\n");
        printf("\tc) China\n");
        printf("\td) Itália\n");
        printf("\te) Espanha\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'c' || perguntas == 'C') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/4", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/*********************************** PERGUNTA 5 ************************************/

        nivel_1();
        printf("\tPERGUNTA 5\n\n");
        printf("\tEm qual mês foi detectado o primeiro caso oficial de COVID-19 na China?\n\n");
        printf("\ta) Novembro\n");
        printf("\tb) Dezembro\n");
        printf("\tc) Janeiro\n");
        printf("\td) Fevereiro\n");
        printf("\te) Março\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'b' || perguntas == 'B') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/5", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/*********************************** PERGUNTA 6 ************************************/

        nivel_1();
        printf("\tPERGUNTA 6\n\n");
        printf("\tEm qual mês foi detectado o primeiro caso oficial de COVID-19 no Brasil?\n\n");
        printf("\ta) Novembro\n");
        printf("\tb) Dezembro\n");
        printf("\tc) Janeiro\n");
        printf("\td) Fevereiro\n");
        printf("\te) Março\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'd' || perguntas == 'D') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/6", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/*********************************** PERGUNTA 7 ************************************/

        nivel_1();
        printf("\tPERGUNTA 7\n\n");
        printf("\tQual das medidas é recomendada?\n\n");
        printf("\ta) Ficar de quarentena\n");
        printf("\tb) Tabagismo\n");
        printf("\tc) Tomar remédios tradicionais a base de plantas\n");
        printf("\td) Ingerir bebidas alcoólicas\n");
        printf("\te) Automedicar-se\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'a' || perguntas == 'A') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/7", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/*********************************** PERGUNTA 8 ************************************/

        nivel_1();
        printf("\tPERGUNTA 8\n\n");
        printf("\tO que é uma pandemia?\n\n");
        printf("\ta) Disseminação mundial de uma nova doença\n");
        printf("\tb) Aumento de casos de mortes\n");
        printf("\tc) Disseminação regional de uma nova doença\n");
        printf("\td) Evento geográfico\n");
        printf("\te) Aumento da taxa de natalidade\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'a' || perguntas == 'A') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/8", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/*********************************** PERGUNTA 9 ************************************/

        nivel_1();
        printf("\tPERGUNTA 9\n\n");
        printf("\tO que NÃO se deve fazer para se proteger e evitar a propagação da doença?\n\n");
        printf("\ta) Higienizar as mãos com álcool gel ou água e sabonete\n");
        printf("\tb) Ficar em casa\n");
        printf("\tc) Cumprimentar os amigos\n");
        printf("\td) Manter-se informado\n");
        printf("\te) Evitar tocar nos olhos, nariz e boca\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'c' || perguntas == 'C') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/9", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/********************************** PERGUNTA 10 ************************************/

        nivel_1();
        printf("\tPERGUNTA 10\n\n");
        printf("\tO que é ficar em isolamento social?\n\n");
        printf("\ta) Não ir para festas\n");
        printf("\tb) Não ir para escola\n");
        printf("\tc) Ficar em casa\n");
        printf("\td) Não viajar\n");
        printf("\te) Todas as opções acima\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'e' || perguntas == 'E') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/10", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/********************************** PERGUNTA 11 ************************************/

        nivel_1();
        printf("\tPERGUNTA 11\n\n");
        printf("\tQuais são os pontos da casa com MENOR possibilidade de contaminação?\n\n");
        printf("\ta) Maçanetas\n");
        printf("\tb) Torneiras\n");
        printf("\tc) Descargas\n");
        printf("\td) Lâmpadas\n");
        printf("\te) Utensílios domésticos\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'd' || perguntas == 'D') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/11", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/********************************** PERGUNTA 12 ************************************/

        nivel_1();
        printf("\tPERGUNTA 12\n\n");
        printf("\tAtualmente existem quantos tipos de exame para detecção da COVID-19?\n\n");
        printf("\ta) 1\n");
        printf("\tb) 2\n");
        printf("\tc) 3\n");
        printf("\td) 4\n");
        printf("\te) 5\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'b' || perguntas == 'B') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/12", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/********************************** PERGUNTA 13 ************************************/

        nivel_1();
        printf("\tPERGUNTA 13\n\n");
        printf("\tQual máscara não está sendo utilizada para proteção durante a pandemia?\n\n");
        printf("\ta) Máscaras cirúrgicas\n");
        printf("\tb) Máscaras tipo respirador\n");
        printf("\tc) Máscaras caseiras\n");
        printf("\td) Máscaras faciais\n");
        printf("\te) Nenhuma das alternativas\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'e' || perguntas == 'E') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/13", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/********************************** PERGUNTA 14 ************************************/

        nivel_1();
        printf("\tPERGUNTA 14\n\n");
        printf("\tQual o pior material para se confeccionar uma máscara caseira?\n\n");
        printf("\ta) Tecidos alérgicos\n");
        printf("\tb) TNT\n");
        printf("\tc) Tecidos de roupas\n");
        printf("\td) Algodão\n");
        printf("\te) Tecido de fronhas\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'a' || perguntas == 'A') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/14", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/********************************** PERGUNTA 15 ************************************/

        nivel_1();
        printf("\tPERGUNTA 15\n\n");
        printf("\tO que NÃO se deve fazer com uma máscara?\n\n");
        printf("\ta) Higienizar antes e após o uso\n");
        printf("\tb) Remover pegando pelo elástico\n");
        printf("\tc) Não usar enquanto estiver molhada\n");
        printf("\td) Ficar vários dias sem lavar\n");
        printf("\te) Nenhuma das alternativas\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'd' || perguntas == 'D') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/15", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/********************************** PERGUNTA 16 ************************************/

        nivel_1();
        printf("\tPERGUNTA 16\n\n");
        printf("\tO que as empresas não devem fazer para manter o local seguro?\n\n");
        printf("\ta) Incentivar o empregado com doenças respiratórias a ficar em casa\n");
        printf("\tb) Manter o ambiente de trabalho limpo\n");
        printf("\tc) Fazer reuniões em locais fechados\n");
        printf("\td) Ajudar a manter a calma dos trabalhadores\n");
        printf("\te) Evitar aglomerações\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'c' || perguntas == 'C') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/16", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/********************************** PERGUNTA 17 ************************************/

        nivel_1();
        printf("\tPERGUNTA 17\n\n");
        printf("\tQuais são os cuidados necessários para evitar contaminação ");
        printf("caso tenha alguém com COVID-19 dentro de casa?\n\n");
        printf("\ta) Diminuir o contato com o morador contaminado\n");
        printf("\tb) Não dividir utensílios de uso pessoal\n");
        printf("\tc) Não dividir aparelhos eletrônicos\n");
        printf("\td) Higienizar as mãos e o ambiente\n");
        printf("\te) Todas as alternativas acima\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'e' || perguntas == 'E') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/17", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/********************************** PERGUNTA 18 ************************************/

        nivel_1();
        printf("\tPERGUNTA 18\n\n");
        printf("\tQual método atrapalha a prevenir a COVID-19 no ambiente de trabalho?\n\n");
        printf("\ta) Não usar máscaras\n");
        printf("\tb) Manter o ambiente higienizado\n");
        printf("\tc) Informar os funcionários\n");
        printf("\td) Lavar bem as mãos\n");
        printf("\te) Evitar aglomeração\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'a' || perguntas == 'A') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/18", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/********************************** PERGUNTA 19 ************************************/

        nivel_1();
        printf("\tPERGUNTA 19\n\n");
        printf("\tO que significa um caso suspeito de COVID-19?\n\n");
        printf("\ta) Quando a pessoa descobre que está com o vírus\n");
        printf("\tb) Quando a pessoa tem amigos distantes com o vírus\n");
        printf("\tc) Quando a pessoa possui sintomas da doença\n");
        printf("\td) Quando a pessoa viaja para um local sem riscos\n");
        printf("\te) Nenhuma das alternativas\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'c' || perguntas == 'C') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/19", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

/********************************** PERGUNTA 20 ************************************/

        nivel_1();
        printf("\tPERGUNTA 20\n\n");
        printf("\tQual o meio de transporte mais seguro para se fazer uma viagem?\n\n");
        printf("\ta) Ônibus\n");
        printf("\tb) Avião\n");
        printf("\tc) Taxi/uber\n");
        printf("\td) Automóvel pessoal\n");
        printf("\te) Transporte público\n\n");
        printf("\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'd' || perguntas == 'D') {
        printf("\n\n\tCORRETO!!!");
        xp1 = xp1 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/20", xp1);
        getchar();
        printf ("\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

        if (xp1 >= 12) {

        system("cls");
        printf("\n\n\n");
        printf("\t*============================================================*\n");
        printf("\t|            PARABÉNS, VOCÊ PASSOU PARA O NÍVEL 2            |\n");
        printf("\t*============================================================*\n");
        printf("\n\n\n\tAcertos: %d/20", xp1);
         printf("\n\n\n\tNível 1");
        printf("\t\tXP = %d%%", xp1*5);
        printf ("\n\n\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

        }

        else if (xp1 < 12) {

        system("cls");
        printf("\n\n\n");
        printf("\t*============================================================*\n");
        printf("\t|          VOCÊ NÃO CONSEGUIU PASSAR PARA O NÍVEL 2          |\n");
        printf("\t*============================================================*\n");
        printf("\n\n\n\tAcertos: %d/20", xp1);
         printf("\n\n\n\tNível 1");
        printf("\t\tXP = %d%%", xp1 * 5);
        printf ("\n\n\n\n\n\tPressione \"enter\" para voltar ao menu...");
        getchar();
        system("cls");
        goto voltar;

        }

/****************************** PERGUNTA 1 - V ou F ********************************/

        nivel_2();
        printf("\tPERGUNTA 1\n\n");
        printf("\tTodas as informações que circulam sobre a COVID-19 são corretas?\n\n");
        printf("\tV - Verdadeiro\n");
        printf("\tF - Falso\n");
        printf("\n\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'f' || perguntas == 'F') {
        printf("\n\n\tCORRETO!!!");
        xp2 = xp2 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/1", xp2);
        printf("\n\n\n\tDurante a pandemia está tendo muitas “fake news”. Cheque sempre \n");
        printf("\ta fonte da notícia e confie nos dados médicos.\n");
        getchar();
        printf("\n\n\tPressione \"enter\" para continuar...");
        getchar();

/****************************** PERGUNTA 2 - V ou F ********************************/

        nivel_2();
        printf("\tPERGUNTA 2\n\n");
        printf("\tIdosos e pessoas com o sistema imunológico comprometido estão no grupo de risco?\n\n");
        printf("\tV - Verdadeiro\n");
        printf("\tF - Falso\n");
        printf("\n\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'v' || perguntas == 'V') {
        printf("\n\n\tCORRETO!!!");
        xp2 = xp2 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/2", xp2);
        printf("\n\n\n\tIdosos e pessoas que já sofrem com outras infecções ou doenças estão mais \n");
        printf("\tpropensos a desenvolver uma forma grave da COVID-19 e/ou ter complicações.\n");
        getchar();
        printf("\n\n\tPressione \"enter\" para continuar...");
        getchar();

/****************************** PERGUNTA 3 - V ou F ********************************/

        nivel_2();
        printf("\tPERGUNTA 3\n\n");
        printf("\tA quarentena e o isolamento social são ações exageradas para combater a pandemia?\n\n");
        printf("\tV - Verdadeiro\n");
        printf("\tF - Falso\n");
        printf("\n\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'f' || perguntas == 'F') {
        printf("\n\n\tCORRETO!!!");
        xp2 = xp2 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/3", xp2);
        printf("\n\n\n\tMedidas como essas, já adotadas por muitos países, são de extrema importância, \n");
        printf("\tporque podem retardar a transmissão do vírus, reduzindo o aumento de casos.\n");
        getchar();
        printf("\n\n\tPressione \"enter\" para continuar...");
        getchar();

/****************************** PERGUNTA 4 - V ou F ********************************/

        nivel_2();
        printf("\tPERGUNTA 4\n\n");
        printf("\tCães e gatos podem infectar os donos?\n\n");
        printf("\tV - Verdadeiro\n");
        printf("\tF - Falso\n");
        printf("\n\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'f' || perguntas == 'F') {
        printf("\n\n\tCORRETO!!!");
        xp2 = xp2 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/4", xp2);
        printf("\n\n\n\tA doença só é transmitida entre humanos.\n");
        getchar();
        printf("\n\n\tPressione \"enter\" para continuar...");
        getchar();

/****************************** PERGUNTA 5 - V ou F ********************************/

        nivel_2();
        printf("\tPERGUNTA 5\n\n");
        printf("\tO uso de máscara hospitalar é a melhor forma de se proteger da COVID-19?\n\n");
        printf("\tV - Verdadeiro\n");
        printf("\tF - Falso\n");
        printf("\n\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'f' || perguntas == 'F') {
        printf("\n\n\tCORRETO!!!");
        xp2 = xp2 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/5", xp2);
        printf("\n\n\n\tA máscara só é indicada para pessoas com sintomas respiratórios, casos suspeitos\n");
        printf("\tou confirmados, profissionais de saúde e cuidadores de pacientes infectados.\n");
        getchar();
        printf("\n\n\tPressione \"enter\" para continuar...");
        getchar();

/****************************** PERGUNTA 6 - V ou F ********************************/

        nivel_2();
        printf("\tPERGUNTA 6\n\n");
        printf("\tFestas com aglomeração de pessoas são um risco de exposição ao vírus?\n\n");
        printf("\tV - Verdadeiro\n");
        printf("\tF - Falso\n");
        printf("\n\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'v' || perguntas == 'V') {
        printf("\n\n\tCORRETO!!!");
        xp2 = xp2 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/6", xp2);
        printf("\n\n\n\tLocais com grande concentração de pessoas representam mais riscos.\n");
        getchar();
        printf("\n\n\tPressione \"enter\" para continuar...");
        getchar();

/****************************** PERGUNTA 7 - V ou F ********************************/

        nivel_2();
        printf("\tPERGUNTA 7\n\n");
        printf("\tPacientes suspeitos ou confirmados de COVID-19 podem receber visitas?\n\n");
        printf("\tV - Verdadeiro\n");
        printf("\tF - Falso\n");
        printf("\n\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'f' || perguntas == 'F') {
        printf("\n\n\tCORRETO!!!");
        xp2 = xp2 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/7", xp2);
        printf("\n\n\n\tAs visitas são proibidas tanto no isolamento domiciliar quanto no hospital.\n");
        getchar();
        printf("\n\n\tPressione \"enter\" para continuar...");
        getchar();

/****************************** PERGUNTA 8 - V ou F ********************************/

        nivel_2();
        printf("\tPERGUNTA 8\n\n");
        printf("\tHá restrições alimentares relacionadas a COVID-19?\n\n");
        printf("\tV - Verdadeiro\n");
        printf("\tF - Falso\n");
        printf("\n\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'f' || perguntas == 'F') {
        printf("\n\n\tCORRETO!!!");
        xp2 = xp2 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/8", xp2);
        printf("\n\n\n\tNão há restrições comprovadas até o momento.\n");
        getchar();
        printf("\n\n\tPressione \"enter\" para continuar...");
        getchar();

/****************************** PERGUNTA 9 - V ou F ********************************/

        nivel_2();
        printf("\tPERGUNTA 9\n\n");
        printf("\tOs antibióticos são eficazes na prevenção ou tratamento do vírus?\n\n");
        printf("\tV - Verdadeiro\n");
        printf("\tF - Falso\n");
        printf("\n\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'f' || perguntas == 'F') {
        printf("\n\n\tCORRETO!!!");
        xp2 = xp2 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/9", xp2);
        printf("\n\n\n\tOs antibióticos não funcionam contra vírus.\n");
        getchar();
        printf("\n\n\tPressione \"enter\" para continuar...");
        getchar();

/****************************** PERGUNTA 10 - V ou F *******************************/

        nivel_2();
        printf("\tPERGUNTA 10\n\n");
        printf("\tÉ perigoso dormir com uma pessoa que teve o novo coronavírus?\n\n");
        printf("\tV - Verdadeiro\n");
        printf("\tF - Falso\n");
        printf("\n\tSua resposta: ");
        scanf("%s", &perguntas);

        if (perguntas == 'v' || perguntas == 'V') {
        printf("\n\n\tCORRETO!!!");
        xp2 = xp2 + 1;
        } else {
        printf("\n\n\tERRADO!!!");
        }
        printf("\tAcertos: %d/10", xp2);
        printf("\n\n\n\tRecomenda-se o isolamento da pessoa com o novo coronavírus em quarto individual.\n");
        getchar();
        printf("\n\n\tPressione \"enter\" para continuar...");
        getchar();

        if (xp2 >= 6) {

        system("cls");
        printf("\n\n\n");
        printf("\t*============================================================*\n");
        printf("\t|            PARABÉNS, VOCÊ PASSOU PARA O NÍVEL 3            |\n");
        printf("\t*============================================================*\n");
        printf("\n\n\n\tAcertos: %d/20", xp2);
        printf("\n\n\n\tNível 1");
        printf("\t\tXP = %d%%", xp1 * 5);
        printf("\n\n\n\tNível 2");
        printf("\t\tXP = %d%%", xp2 * 10);
        printf ("\n\n\n\n\n\tPressione \"enter\" para continuar...");
        getchar();

        }

        else if (xp2 < 6) {

        system("cls");
        printf("\n\n\n");
        printf("\t*============================================================*\n");
        printf("\t|          VOCÊ NÃO CONSEGUIU PASSAR PARA O NÍVEL 2          |\n");
        printf("\t*============================================================*\n");
        printf("\n\n\n\tAcertos: %d/20", xp2);
        printf("\n\n\n\tNível 1");
        printf("\t\tXP = %d%%", xp1*5);
        printf("\n\n\n\tNível 2");
        printf("\t\tXP = %d%%", xp2*10);
        printf ("\n\n\n\n\n\tPressione \"enter\" para voltar ao menu...");
        getchar();
        system("cls");
        goto voltar;

        }

/************************ REDEFININDO O VALOR DAS VARIÁVEIS ************************/

        forca_1 = 1; forca_2 = 1; forca_3 = 1; forca_4 = 1; forca_5 = 1; erros = 0;

/************************************* FORCA 1 *************************************/

        while(forca_1 != 0) {

        char i = '_', n = '_', f = '_', e = '_', c = '_', o = '_', s = '_', a = '_';

        while(erros == 0) {

        nivel_3();
        printf ("\t FORCA 1\n\n");
        printf ("\t  _ _ _ _        Erros restantes: 3              \n");
        printf ("\t |       |                                       \n");
        printf ("\t |       |                                       \n");
        printf ("\t |               Dica: COVID-19 é uma doença:    \n");
        printf ("\t |                                               \n");
        printf ("\t |                                               \n");
        printf ("\t |               %c %c %c %c %c %c %c %c %c %c   \n", i,n,f,e,c,c,i,o,s,a);
        printf ("\t |                                               \n");
        printf ("\t |                                               \n");
        printf ("\t_|_              a b c d e f g h i j k l m n o p q r s t u v w x y z \n");
        printf("\n\n\tDigite um letra: ");
        scanf("%s", &palpite);

        if (palpite!='i' && palpite!='n' && palpite!='f' && palpite!='e' && palpite!='c' && palpite!='o' && palpite!='s' && palpite!='a') {

            erros = erros + 1;

            } //fecha o if

            if(palpite == 'i') { i = 'i'; }
            if(palpite == 'n') { n = 'n'; }
            if(palpite == 'f') { f = 'f'; }
            if(palpite == 'e') { e = 'e'; }
            if(palpite == 'c') { c = 'c'; }
            if(palpite == 'o') { o = 'o'; }
            if(palpite == 's') { s = 's'; }
            if(palpite == 'a') { a = 'a'; }

            if(i=='i' && n=='n' && f=='f' && e=='e' && c=='c' && o=='o' && s=='s' && a=='a') {

            xp3 = xp3 + 1;

            nivel_3();
            printf ("\t FORCA 1\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 3              \n");
            printf ("\t |       |                                       \n");
            printf ("\t |       |                                       \n");
            printf ("\t |               Dica: COVID-19 é uma doença:    \n");
            printf ("\t |                                               \n");
            printf ("\t |                                               \n");
            printf ("\t |               %c %c %c %c %c %c %c %c %c %c   \n", i,n,f,e,c,c,i,o,s,a);
            printf ("\t |                                               \n");
            printf ("\t |                                               \n");
            printf ("\t_|_                                              \n");

            printf("\n\tAcertos: %d/1", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            forca_1 = 0;
            erros = 4;

            }

        } //fecha o while 0

        while (erros == 1) {

            nivel_3();
            printf ("\t FORCA 1\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 2           \n");
            printf ("\t |       |                                     \n");
            printf ("\t |       |                                     \n");
            printf ("\t |     (º_º)     Dica: COVID-19 é uma doença:  \n");
            printf ("\t |                                             \n");
            printf ("\t |                                             \n");
            printf ("\t |               %c %c %c %c %c %c %c %c %c %c \n", i,n,f,e,c,c,i,o,s,a);
            printf ("\t |                                             \n");
            printf ("\t |                                             \n");
            printf ("\t_|_              a b c d e f g h i j k l m n o p q r s t u v w x y z \n");
            printf("\n\n\tDigite um letra: ");
            scanf("%s", &palpite);

            if (palpite!='i' && palpite!='n' && palpite!='f' && palpite!='e' && palpite!='c' && palpite!='o' && palpite!='s' && palpite!='a') {

                erros = erros + 1;

                } //fecha o if

            if(palpite == 'i') { i = 'i'; }
            if(palpite == 'n') { n = 'n'; }
            if(palpite == 'f') { f = 'f'; }
            if(palpite == 'e') { e = 'e'; }
            if(palpite == 'c') { c = 'c'; }
            if(palpite == 'o') { o = 'o'; }
            if(palpite == 's') { s = 's'; }
            if(palpite == 'a') { a = 'a'; }

            if(i=='i' && n=='n' && f=='f' && e=='e' && c=='c' && o=='o' && s=='s' && a=='a') {

            xp3 = xp3 + 1;

            nivel_3();
            printf ("\t FORCA 1\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 2              \n");
            printf ("\t |       |                                       \n");
            printf ("\t |       |                                       \n");
            printf ("\t |     (º_º)     Dica: COVID-19 é uma doença:    \n");
            printf ("\t |                                               \n");
            printf ("\t |                                               \n");
            printf ("\t |               %c %c %c %c %c %c %c %c %c %c   \n", i,n,f,e,c,c,i,o,s,a);
            printf ("\t |                                               \n");
            printf ("\t |                                               \n");
            printf ("\t_|_                                              \n");

            printf("\n\tAcertos: %d/1", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            forca_1 = 0;
            erros = 4;

            } //fecha o if

        } //fecha o while 1

        while (erros == 2) {

            nivel_3();
            printf ("\t FORCA 1\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 1            \n");
            printf ("\t |       |                                     \n");
            printf ("\t |       |                                     \n");
            printf ("\t |     (º_º)     Dica: COVID-19 é uma doença:  \n");
            printf ("\t |       |                                     \n");
            printf ("\t |      /|\\                                   \n");
            printf ("\t |               %c %c %c %c %c %c %c %c %c %c \n", i,n,f,e,c,c,i,o,s,a);
            printf ("\t |                                             \n");
            printf ("\t |                                             \n");
            printf ("\t_|_              a b c d e f g h i j k l m n o p q r s t u v w x y z \n");
            printf("\n\n\tDigite um letra: ");
            scanf("%s", &palpite);

            if (palpite!='i' && palpite!='n' && palpite!='f' && palpite!='e' && palpite!='c' && palpite!='o' && palpite!='s' && palpite!='a') {

                erros = erros + 1;

            } //fecha o if

            if(palpite == 'i') { i = 'i'; }
            if(palpite == 'n') { n = 'n'; }
            if(palpite == 'f') { f = 'f'; }
            if(palpite == 'e') { e = 'e'; }
            if(palpite == 'c') { c = 'c'; }
            if(palpite == 'o') { o = 'o'; }
            if(palpite == 's') { s = 's'; }
            if(palpite == 'a') { a = 'a'; }

            if(i=='i' && n=='n' && f=='f' && e=='e' && c=='c' && o=='o' && s=='s' && a=='a') {

            xp3 = xp3 + 1;

            nivel_3();
            printf ("\t FORCA 1\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 1              \n");
            printf ("\t |       |                                       \n");
            printf ("\t |       |                                       \n");
            printf ("\t |     (º_º)     Dica: COVID-19 é uma doença:    \n");
            printf ("\t |       |                                       \n");
            printf ("\t |      /|\\                                     \n");
            printf ("\t |               %c %c %c %c %c %c %c %c %c %c   \n", i,n,f,e,c,c,i,o,s,a);
            printf ("\t |                                               \n");
            printf ("\t |                                               \n");
            printf ("\t_|_                                              \n");

            printf("\n\tAcertos: %d/1", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            forca_1 = 0;
            erros = 4;

            } //fecha if
        }    //fecha while 2

        if (erros == 3) {

            system("cls");
            nivel_3();
            printf ("\t FORCA 1\n\n");
            printf ("\t  _ _ _ _        VOCÊ FOI ENFORCADO!!!        \n");
            printf ("\t |       |                                    \n");
            printf ("\t |       |                                    \n");
            printf ("\t |     (º_º)     Dica: COVID-19 é uma doença: \n");
            printf ("\t |       |                                    \n");
            printf ("\t |      /|\\                                  \n");
            printf ("\t |       |       A palavra era: infecciosa    \n");
            printf ("\t |      / \\                                  \n");
            printf ("\t |                                            \n");
            printf ("\t_|_                                           \n");

            printf("\n\tAcertos: %d/1", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_1 = 0;

            } //fecha o if

        } //fecha o while forca_1

/************************************* FORCA 2 *************************************/

        while(forca_2 != 0) {

        char i = '_', d = '_', o = '_', s = '_', a = '_';
        erros = 0;

        while(erros == 0) {

        nivel_3();
        printf ("\t FORCA 2\n\n");
        printf ("\t  _ _ _ _        Erros restantes: 3                                 \n");
        printf ("\t |       |                                                           \n");
        printf ("\t |       |                                                           \n");
        printf ("\t |               Dica: As pessoas mais afetadas pelo vírus são:      \n");
        printf ("\t |                                                                   \n");
        printf ("\t |                                                                   \n");
        printf ("\t |               %c %c %c %c %c %c                                   \n", i,d,o,s,a,s);
        printf ("\t |                                                                   \n");
        printf ("\t |                                                                   \n");
        printf ("\t_|_              a b c d e f g h i j k l m n o p q r s t u v w x y z \n");
        printf("\n\n\tDigite um letra: ");
        scanf("%s", &palpite);


            if (palpite!='i' && palpite!='d' && palpite!='o' && palpite!='s' && palpite!='a') {

                erros = erros + 1;

            } //fecha o if

            if(palpite == 'i') { i = 'i'; }
            if(palpite == 'd') { d = 'd'; }
            if(palpite == 'o') { o = 'o'; }
            if(palpite == 's') { s = 's'; }
            if(palpite == 'a') { a = 'a'; }

            if(i=='i' && d=='d' && o=='o' && s=='s' && a=='a') {

            xp3 = xp3 + 1;

            nivel_3();
            printf ("\t FORCA 2\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 3                                  \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |               Dica: As pessoas mais afetadas pelo vírus são:      \n");
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t |               %c %c %c %c %c %c                                   \n", i,d,o,s,a,s);
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t_|_                                                                  \n");

            printf("\n\tAcertos: %d/2", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_2 = 0;

            }
        }     //fecha o while 0

        while (erros == 1) {

            nivel_3();
            printf ("\t FORCA 2\n\n");
            printf ("\t  _ _ _ _        Tentativas restantes: 2                             \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |     (º_º)     Dica: As pessoas mais afetadas pelo vírus são:      \n");
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t |               %c %c %c %c %c %c                                   \n", i,d,o,s,a,s);
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t_|_              a b c d e f g h i j k l m n o p q r s t u v w x y z \n");
            printf("\n\n\tDigite um letra: ");
            scanf("%s", &palpite);

            if (palpite!='i' && palpite!='d' && palpite!='o' && palpite!='s' && palpite!='a') {

                erros = erros + 1;

            } //fecha o if

            if(palpite == 'i') { i = 'i'; }
            if(palpite == 'd') { d = 'd'; }
            if(palpite == 'o') { o = 'o'; }
            if(palpite == 's') { s = 's'; }
            if(palpite == 'a') { a = 'a'; }

            if(i=='i' && d=='d' && o=='o' && s=='s' && a=='a') {

            xp3 = xp3 + 1;

            nivel_3();
            printf ("\t FORCA 2\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 2                                  \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |     (º_º)     Dica: As pessoas mais afetadas pelo vírus são:      \n");
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t |               %c %c %c %c %c %c                                   \n", i,d,o,s,a,s);
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t_|_                                                                  \n");

            printf("\n\tAcertos: %d/2", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_2 = 0;

            }

        } //fecha o while

        while (erros == 2) {

            nivel_3();
            printf ("\t FORCA 2\n\n");
            printf ("\t  _ _ _ _        Tentativas restantes: 1                             \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |     (º_º)     Dica: As pessoas mais afetadas pelo vírus são:      \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |      /|\\                                                         \n");
            printf ("\t |               %c %c %c %c %c %c                                   \n", i,d,o,s,a,s);
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t_|_              a b c d e f g h i j k l m n o p q r s t u v w x y z \n");
            printf("\n\n\tDigite um letra: ");
            scanf("%s", &palpite);

            if (palpite!='i' && palpite!='d' && palpite!='o' && palpite!='s' && palpite!='a') {

                erros = erros + 1;

            } //fecha o if

            if(palpite == 'i') { i = 'i'; }
            if(palpite == 'd') { d = 'd'; }
            if(palpite == 'o') { o = 'o'; }
            if(palpite == 's') { s = 's'; }
            if(palpite == 'a') { a = 'a'; }

            if(i=='i' && d=='d' && o=='o' && s=='s' && a=='a') {

            xp3 = xp3 + 1;

            nivel_3();
            printf ("\t FORCA 2\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 1                                  \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |     (º_º)     Dica: As pessoas mais afetadas pelo vírus são:      \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |      /|\\                                                         \n");
            printf ("\t |               %c %c %c %c %c %c                                   \n", i,d,o,s,a,s);
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t_|_                                                                  \n");

            printf("\n\tAcertos: %d/2", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_2 = 0;

            } //fecha if
        }    //fecha while 2

        if (erros == 3) {

            system("cls");
            nivel_3();
            printf ("\t FORCA 2\n\n");
            printf ("\t  _ _ _ _        VOCÊ FOI ENFORCADO!!!                          \n");
            printf ("\t |       |                                                      \n");
            printf ("\t |       |                                                      \n");
            printf ("\t |     (º_º)     Dica: As pessoas mais afetadas pelo vírus são: \n");
            printf ("\t |       |                                                      \n");
            printf ("\t |      /|\\                                                    \n");
            printf ("\t |       |       A palavra era: idosas                          \n");
            printf ("\t |      / \\                                                    \n");
            printf ("\t |                                                              \n");
            printf ("\t_|_                                                             \n");

            printf("\n\tAcertos: %d/2", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_2 = 0;

            } //fecha o if erros3

        } //fecha o while forca_2

/************************************* FORCA 3 *************************************/

        while(forca_3 != 0) {

        char q = '_', u = '_', a = '_', r = '_', e = '_', n = '_', t = '_';
        erros = 0;

        while(erros == 0) {

        nivel_3();
        printf ("\t FORCA 3\n\n");
        printf ("\t  _ _ _ _        Erros restantes: 3                                  \n");
        printf ("\t |       |                                                           \n");
        printf ("\t |       |                                                           \n");
        printf ("\t |               Dica: Isolamento adotado para diminuir casos:       \n");
        printf ("\t |                                                                   \n");
        printf ("\t |                                                                   \n");
        printf ("\t |               %c %c %c %c %c %c %c %c %c %c                       \n", q,u,a,r,e,n,t,e,n,a);
        printf ("\t |                                                                   \n");
        printf ("\t |                                                                   \n");
        printf ("\t_|_              a b c d e f g h i j k l m n o p q r s t u v w x y z \n");
        printf("\n\n\tDigite um letra: ");
        scanf("%s", &palpite);

            if (palpite!='q' && palpite!='u' && palpite!='a' && palpite!='r' && palpite!='e' && palpite!='n' && palpite!='t') {

                erros = erros + 1;

            } //fecha o if

            if(palpite == 'q') { q = 'q'; }
            if(palpite == 'u') { u = 'u'; }
            if(palpite == 'a') { a = 'a'; }
            if(palpite == 'r') { r = 'r'; }
            if(palpite == 'e') { e = 'e'; }
            if(palpite == 'n') { n = 'n'; }
            if(palpite == 't') { t = 't'; }

            if(q=='q' && u=='u' && a=='a' && r=='r' && e=='e' && n=='n' && t=='t') {

            xp3 = xp3 + 1;

            nivel_3();
            printf ("\t FORCA 3\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 3                                  \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |               Dica: Isolamento adotado para diminuir casos:       \n");
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t |               %c %c %c %c %c %c %c %c %c %c                       \n", q,u,a,r,e,n,t,e,n,a);
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t_|_                                                                  \n");

            printf("\n\tAcertos: %d/3", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_3 = 0;

            }
        }     //fecha o while 0

        while (erros == 1) {

            nivel_3();
            printf ("\t FORCA 3\n\n");
            printf ("\t  _ _ _ _        Tentativas restantes: 2                             \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |     (º_º)     Dica: Isolamento adotado para diminuir casos:       \n");
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t |               %c %c %c %c %c %c %c %c %c %c                       \n", q,u,a,r,e,n,t,e,n,a);
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t_|_              a b c d e f g h i j k l m n o p q r s t u v w x y z \n");
            printf("\n\n\tDigite um letra: ");
            scanf("%s", &palpite);

            if (palpite!='q' && palpite!='u' && palpite!='a' && palpite!='r' && palpite!='e' && palpite!='n' && palpite!='t') {

                erros = erros + 1;

            } //fecha o if

            if(palpite == 'q') { q = 'q'; }
            if(palpite == 'u') { u = 'u'; }
            if(palpite == 'a') { a = 'a'; }
            if(palpite == 'r') { r = 'r'; }
            if(palpite == 'e') { e = 'e'; }
            if(palpite == 'n') { n = 'n'; }
            if(palpite == 't') { t = 't'; }

            if(q=='q' && u=='u' && a=='a' && r=='r' && e=='e' && n=='n' && t=='t') {

            xp3 = xp3 + 1;

            nivel_3();
            printf ("\t FORCA 3\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 2                                  \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |     (º_º)     Dica: Isolamento adotado para diminuir casos:       \n");
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t |               %c %c %c %c %c %c %c %c %c %c                       \n", q,u,a,r,e,n,t,e,n,a);
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t_|_                                                                  \n");

            printf("\n\tAcertos: %d/3", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_3 = 0;

            }

        } //fecha o while

        while (erros == 2) {

            nivel_3();
            printf ("\t FORCA 3\n\n");
            printf ("\t  _ _ _ _        Tentativas restantes: 1                             \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |     (º_º)     Dica: Isolamento adotado para diminuir casos:       \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |      /|\\                                                         \n");
            printf ("\t |               %c %c %c %c %c %c %c %c %c %c                       \n", q,u,a,r,e,n,t,e,n,a);
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t_|_              a b c d e f g h i j k l m n o p q r s t u v w x y z \n");
            printf("\n\n\tDigite um letra: ");
            scanf("%s", &palpite);

            if (palpite!='q' && palpite!='u' && palpite!='a' && palpite!='r' && palpite!='e' && palpite!='n' && palpite!='t') {

                erros = erros + 1;

            } //fecha o if

            if(palpite == 'q') { q = 'q'; }
            if(palpite == 'u') { u = 'u'; }
            if(palpite == 'a') { a = 'a'; }
            if(palpite == 'r') { r = 'r'; }
            if(palpite == 'e') { e = 'e'; }
            if(palpite == 'n') { n = 'n'; }
            if(palpite == 't') { t = 't'; }

            if(q=='q' && u=='u' && a=='a' && r=='r' && e=='e' && n=='n' && t=='t') {

            xp3 = xp3 + 1;

            nivel_3();
            printf ("\t FORCA 3\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 1                                  \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |     (º_º)     Dica: Isolamento adotado para diminuir casos:       \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |      /|\\                                                         \n");
            printf ("\t |               %c %c %c %c %c %c %c %c %c %c                       \n", q,u,a,r,e,n,t,e,n,a);
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t_|_                                                                  \n");

            printf("\n\tAcertos: %d/3", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_3 = 0;

            } //fecha if
        }    //fecha while 2

        if (erros == 3) {

            system("cls");
            nivel_3();
            printf ("\t FORCA 3\n\n");
            printf ("\t  _ _ _ _        VOCÊ FOI ENFORCADO!!!                          \n");
            printf ("\t |       |                                                      \n");
            printf ("\t |       |                                                      \n");
            printf ("\t |     (º_º)     Dica: Isolamento adotado para diminuir casos:  \n");
            printf ("\t |       |                                                      \n");
            printf ("\t |      /|\\                                                    \n");
            printf ("\t |       |       A palavra era: quarentena                      \n");
            printf ("\t |      / \\                                                    \n");
            printf ("\t |                                                              \n");
            printf ("\t_|_                                                             \n");

            printf("\n\tAcertos: %d/3", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_3 = 0;

            } //fecha o if erros3

        } //fecha o while forca_2

/************************************* FORCA 4 *************************************/

        while(forca_4 != 0) {

        char s = '_', u = '_', r = '_', t = '_', o = '_';
        erros = 0;

        while(erros == 0) {

        nivel_3();
        printf ("\t FORCA 4\n\n");
        printf ("\t  _ _ _ _        Erros restantes: 3                                  \n");
        printf ("\t |       |                                                           \n");
        printf ("\t |       |                                                           \n");
        printf ("\t |               Dica: Casos repentinos de uma determinada doença:   \n");
        printf ("\t |                                                                   \n");
        printf ("\t |                                                                   \n");
        printf ("\t |               %c %c %c %c %c                                      \n", s,u,r,t,o);
        printf ("\t |                                                                   \n");
        printf ("\t |                                                                   \n");
        printf ("\t_|_              a b c d e f g h i j k l m n o p q r s t u v w x y z \n");
        printf("\n\n\tDigite um letra: ");
        scanf("%s", &palpite);

            if (palpite!='s' && palpite!='u' && palpite!='r' && palpite!='t' && palpite!='o') {

                erros = erros + 1;

            } //fecha o if

            if(palpite == 's') { s = 's'; }
            if(palpite == 'u') { u = 'u'; }
            if(palpite == 'r') { r = 'r'; }
            if(palpite == 't') { t = 't'; }
            if(palpite == 'o') { o = 'o'; }

            if(s=='s' && u=='u' && r=='r' && t=='t' && o=='o') {

            xp3 = xp3 + 1;

            nivel_3();
            printf ("\t FORCA 4\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 3                                  \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |               Dica: Casos repentinos de uma determinada doença:   \n");
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t |               %c %c %c %c %c                                      \n", s,u,r,t,o);
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t_|_                                                                  \n");

            printf("\n\tAcertos: %d/4", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_4 = 0;

            }
        }     //fecha o while 0

        while (erros == 1) {

            nivel_3();
            printf ("\t FORCA 4\n\n");
            printf ("\t  _ _ _ _        Tentativas restantes: 2                             \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |     (º_º)     Dica: Casos repentinos de uma determinada doença:   \n");
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t |               %c %c %c %c %c                                      \n", s,u,r,t,o);
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t_|_              a b c d e f g h i j k l m n o p q r s t u v w x y z \n");
            printf("\n\n\tDigite um letra: ");
            scanf("%s", &palpite);

            if (palpite!='s' && palpite!='u' && palpite!='r' && palpite!='t' && palpite!='o') {

                erros = erros + 1;

            } //fecha o if

            if(palpite == 's') { s = 's'; }
            if(palpite == 'u') { u = 'u'; }
            if(palpite == 'r') { r = 'r'; }
            if(palpite == 't') { t = 't'; }
            if(palpite == 'o') { o = 'o'; }

            if(s=='s' && u=='u' && r=='r' && t=='t' && o=='o') {

            xp3 = xp3 + 1;

            nivel_3();
            printf ("\t FORCA 4\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 2                                  \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |     (º_º)     Dica: Casos repentinos de uma determinada doença:   \n");
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t |               %c %c %c %c %c                                      \n", s,u,r,t,o);
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t_|_                                                                  \n");

            printf("\n\tAcertos: %d/4", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_4 = 0;

            }

        } //fecha o while

        while (erros == 2) {

            nivel_3();
            printf ("\t FORCA 4\n\n");
            printf ("\t  _ _ _ _        Tentativas restantes: 1                             \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |     (º_º)     Dica: Casos repentinos de uma determinada doença:   \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |      /|\\                                                         \n");
            printf ("\t |               %c %c %c %c %c                                      \n", s,u,r,t,o);
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t_|_              a b c d e f g h i j k l m n o p q r s t u v w x y z \n");
            printf("\n\n\tDigite um letra: ");
            scanf("%s", &palpite);

            if (palpite!='s' && palpite!='u' && palpite!='r' && palpite!='t' && palpite!='o') {

                erros = erros + 1;

            } //fecha o if

            if(palpite == 's') { s = 's'; }
            if(palpite == 'u') { u = 'u'; }
            if(palpite == 'r') { r = 'r'; }
            if(palpite == 't') { t = 't'; }
            if(palpite == 'o') { o = 'o'; }

            if(s=='s' && u=='u' && r=='r' && t=='t' && o=='o') {

            xp3 = xp3 + 1;

            nivel_3();
            printf ("\t FORCA 4\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 1                                  \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |     (º_º)     Dica: Casos repentinos de uma determinada doença:   \n");
            printf ("\t |       |                                                           \n");
            printf ("\t |      /|\\                                                         \n");
            printf ("\t |               %c %c %c %c %c                                      \n", s,u,r,t,o);
            printf ("\t |                                                                   \n");
            printf ("\t |                                                                   \n");
            printf ("\t_|_                                                                  \n");

            printf("\n\tAcertos: %d/4", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_4 = 0;

            } //fecha if
        }    //fecha while 2

        if (erros == 3) {

            system("cls");
            nivel_3();
            printf ("\t FORCA 4\n\n");
            printf ("\t  _ _ _ _        VOCÊ FOI ENFORCADO!!!                              \n");
            printf ("\t |       |                                                          \n");
            printf ("\t |       |                                                          \n");
            printf ("\t |     (º_º)     Dica: Casos repentinos de uma determinada doença:  \n");
            printf ("\t |       |                                                          \n");
            printf ("\t |      /|\\                                                        \n");
            printf ("\t |       |       A palavra era: surto                               \n");
            printf ("\t |      / \\                                                        \n");
            printf ("\t |                                                                  \n");
            printf ("\t_|_                                                                 \n");

            printf("\n\tAcertos: %d/4", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_4 = 0;

            } //fecha o if erros3

        } //fecha o while forca_2


/************************************* FORCA 5 *************************************/

        while(forca_5 != 0) {

        char a = '_', s = '_', i = '_', n = '_', t = '_', o = '_', m = '_', c = '_';
        erros = 0;

        while(erros == 0) {

        nivel_3();
        printf ("\t FORCA 5\n\n");
        printf ("\t  _ _ _ _        Erros restantes: 3                                           \n");
        printf ("\t |       |                                                                    \n");
        printf ("\t |       |                                                                    \n");
        printf ("\t |               Dica: Pessoa que não apresenta sinais ou sintomas de doença: \n");
        printf ("\t |                                                                            \n");
        printf ("\t |                                                                            \n");
        printf ("\t |               %c %c %c %c %c %c %c %c %c %c %c %c %c                       \n", a,s,s,i,n,t,o,m,a,t,i,c,o);
        printf ("\t |                                                                            \n");
        printf ("\t |                                                                            \n");
        printf ("\t_|_              a b c d e f g h i j k l m n o p q r s t u v w x y z          \n");
        printf("\n\n\tDigite um letra: ");
        scanf("%s", &palpite);


            if (palpite!='a' && palpite!='s' && palpite!='i' && palpite!='n' && palpite!='t' && palpite!='o' && palpite!='m' && palpite!='c') {

                erros = erros + 1;

            } //fecha o if

            if(palpite == 'a') { a = 'a'; }
            if(palpite == 's') { s = 's'; }
            if(palpite == 'i') { i = 'i'; }
            if(palpite == 'n') { n = 'n'; }
            if(palpite == 't') { t = 't'; }
            if(palpite == 'o') { o = 'o'; }
            if(palpite == 'm') { m = 'm'; }
            if(palpite == 'c') { c = 'c'; }

            if(a=='a' && s=='s' && i=='i' && n=='n' && t=='t' && o=='o' && m=='m' && c=='c') {

            xp3 = xp3 + 1;

            nivel_3();
            printf ("\t FORCA 5\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 3                                           \n");
            printf ("\t |       |                                                                    \n");
            printf ("\t |       |                                                                    \n");
            printf ("\t |               Dica: Pessoa que não apresenta sinais ou sintomas de doença: \n");
            printf ("\t |                                                                            \n");
            printf ("\t |                                                                            \n");
            printf ("\t |               %c %c %c %c %c %c %c %c %c %c %c %c %c                       \n", a,s,s,i,n,t,o,m,a,t,i,c,o);
            printf ("\t |                                                                            \n");
            printf ("\t |                                                                            \n");
            printf ("\t_|_                                                                           \n");

            printf("\n\tAcertos: %d/5", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_5 = 0;

            }
        }     //fecha o while 0

        while (erros == 1) {

            nivel_3();
            printf ("\t FORCA 5\n\n");
            printf ("\t  _ _ _ _        Tentativas restantes: 2                                        \n");
            printf ("\t |       |                                                                      \n");
            printf ("\t |       |                                                                      \n");
            printf ("\t |     (º_º)     Dica: Pessoa que não apresenta sinais ou sintomas de doença:   \n");
            printf ("\t |                                                                              \n");
            printf ("\t |                                                                              \n");
            printf ("\t |               %c %c %c %c %c %c %c %c %c %c %c %c %c                         \n", a,s,s,i,n,t,o,m,a,t,i,c,o);
            printf ("\t |                                                                              \n");
            printf ("\t |                                                                              \n");
            printf ("\t_|_              a b c d e f g h i j k l m n o p q r s t u v w x y z            \n");
            printf("\n\n\tDigite um letra: ");
            scanf("%s", &palpite);

            if (palpite!='a' && palpite!='s' && palpite!='i' && palpite!='n' && palpite!='t' && palpite!='o' && palpite!='m' && palpite!='c') {

                erros = erros + 1;

            } //fecha o if

            if(palpite == 'a') { a = 'a'; }
            if(palpite == 's') { s = 's'; }
            if(palpite == 'i') { i = 'i'; }
            if(palpite == 'n') { n = 'n'; }
            if(palpite == 't') { t = 't'; }
            if(palpite == 'o') { o = 'o'; }
            if(palpite == 'm') { m = 'm'; }
            if(palpite == 'c') { c = 'c'; }

            if(a=='a' && s=='s' && i=='i' && n=='n' && t=='t' && o=='o' && m=='m' && c=='c') {

            xp3 = xp3 + 1;

            nivel_3();
            printf ("\t FORCA 5\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 2                                           \n");
            printf ("\t |       |                                                                    \n");
            printf ("\t |       |                                                                    \n");
            printf ("\t |     (º_º)      Dica: Pessoa que não apresenta sinais ou sintomas de doença: \n");
            printf ("\t |                                                                            \n");
            printf ("\t |                                                                            \n");
            printf ("\t |               %c %c %c %c %c %c %c %c %c %c %c %c %c                       \n", a,s,s,i,n,t,o,m,a,t,i,c,o);
            printf ("\t |                                                                            \n");
            printf ("\t |                                                                            \n");
            printf ("\t_|_                                                                           \n");

            printf("\n\tAcertos: %d/5", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_5 = 0;

            }

        } //fecha o while

        while (erros == 2) {

            nivel_3();
            printf ("\t FORCA 5\n\n");
            printf ("\t  _ _ _ _        Tentativas restantes: 1                                      \n");
            printf ("\t |       |                                                                    \n");
            printf ("\t |       |                                                                    \n");
            printf ("\t |     (º_º)     Dica: Pessoa que não apresenta sinais ou sintomas de doença: \n");
            printf ("\t |       |                                                                    \n");
            printf ("\t |      /|\\                                                                  \n");
            printf ("\t |               %c %c %c %c %c %c %c %c %c %c %c %c %c                       \n", a,s,s,i,n,t,o,m,a,t,i,c,o);
            printf ("\t |                                                                            \n");
            printf ("\t |                                                                            \n");
            printf ("\t_|_              a b c d e f g h i j k l m n o p q r s t u v w x y z          \n");
            printf("\n\n\tDigite um letra: ");
            scanf("%s", &palpite);

            if (palpite!='a' && palpite!='s' && palpite!='i' && palpite!='n' && palpite!='t' && palpite!='o' && palpite!='m' && palpite!='c') {

                erros = erros + 1;

            } //fecha o if

            if(palpite == 'a') { a = 'a'; }
            if(palpite == 's') { s = 's'; }
            if(palpite == 'i') { i = 'i'; }
            if(palpite == 'n') { n = 'n'; }
            if(palpite == 't') { t = 't'; }
            if(palpite == 'o') { o = 'o'; }
            if(palpite == 'm') { m = 'm'; }
            if(palpite == 'c') { c = 'c'; }

            if(a=='a' && s=='s' && i=='i' && n=='n' && t=='t' && o=='o' && m=='m' && c=='c') {

            xp3 = xp3 + 1;

            nivel_3();
            printf ("\t FORCA 5\n\n");
            printf ("\t  _ _ _ _        Erros restantes: 1                                           \n");
            printf ("\t |       |                                                                    \n");
            printf ("\t |       |                                                                    \n");
            printf ("\t |     (º_º)     Dica: Pessoa que não apresenta sinais ou sintomas de doença: \n");
            printf ("\t |       |                                                                    \n");
            printf ("\t |      /|\\                                                                  \n");
            printf ("\t |               %c %c %c %c %c %c %c %c %c %c %c %c %c                       \n", a,s,s,i,n,t,o,m,a,t,i,c,o);
            printf ("\t |                                                                            \n");
            printf ("\t |                                                                            \n");
            printf ("\t_|_                                                                           \n");

            printf("\n\tAcertos: %d/5", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_5 = 0;

            } //fecha if
        }    //fecha while 2

        if (erros == 3) {

            system("cls");
            nivel_3();
            printf ("\t FORCA 5\n\n");
            printf ("\t  _ _ _ _        VOCÊ FOI ENFORCADO!!!                                        \n");
            printf ("\t |       |                                                                    \n");
            printf ("\t |       |                                                                    \n");
            printf ("\t |     (º_º)     Dica: Pessoa que não apresenta sinais ou sintomas de doença: \n");
            printf ("\t |       |                                                                    \n");
            printf ("\t |      /|\\                                                                  \n");
            printf ("\t |       |       A palavra era: assintomatico                                 \n");
            printf ("\t |      / \\                                                                  \n");
            printf ("\t |                                                                            \n");
            printf ("\t_|_                                                                           \n");

            printf("\n\tAcertos: %d/5", xp3);
            printf ("\n\n\tPressione \"enter\" para continuar...");
            getchar();
            getchar();

            erros = 4;
            forca_5 = 0;

            } //fecha o if erros3

        } //fecha o while forca_2

        if (xp3 >= 3) {}

        else if (xp3 < 3) {

        system("cls");
        printf("\n\n\n");
        printf("\t*============================================================*\n");
        printf("\t|          VOCÊ NÃO CONSEGUIU PASSAR PARA O NÍVEL 3          |\n");
        printf("\t*============================================================*\n");
        printf("\n\n\n\tAcertos: %d/5", xp3);
        printf("\n\n\n\tNível 1");
        printf("\t\tXP = %d%%", xp1*5);
        printf("\n\n\n\tNível 2");
        printf("\t\tXP = %d%%", xp2*10);
        printf("\n\n\n\tNível 3");
        printf("\t\tXP = %d%%", xp3*20);
        printf ("\n\n\n\n\n\tPressione \"enter\" para voltar ao menu...");
        getchar();
        system("cls");
        goto voltar;

        } //fecha o else if

/************************************* VITÓRIA *************************************/

        system("cls");
        printf("\t*============================================================*\n");
        printf("\t|      Parabéns pelos seus conhecimentos sobre COVID-19      |\n");
        printf("\t*============================================================*\n");

        printf("\n\t    Nível 1");
        printf("\t\tAcertos: %d/20", xp1);
        printf("\t\tXP = %d%%", xp1*5);

        printf("\n\t    Nível 2");
        printf("\t\tAcertos: %d/10", xp2);
        printf("\t\tXP = %d%%", xp2*10);

        printf("\n\t    Nível 3");
        printf("\t\tAcertos: %d/5", xp3);
        printf("\t\tXP = %d%%", xp3*20);

        printf("\n\t    Total  ");
        printf("\t\tAcertos: %d/35", xp1+xp2+xp3);
        printf("\t\tXP = %d%%", (xp1*5+xp2*10+xp3*20)/3);
        printf("\n\n");

        printf("\t\t            X X X X X X X X X X            \n");
        printf("\t\t      X X X X                 X X X X      \n");
        printf("\t\t     X      X                 X      X     \n");
        printf("\t\t       X     X               X     X       \n");
        printf("\t\t         X    X             X    X         \n");
        printf("\t\t           X    X         X    X           \n");
        printf("\t\t             X X  X     X  X X             \n");
        printf("\t\t                    X X                    \n");
        printf("\t\t                    X X                    \n");
        printf("\t\t                    X X                    \n");
        printf("\t\t                    X X                    \n");
        printf("\t\t                    X X                    \n");
        printf("\t\t                  X     X                  \n");
        printf("\t\t                X         X                \n");
        printf("\t\t              X      X      X              \n");
        printf("\t\t            X                 X            \n");
        printf("\t\t            X X X X X X X X X X            \n");

        printf ("\n\n\t    Pressione \"enter\" para voltar ao menu inicial...");
        getchar();
        system("cls");
        goto voltar;
        break;

    case 2: //opcoes

        voltar2:
        system("cls"); //limpa a tela
        printf("\n");
        printf("\t*--------------------------*\n");
        printf("\t|          OPÇÕES          |\n");
        printf("\t*--------------------------*\n");
        printf("\t|      0 - VOLTAR          |\n");
        printf("\t|      1 - MUDAR COR       |\n");
        printf("\t*--------------------------*\n");

        printf("\n\tO QUE VOCÊ DESEJA FAZER? ");
        scanf("%d", &opcoes);
        printf("\n\n");

        if (opcoes == 1) {

        voltar3:
        system("cls");
        printf("\t*--------------------------*--------------------------*\n");
        printf("\t|                QUAL COR VOCÊ DESEJA?                |\n");
        printf("\t*--------------------------*--------------------------*\n");
        printf("\t|      0 - VOLTAR          |    8 - CINZA             |\n");
        printf("\t|      1 - AZUL            |    9 - AZUL CLARO        |\n");
        printf("\t|      2 - VERDE           |   10 - VERDE CLARO       |\n");
        printf("\t|      3 - VERDE-ÁGUA      |   11 - VERDE-ÁGUA CLARO  |\n");
        printf("\t|      4 - VERMELHO        |   12 - VERMELHO CLARO    |\n");
        printf("\t|      5 - ROXO            |   13 - LILÁS             |\n");
        printf("\t|      6 - AMARELO         |   14 - AMARELO CLARO     |\n");
        printf("\t|      7 - BRANCO          |   15 - BRANCO BRILHANTE  |\n");
        printf("\t*--------------------------*--------------------------*\n");

        printf("\n\tDigite o número correspondente a cor desejada: ");
        scanf("%d", &cores);

            if (cores == 0) {

            goto voltar2;
            }
            else if (cores == 1) {

            system("color 1");
            goto voltar3;
            }
            else if (cores == 2) {

            system("color 2");
            goto voltar3;
            }
            else if (cores == 3) {

            system("color 3");
            goto voltar3;
            }
            else if (cores == 4) {

            system("color 4");
            goto voltar3;
            }
            else if (cores == 5) {

            system("color 5");
            goto voltar3;
            }
            else if (cores == 6) {

            system("color 6");
            goto voltar3;
            }
            else if (cores == 7) {

            system("color 7");
            goto voltar3;
            }
            else if (cores == 8) {

            system("color 8");
            goto voltar3;
            }
            else if (cores == 9) {

            system("color 9");
            goto voltar3;
            }
            else if (cores == 10) {

            system("color A");
            goto voltar3;
            }
            else if (cores == 11) {

            system("color B");
            goto voltar3;
            }
            else if (cores == 12) {

            system("color C");
            goto voltar3;
            }
            else if (cores == 13) {

            system("color D");
            goto voltar3;
            }
            else if (cores == 14) {

            system("color E");
            goto voltar3;
            }
            else if (cores == 15) {

            system("color F");
            goto voltar3;
            }
            else {

            system("cls");
            goto voltar3;
            }
        }     //fecha o if da opcao 1

        else if (opcoes == 0) {
            goto voltar;
            return 0;
        }

        else {
            goto voltar2;
        }

        break;

    case 3: //ajuda

        voltar4:
        system("cls"); //limpa a tela
        printf("\n");
        printf("\t*--------------------------*\n");
        printf("\t|          AJUDA           |\n");
        printf("\t*--------------------------*\n");
        printf("\t|      0 - VOLTAR          |\n");
        printf("\t|      1 - COMO JOGAR      |\n");
        printf("\t|      2 - GABARITO        |\n");
        printf("\t*--------------------------*\n");
        printf("\n");

        printf("\n\tO QUE VOCÊ DESEJA FAZER? ");
        scanf("%d", &opcoes);

        if (opcoes == 0) {
            goto voltar;
        }

        else if (opcoes == 1) {

        voltar6:
        system("cls"); //limpa a tela
        printf("\n");
        printf("\t*--------------------------*\n");
        printf("\t|        COMO JOGAR        |\n");
        printf("\t*--------------------------*\n");
        printf("\t|        0 - VOLTAR        |\n");
        printf("\t*--------------------------*\n");

        printf("\n\tO jogo possui 3 níveis que devem ser passados para chegar até a final\n");
        printf("\n\tO nível 1 do jogo possui 20 questões diferentes sobre o COVID-19: conceitos de biologia, ");
        printf("\n\tformas de transmissão e propagação, principais sintomas, dentre outros. Cada questão possui");
        printf("\n\t5 alternativas e apenas uma está correta. Caso tire acima de 60%% nas questões do nível 1,");
        printf("\n\tvocê ganhará um XP e irá para o nível 2 do jogo.\n");

        printf("\n\tO nível 2 possui 10 questões de verdadeiro ou falso sobre o COVID-19. Caso você tire uma nota");
        printf("\n\tacima de 60%% nas questões do nível 2, você ganhará mais um XP e irá para o nível 3 do jogo.\n");

        printf("\n\tNo nível 3 você deverá responder a 5 questões e as respostas estarão no modelo de uma forca.");
        printf("\n\tVocê terá direito a três erros até descobrir a palavra da forca e caso não descubra, a questão ");
        printf("\n\tserá contada como um erro. Caso você responda a 60%% corretamente, receberá mais um XP e chegará ");
        printf("\n\ta tela final onde poderá saber qual sua pontuação total.\n\n\n\n");

        printf("\tPARA VOLTAR AO MENU ANTERIOR DIGITE 0: ");
        scanf("%d", &opcoes);
        printf("\n\n");

        if (opcoes == 0) {
        goto voltar4;
        }

        else {
        goto voltar6;
          }
        }  // fecha o else if

        else if (opcoes == 2) {

        voltar7:
        system("cls"); //limpa a tela
        printf("\n");
        printf("\t*--------------------------*\n");
        printf("\t|         GABARITO         |\n");
        printf("\t*--------------------------*\n");
        printf("\t|        0 - VOLTAR        |\n");
        printf("\t*--------------------------*\n");
        printf("\n\n");
        printf("\t*--------------------------*    *--------------------------*\n");
        printf("\t|          Nível 1         |    |          Nível 3         |\n");
        printf("\t*--------------------------*    *--------------------------*\n");
        printf("\t|  1-B   2-B   3-E   4-C   |    |   1 - doença infecciosa  |\n");
        printf("\t|  5-B   6-D   7-A   8-A   |    |   2 - idosas             |\n");
        printf("\t|  9-C   10-E  11-D  12-B  |    |   3 - quarentena         |\n");
        printf("\t|  13-E  14-A  15-D  16-C  |    |   4 - surto              |\n");
        printf("\t|  17-E  18-A  19-C  20-D  |    |   5 - assintomático      |\n");
        printf("\t*--------------------------*    *--------------------------|\n");
        printf("\n\n");
        printf("\t*--------------------------*\n");
        printf("\t|          Nível 2         |\n");
        printf("\t*--------------------------*\n");
        printf("\t| 1-F  2-V  3-F  4-F  5-F  |\n");
        printf("\t| 6-V  7-F  8-F  9-F  10-V |\n");
        printf("\t*--------------------------*\n");
        printf("\n\n");
        printf("\tPARA VOLTAR AO MENU ANTERIOR DIGITE 0: ");
        scanf("%d", &opcoes);
        printf("\n\n");

        if(opcoes == 0) {
        goto voltar4;
        }

        else {
        goto voltar7;
          }
        }  //fecha o else if

        break;

    case 4: //creditos

        voltar5:
        system("cls"); //limpa a tela
        printf("\n");
        printf("\t*--------------------------*\n");
        printf("\t|         CRÉDITOS         |\n");
        printf("\t*--------------------------*\n");
        printf("\t|        0 - VOLTAR        |\n");
        printf("\t*--------------------------*\n");

        printf("\n\n\tDesenvolvido por Heitor Brasiel\n");
        Sleep(150);
        printf("\n\tAluno do IFTM - Instituto Federal do Triângulo Mineiro\n");
        Sleep(150);
        printf("\n\tCursando Engenharia Elétrica\n\n\n\n");
        Sleep(150);
        printf("\tPARA VOLTAR AO MENU ANTERIOR DIGITE 0: ");
        scanf("%d", &opcoes);
        printf("\n\n");

        if (opcoes == 0) {
            goto voltar;
        }

        else {
            goto voltar5;
        }

        break;

    case 5:

        system("exit");
        break;

    default:

        goto voltar;

    } //fecha o switch
} //fecha o int main

void covid() {

    printf("\n\n\n");
    printf("          __________   ____________  ___        ____   ____   ____           \n");
    printf("         /         /  /   ___     / |   |      /   /  /   /  /    \\         \n");
    printf("        /    _____/  /   /   /   /  |   |     /   /  /   /  /      \\        \n");
    printf("       /    /       /   /   /   /   |   |    /   /  /   /  /        \\       \n");
    printf("      /    /       /   /   /   /    |   |   /   /  /   /  /   /\\    |       \n");
    printf("     /    /_____  /   /___/   /     |   |__/   /  /   /  /   /_/    /    ___ \n");
    printf("    /          / /           /      |         /  /   /  /          /  / /__/ \n");
    printf("   /__________/ /___________/       |________/  /___/  /__________/  /  __/  \n");

}

void nivel_1(){

        system("cls"); //limpa a tela
        printf("\t*============================================================*\n");
        printf("\t|  ___   ___ ___ ___    ___ _________ ___           ____     |\n");
        printf("\t|  XXX_  XXX XXX XXX    XXX XXXXXXXXX XXX           XXXX     |\n");
        printf("\t|  XXXX_ XXX XXX XXX    XXX XXXXXXXXX XXX          XXXXX     |\n");
        printf("\t|  XXXXX_XXX XXX XXX_  _XXX XXX____   XXX         XX XXX     |\n");
        printf("\t|  XXXXXXXXX XXX  XXX__XXX  XXXXXXX   XXX            XXX     |\n");
        printf("\t|  XXX XXXXX XXX   XXXXXX   XXX______ XXX______      XXX     |\n");
        printf("\t|  XXX  XXXX XXX    XXXX    XXXXXXXXX XXXXXXXXX      XXX     |\n");
        printf("\t|  XXX   XXX XXX     XX     XXXXXXXXX XXXXXXXXX      XXX     |\n");
        printf("\t*============================================================*\n");
        printf("\n");
}

void nivel_2() {

        system("cls"); //limpa a tela
        printf("\t*============================================================*\n");
        printf("\t|  ___   ___ ___ ___    ___ _________ ___          _______   |\n");
        printf("\t|  XXX_  XXX XXX XXX    XXX XXXXXXXXX XXX          XXXXXXX   |\n");
        printf("\t|  XXXX_ XXX XXX XXX    XXX XXXXXXXXX XXX         XXX   XXX  |\n");
        printf("\t|  XXXXX_XXX XXX XXX_  _XXX XXX____   XXX         XX   XXX   |\n");
        printf("\t|  XXXXXXXXX XXX  XXX__XXX  XXXXXXX   XXX             XXX    |\n");
        printf("\t|  XXX XXXXX XXX   XXXXXX   XXX______ XXX______      XXX     |\n");
        printf("\t|  XXX  XXXX XXX    XXXX    XXXXXXXXX XXXXXXXXX     XXX      |\n");
        printf("\t|  XXX   XXX XXX     XX     XXXXXXXXX XXXXXXXXX    XXXXXXX   |\n");
        printf("\t*============================================================*\n");
        printf("\n");

}

void nivel_3() {

        system("cls"); //limpa a tela
        printf("\t*============================================================*\n");
        printf("\t|  ___   ___ ___ ___    ___ _________ ___         _______    |\n");
        printf("\t|  XXX_  XXX XXX XXX    XXX XXXXXXXXX XXX         XXXXXXX    |\n");
        printf("\t|  XXXX_ XXX XXX XXX    XXX XXXXXXXXX XXX              XX    |\n");
        printf("\t|  XXXXX_XXX XXX XXX_  _XXX XXX____   XXX              XX    |\n");
        printf("\t|  XXXXXXXXX XXX  XXX__XXX  XXXXXXX   XXX          XXXXXX    |\n");
        printf("\t|  XXX XXXXX XXX   XXXXXX   XXX______ XXX______        XX    |\n");
        printf("\t|  XXX  XXXX XXX    XXXX    XXXXXXXXX XXXXXXXXX        XX    |\n");
        printf("\t|  XXX   XXX XXX     XX     XXXXXXXXX XXXXXXXXX   XXXXXXX    |\n");
        printf("\t*============================================================*\n");
        printf("\n");
}
