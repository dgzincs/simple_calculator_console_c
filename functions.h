float add(float x, float y)
{
return x + y;
};

float subtract(float x, float y)
{
return x - y;
};

float  multiply(float x, float y)
{
return x * y;
};

float divide(float x, float y)
{
return x / y;
};

int quitProgram(char choice[4]){
    if(strcmp(choice, "sim") || strcmp(choice, "SIM") == 0){
        return 0;
    }
    else{
        return 1;
    }
}
