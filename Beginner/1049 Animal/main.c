/* 1049		Animal */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test;
    char s1[20],s2[20],s3[20];

    gets(s1);
    gets(s2);
    gets(s3);

    //1st step

    test=strcmp(s1,"vertebrado");

    if(test==0)
    {
        test=strcmp(s2,"ave");
        if(test==0)
        {
            test=strcmp(s3,"carnivoro");
            if(test==0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }

        }

        else{
                test=strcmp(s2,"ave");

            test=strcmp(s3,"onivoro");
            if(test==0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    }


    //2nd step

    else
    {
        test=strcmp(s2,"inseto");
        if(test==0)
        {
            test=strcmp(s3,"hematofago");
            if(test==0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }

        }

        else{


            test=strcmp(s3,"hematofago");
            if(test==0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
    }




    return 0;
}
