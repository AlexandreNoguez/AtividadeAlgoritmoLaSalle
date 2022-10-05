/*

Nome do meu usuário no Githug: Alexandre Noguez
Nome do repositório: AtividadeAlgoritmoLaSalle
Link do repositório: https://github.com/AlexandreNoguez/AtividadeAlgoritmoLaSalle

preparando o ambiente de desenvolvimento em C no Visual Studio Code

https://www.youtube.com/watch?v=aXVzbzwZuYc

https://terminaldeinformacao.com/2015/10/08/como-instalar-e-configurar-o-gcc-no-windows-mingw/

corrigindo o erro que tive durante a instalação https://www.youtube.com/watch?v=FWC5fVk0QqE

Utilizei o exemplo do ebook na página 34 do pdf com algumas alterações

 */

#include <stdint.h>
#include <stdio.h>

int main()
{
    /* Aqui estão declaradas as variáveis que serão utilizadas durante o programa, coletando os dados de entrada, as operações e as escolhas*/
    float primeiroNumero, segundoNumero, numeroRaiz, soma, subtracao, multiplicacao, divisao, impar;
    int escolha, resultadoRaiz;

    printf("***********************************************************************************\n");
    printf("*                 Oi, me chamo Carlos Alexandre Noguez da Silva                   *\n");
    printf("*           Eu sou estudante de Analise e Desenvolvimento de Sistemas             *\n");
    printf("*                    Estou cursando na Universidade La Salle                      *\n");
    printf("*                           Minha matricula: 202222001                            *\n");
    printf("***********************************************************************************\n\n");
    printf("***********************************************************************************\n");
    printf("**                              Vamos calcular?                                  **\n");
    printf("***                   Se quer fazer raiz quadrada, digite 1                     ***\n");
    printf("**            Se quer somar, subtrair, multiplicar e dividir, digite 2           **\n");
    printf("***********************************************************************************\n");
    scanf("%d", &escolha);
    /* Aqui inicia a escolha do usuário sobre as operações */
    switch (escolha)
    {
    case 1:
        printf("***********************************************************************************\n");
        printf("**                                Raiz Quadrada                                  **\n");
        printf("***********************************************************************************\n\n");
        printf("***********************************************************************************\n");
        printf("*            Desculpe, ainda nao aprendi a calcular a raiz quadrada.              *\n");
        printf("*                          Quem sabe na v0.1, certo?.                             *\n");
        printf("***********************************************************************************\n");

        /* Estava tentando buscar alguma maneira de calcular a raiz quadrada mas nenhuma funcionou 100%, então decidi deixar de fora desta versão. */

        // scanf("%f", &numeroRaiz);
        // impar = 1;
        // resultadoRaiz = 0;
        // for (int i = 1; i <= numeroRaiz; i += 2)
        // {
        //     numeroRaiz -= i;
        //     resultadoRaiz++;
        // }
        // if (resultadoRaiz == 0)
        //     printf("\n\nA raiz quadrada do numero e: %i", resultadoRaiz);
        // {
        //     printf("A raiz nao e exata");
        // }

        // return 0;
        break;
    case 2:
        printf("***********************************************************************************\n");
        printf("***   Voce vai digitar um numero e presionar enter, inteiros e/ou decimais.     ***\n");
        printf("***    entao vai digitar outro numero e presionar enter. O programa vai:        ***\n");
        printf("***        Somar, subtrair, multiplicar e dividir. Preparado? VAMOS LA!         ***\n");
        printf("***********************************************************************************\n\n");

        printf("Digite o numero 1: ");
        scanf("%f", &primeiroNumero);
        printf("Digite o numero 2: ");
        scanf("%f", &segundoNumero);
        // printf("Qual tipo de calculo vai querer fazer? \n");
        soma = primeiroNumero + segundoNumero;
        subtracao = primeiroNumero - segundoNumero;
        multiplicacao = primeiroNumero * segundoNumero;
        divisao = primeiroNumero / segundoNumero;

        printf("Numero 1: %.2f\n", primeiroNumero);
        printf("Numero 2: %.2f\n", segundoNumero);
        printf("A soma: %.2f\n", soma);
        printf("A subtracao: %.2f\n", subtracao);
        printf("A multiplicacao: %.2f\n", multiplicacao);
        printf("A divisao: %.2f\n", divisao);
        break;

    default:
        printf("***********************************************************************************\n");
        printf("**                   Erro: Valor digitado desconhecido                           **\n");
        printf("***********************************************************************************\n\n");

        break;
    }

    return 0;
}