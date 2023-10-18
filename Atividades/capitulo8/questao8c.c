struct Corpo {
    float altura;
    float peso;
};

struct Casal {
    struct Corpo pessoa1;
    struct Corpo pessoa2;
};

struct teste {
    int str1;
    int str2;
    int str3;
};

int main()
{
    struct Casal casais[10];
    casais[0].pessoa1.altura = 1.63;
    casais[0].pessoa1.peso = 59.5;
    casais[0].pessoa2.altura = 1.78;
    casais[0].pessoa2.peso = 82.6;
    return 0;
}

