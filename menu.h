int menu(){
    char getChoice[4];
    do{
        system("cls");

        float x, y;
        char op;
        puts(" CALCULADORA CONSOLE\n\n Insira o calculo\n Exemplo: 2 + 2 \n\n");
        printf(" > ");
        scanf("%f %c %f", &x, &op, &y);
        fflush(stdin);

        switch(op)
        {
            case '+': printf(" = %.2f\n", add(x, y)) ;break;
            case '-': printf(" = %.2f\n", subtract(x, y)); break;
            case '*': printf(" = %.2f\n", multiply(x, y)) ;break;
            case '/': printf(" = %.2f\n", divide(x, y)) ;break;
            default:
            printf("\nInvalido! Pressione qualquer tecla para tentar novamente!\n");
            getche();
            main();
        }

        printf("\n Sair? >");
        scanf("%s", &getChoice);
    }while(quitProgram(getChoice) != 1);






}

