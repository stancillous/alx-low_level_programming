#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int largest(char *username, int len)
{
    int ch;
    int jl;
    unsigned int random_number;

    ch = *username;
    jl = 0;

    while (jl < len)
    {
        if (ch < username[jl])
            ch = username[jl];
        jl += 1;
    }

    srand(ch ^ 14);
    random_number = rand();

    return (random_number & 63);
}

int mul(char *username, int len)
{
    int ch;
    int jl;

    ch = jl = 0;

    while (jl < len)
    {
        ch = ch + username[jl] * username[jl];
        jl += 1;
    }

    return (((unsigned int)ch ^ 239) & 63);
}


int charGen(char *username)
{
    int ch;
    int jl;

    ch = jl = 0;

    while (jl < *username)
    {
        ch = rand();
        jl += 1;
    }

    return (((unsigned int)ch ^ 229) & 63);
}


int main(int argc, char **argv)
{
    char keygen[7];
    int len, ch, jl;
    long alph[] = {
        0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
        0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
        0x723161513346655a, 0x6b756f494b646850};
    (void)argc;

    for (len = 0; argv[1][len]; len++)
        ;
    /* ----------- f1 ----------- */
    keygen[0] = ((char *)alph)[(len ^ 59) & 63];
    /* ----------- f2 ----------- */
    ch = jl = 0;
    while (jl < len)
    {
        ch = ch + argv[1][jl];
        jl = jl + 1;
    }
    keygen[1] = ((char *)alph)[(ch ^ 79) & 63];
    /* ----------- f3 ----------- */
    ch = 1;
    jl = 0;
    while (jl < len)
    {
        ch = argv[1][jl] * ch;
        jl = jl + 1;
    }
    keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
    /* ----------- largest ----------- */
    keygen[3] = ((char *)alph)[largest(argv[1], len)];
    /* ----------- mul ----------- */
    keygen[4] = ((char *)alph)[mul(argv[1], len)];
    /* ----------- charGen ----------- */
    keygen[5] = ((char *)alph)[charGen(argv[1])];
    keygen[6] = '\0';
    for (ch = 0; keygen[ch]; ch++)
        printf("%c", keygen[ch]);
    return (0);
}
