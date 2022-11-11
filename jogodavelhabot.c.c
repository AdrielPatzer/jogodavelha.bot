#include <stdio.h>

int main()
{
    int k=0, jogadaB [3] [3], aux=0, soma, vez, cont, linha, coluna, escolhaL, escolhaC, vrf=0, vrf2=0, e=0, jogada [3] [3];
    char jogo[3] [3];
    for(linha=0; linha<=2; linha++)
    {
        for(coluna=0; coluna<=2; coluna++)
        {
            jogo [linha] [coluna] = ' ';
            jogada [linha] [coluna] = 0;
            jogadaB [linha] [coluna] = 0;
        }
    }
    srand(time(NULL));
    vez = rand () % 2;
    printf("  0    1    2\n");
    printf("0  %c | %c | %c\n", jogo[0] [0], jogo[0] [1], jogo[0] [2]);
    printf("  -----------\n");
    printf("1  %c | %c | %c\n", jogo[1] [0], jogo[1] [1], jogo[1] [2]);
    printf("  -----------\n");
    printf("2  %c | %c | %c\n", jogo[2] [0], jogo[2] [1], jogo[2] [2]);
    do
    {
        if(vez == 0)
        {
            printf("Sua vez!");
            printf("\nSeu símbolo é: X\n");
            do
            {
                printf("Escolha a linha que deseja jogar\n");
                scanf("%i", &escolhaL);
                printf("Escolha a coluna que deseja jogar\n");
                scanf("%i", &escolhaC);
                if(escolhaL > -1 && escolhaL < 3)
                {
                    if(escolhaC > -1 && escolhaC < 3)
                    {
                        if(jogo [escolhaL] [escolhaC] == 'X' || jogo [escolhaL] [escolhaC] == 'O')
                        {
                            printf("Você não pode colocar aí!\n");
                        }
                        else
                        {
                            e = 1;
                        }
                    }
                    else
                    {
                        printf("Local inválido\n");
                    }
                }
                else
                {
                    printf("Local inválido\n");
                }

            }
            while(e == 0);
            e = 0;
            jogo [escolhaL] [escolhaC] = 'X';
        }
        else
        {
            printf("Vez do bot\n");
            for(linha=0; linha<=2; linha++){
            for(coluna=0; coluna<=2; coluna++){
            if(jogo [linha] [coluna] == 'X'){
            jogada [linha] [coluna] = 1;
            }
            if(jogo [linha] [coluna] == 'O'){
            jogadaB [linha] [coluna] = 1;
            }
            }
            }
            soma = jogadaB [0] [0] + jogadaB [0] [1] + jogadaB [0] [2];
            if(e == 0){
            if(soma == 2){
            if(jogo [0] [0] != 'X' && jogo [0] [1] != 'X' && jogo [0] [2] != 'X'){
            e = 1;
            for(cont=0; cont<=2; cont++){
            if(jogadaB [0] [cont] == 0){
            jogo [0] [cont] = 'O';
            }
            }
            }
            }
            }
            soma = jogadaB [1] [0] + jogadaB [1] [1] + jogadaB [1] [2];
            if(e == 0){
            if(soma == 2){
            if(jogo [1] [0] != 'X' && jogo [1] [1] != 'X' && jogo [1] [2] != 'X'){
            e = 1;
            for(cont=0; cont<=2; cont++){
            if(jogadaB [1] [cont] == 0){
            jogo [1] [cont] = 'O';
            }
            }
            }
            }
            }
            soma = jogadaB [2] [0] + jogadaB [2] [1] + jogadaB [2] [2];
            if(e == 0){
            if(soma == 2){
            if(jogo [2] [0] != 'X' && jogo [2] [1] != 'X' && jogo [2] [2] != 'X'){
            e = 1;
            for(cont=0; cont<=2; cont++){
            if(jogadaB [2] [cont] == 0){
            jogo [2] [cont] = 'O';
            }
            }
            }
            }
            }
            soma = jogadaB [0] [0] + jogadaB [1] [0] + jogadaB [2] [0];
            if(e == 0){
            if(soma == 2){
            if(jogo [0] [0] != 'X' && jogo [1] [0] != 'X' && jogo [2] [0] != 'X'){
            e = 1;
            for(cont=0; cont<=2; cont++){
            if(jogadaB [cont] [0] == 0){
            jogo [cont] [0] = 'O';
            }
            }
            }
            }
            }
            soma = jogadaB [0] [1] + jogadaB [1] [1] + jogadaB [2] [1];
            if(e == 0){
            if(soma == 2){
            if(jogo [0] [1] != 'X' && jogo [1] [1] != 'X' && jogo [2] [1] != 'X'){
            e = 1;
            for(cont=0; cont<=2; cont++){
            if(jogadaB [cont] [1] == 0){
            jogo [cont] [1] = 'O';
            }
            }
            }
            }
            }
            soma = jogadaB [0] [2] + jogadaB [1] [2] + jogadaB [2] [2];
            if(e == 0){
            if(soma == 2){
            if(jogo [0] [2] != 'X' && jogo [1] [2] != 'X' && jogo [2] [2] != 'X'){
            e = 1;
            for(cont=0; cont<=2; cont++){
            if(jogadaB [cont] [2] == 0){
            jogo [cont] [2] = 'O';
            }
            }
            }
            }
            }
            soma = jogadaB [0] [0] + jogadaB [1] [1] + jogadaB [2] [2];
            if(e == 0){
            if(soma == 2){
            if(jogo [0] [0] != 'X' && jogo [1] [1] != 'X' && jogo [2] [2] != 'X'){
            e = 1;
            for(cont=0; cont<=2; cont++){
            if(jogadaB [cont] [cont] == 0){
            jogo [cont] [cont] = 'O';
            }
            }
            }
            }
            }
            aux = 0;
            soma = jogadaB [2] [0] + jogadaB [1] [1] + jogadaB [0] [2];
            if(e == 0){
            if(soma == 2){
            if(jogo [2] [0] != 'X' && jogo [1] [1] != 'X' && jogo [0] [2] != 'X'){
            e = 1;
            for(cont=2; cont>=0; cont--){
            if(jogadaB [cont] [aux] == 0){
            jogo [cont] [aux] = 'O';
            }
            aux = aux + 1;
            }
            }
            }
            }
            soma = jogada [0] [0] + jogada [1] [0] + jogada [2] [0];
            if(e == 0){
            if(soma == 2){
            if(jogo [0] [0] != 'O' && jogo [1] [0] != 'O' && jogo [2] [0] != 'O'){
            e = 1;
            for(cont=0; cont<=2; cont++){
            if(jogada [cont] [0] == 0){
            jogo [cont] [0] = 'O';
            }
            }
            }
            }
            }
            soma = jogada [0] [1] + jogada [1] [1] + jogada [2] [1];
            if(e == 0){
            if(soma == 2){
            if(jogo [0] [1] != 'O' && jogo [1] [1] != 'O' && jogo [2] [1] != 'O'){
            e = 1;
            for(cont=0; cont<=2; cont++){
            if(jogada [cont] [1] == 0){
            jogo [cont] [1] = 'O';
            }
            }
            }
            }
            }
            soma = jogada [0] [2] + jogada [1] [2] + jogada [2] [2];
            if(e == 0){
            if(soma == 2){
            if(jogo [0] [2] != 'O' && jogo [1] [2] != 'O' && jogo [2] [2] != 'O'){
            e = 1;
            for(cont=0; cont<=2; cont++){
            if(jogada [cont] [2] == 0){
            jogo [cont] [2] = 'O';
            }
            }
            }
            }
            }
            soma = jogada [0] [0] + jogada [0] [1] + jogada [0] [2];
            if(e == 0){
            if(soma == 2){
            if(jogo [0] [0] != 'O' && jogo [0] [1] != 'O' && jogo [0] [2] != 'O'){
            e = 1;
            for(cont=0; cont<=2; cont++){
            if(jogada [0] [cont] == 0){
            jogo [0] [cont] = 'O';
            }
            }
            }
            }
            }
            soma = jogada [1] [0] + jogada [1] [1] + jogada [1] [2];
            if(e == 0){
            if(soma == 2){
            if(jogo [1] [0] != 'O' && jogo [1] [1] != 'O' && jogo [1] [2] != 'O'){
            e = 1;
            for(cont=0; cont<=2; cont++){
            if(jogada [1] [cont] == 0){
            jogo [1] [cont] = 'O';
            }
            }
            }
            }
            }
            soma = jogada [2] [0] + jogada [2] [1] + jogada [2] [2];
            if(e == 0){
            if(soma == 2){
            if(jogo [2] [0] != 'O' && jogo [2] [1] != 'O' && jogo [2] [2] != 'O'){
            e = 1;
            for(cont=0; cont<=2; cont++){
            if(jogada [2] [cont] == 0){
            jogo [2] [cont] = 'O';
            }
            }
            }
            }
            }
            soma = jogada [0] [0] + jogada [1] [1] + jogada [2] [2];
            if(e == 0){
            if(soma == 2){
            if(jogo [0] [0] != 'O' && jogo [1] [1] != 'O' && jogo [2] [2] != 'O'){
            e = 1;
            for(cont=0; cont<=2; cont++){
            if(jogada [cont] [cont] == 0){
            jogo [cont] [cont] = 'O';
            }
            }
            }
            }
            }
            aux = 0;
            soma = jogada [2] [0] + jogada [1] [1] + jogada [0] [2];
            if(e == 0){
            if(soma == 2){
            if(jogo [2] [0] != 'O' && jogo [1] [1] != 'O' && jogo [0] [2] != 'O'){
            e = 1;
            for(cont=2; cont>=0; cont--){
            if(jogada [cont] [aux] == 0){
            jogo [cont] [aux] = 'O';
            }
            aux = aux + 1;
            }
            }
            }
            }
            if(e == 0){
            do{
            escolhaL = rand () % 3;
            escolhaC = rand () % 3;
            if(jogo [escolhaL] [escolhaC] == ' '){
            jogo [escolhaL] [escolhaC] = 'O';
            e = 1;
            }
            }while(e != 1);
            }
            e = 0;
        }
        if(vez == 0)
        {
            vez = 1;
        }
        else
        {
            vez = 0;
        }
        printf("  0    1    2\n");
        printf("0  %c | %c | %c\n", jogo[0] [0], jogo[0] [1], jogo[0] [2]);
        printf("  -----------\n");
        printf("1  %c | %c | %c\n", jogo[1] [0], jogo[1] [1], jogo[1] [2]);
        printf("  -----------\n");
        printf("2  %c | %c | %c\n", jogo[2] [0], jogo[2] [1], jogo[2] [2]);

        if(jogo [0] [0] == jogo [1] [0] && jogo [1] [0] == jogo [2] [0] && jogo [0] [0] != ' ')
        {
            if(jogo [0] [0] == 'X')
            {
                printf("Parabéns, você ganhou!");
            }
            else
            {
                printf("Você perdeu!");
            }
            vrf = 1;
        }
        else
        {
            vrf2 = vrf2 + 1;
        }
        if(jogo [0] [1] == jogo [1] [1] && jogo [1] [1] == jogo [2] [1] && jogo [1] [1] != ' ')
        {
            if(jogo [0] [1] == 'X')
            {
                printf("Parabéns, você ganhou!");
            }
            else
            {
                printf("Você perdeu!");
            }
            vrf = 1;
        }
        else
        {
            vrf2 = vrf2 + 1;
        }
        if(jogo [0] [2] == jogo [1] [2] && jogo [1] [2] == jogo [2] [2] && jogo [1] [2] != ' ')
        {
            if(jogo [0] [2] == 'X')
            {
                printf("Parabéns, você ganhou!");
            }
            else
            {
                printf("Você perdeu!");
            }
            vrf = 1;
        }
        else
        {
            vrf2 = vrf2 + 1;
        }
        if(jogo [0] [0] == jogo [0] [1] && jogo [0] [1] == jogo [0] [2] && jogo [0] [2] != ' ')
        {
            if(jogo [0] [0] == 'X')
            {
                printf("Parabéns, você ganhou!");
            }
            else
            {
               printf("Você perdeu!");
            }
            vrf = 1;
        }
        else
        {
            vrf2 = vrf2 + 1;
        }
        if(jogo [1] [0] == jogo [1] [1] && jogo [1] [1] == jogo [1] [2] && jogo [1] [1] != ' ')
        {
            if(jogo [1] [0] == 'X')
            {
                printf("Parabéns, você ganhou!");
            }
            else
            {
                printf("Você perdeu!");
            }
            vrf = 1;
        }
        else
        {
            vrf2 = vrf2 + 1;
        }
        if(jogo [2] [0] == jogo [2] [1] && jogo [2] [1] == jogo [2] [2] && jogo [2] [1] != ' ')
        {
            if(jogo [2] [0] == 'X')
            {
               printf("Parabéns, você ganhou!");
            }
            else
            {
                printf("Você perdeu!");
            }
            vrf = 1;
        }
        else
        {
            vrf2 = vrf2 + 1;
        }
        if(jogo [2] [2] == jogo [1] [1] && jogo [1] [1] == jogo [0] [0] && jogo [1] [1] != ' ')
        {
            if(jogo [2] [2] == 'X')
            {
                printf("Parabéns, você ganhou!");
            }
            else
            {
               printf("Você perdeu!");
            }
            vrf = 1;
        }
        else
        {
            vrf2 = vrf2 + 1;
        }
        if(jogo [2] [0] == jogo [1] [1] && jogo [1] [1] == jogo [0] [2] && jogo [1] [1] != ' ')
        {
            if(jogo [2] [0] == 'X')
            {
                printf("Parabéns, você ganhou!");
            }
            else
            {
               printf("Você perdeu!");
            }
            vrf = 1;
        }
        else
        {
            vrf2 = vrf2 + 1;
        }
    }
    while(vrf == 0 && vrf2 != 72);
    if(vrf2 == 72)
    {
        printf("O jogo deu velha!\n");
    }
    return 0;
}
