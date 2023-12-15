//ONOMATEPONIMO: KANTZARIS THEOFANIS
//AM: 1117-2020-00062
#include <stdio.h>
#include <string.h>

void replacechar(char *word,char c1,char c2); //arxikopoihsh sinartisis gia antikatastasi

int checkpalindrome(char *word); //arxikopoihsh sinartisis gia na doume an einai karkiniki epigrafi

int main()
{
    char a, word[1000], c1, c2;
    int i, freq = 0,flag = 0, num, ch; //me to freq briskoume thn sixnotita

    printf("Dwse ena string: "); //o xristis dinei thn epilogh tou
    scanf("%s", &word);

    if (strlen(word) > 50) // se periptosh pou to string pou dinei einai parapano apo 50
    {
    	printf("\nTo string einai megalytero apo 50 xaraktires\n");
	return 0;
    }

    do
    {
        printf("\n1.--Anazitisi enos xaraktira--\n");
        printf("2.--Antikatastasi enos xaraktira--\n");
        printf("3.--Des an einai karkiniki epigrafi--\n");
        printf("4.--Telos programmatos--\n");
        printf("Dialeje mia epilogh:\n");
        scanf("%d", &num);
        printf("\n");
        if (num == 1)
        {
            printf("Dwse ton xaraktira: ");

            scanf(" %c", &a);
            printf("H thesi tou grammatos %c sthn leji %s einai:\n", a,word);
            for (i = 0; i < strlen(word); i++) //briskoume thn thesi tou xaraktira
            {
                if (word[i] == a)
                {
                    flag = 1; //briskoume tin thesi tou xaktira
                    printf("%d\n", i + 1);
                    freq++; //briskoume tin sixnotita
                }
            }
            if (flag) //an to flag einai 1
            {
                printf("O xaraktiras  %c brethike %d fores.\n", a, freq); //mas deixnei tn thesi kai tin sixnotita
            }
            else
            {
                printf("Kanena apotelesma\n"); //se periptoi lathos xaraktira
            }
	    freq = 0; //arkikopoihsh tou freq oste ama jana dothei h epilogh na einai 0
        }
        else if (num == 2)
        {
            printf("Dwse ton xaraktira poy thes na antikatastisis: ");
            scanf(" %c", &c1); //eisagogi toy xaraktira
            printf("Dwse ton xaraktira na antikatastathi me %c: ",c1);
            scanf(" %c", &c2); //eisagogi tou xaraktira antikatastasis
            printf("Prin thn antikatastasi:%s\n",word);
            printf("meta thn antikatastasi:");
            replacechar(word, c1, c2); //kaloume tin sinartisi antikatastasis
	    printf("\n");
	}
        else if (num == 3)
        {
            if (checkpalindrome(word)) //kaloume thn sinartisi gia karkiniki epigrafi
                printf("To string einai karkiniki epigrafi\n");
            else
                printf("To string den einai karkiniki epigrafi\n");
        }
        else if (num == 4)
	{
		break;
	}
	else
	{
		printf("Mi diathesimi epilogh\n"); //se periptosi lathos epilogis
		while ( getchar() != '\n' ); //adeiasma eisagogis
	}
    } while (1); //termatizei me thn epilogh 4

    return 0;
}


void replacechar(char *word, char c1,char c2) //h sinartisi gia thn antikatastasi
{
    int i = 0;
    for (i = 0; i<strlen(word); i++) //tsekaroume thn epilogi pou eisagete
    {
        if (word[i] == c1) //an einai idios o xaraktiras
        {
	    printf("%c", c2); //ton antikathista
        }
	else
	{
	    printf("%c", word[i]); //alliws ektiponei pali ton arxiko
	}
    }
}

int checkpalindrome(char *word) //h sinartisi gia na doume an einai karkiniki epigrafo
{
    int i, c = 0,n; //arxikopoihsh tou c
    n = strlen(word);
    for (i = 0; i < n/2; i++) //elegxos karkinikis epigrafis
    {
        if (word[i] == word[n-i-1])
        	c++;
    }
    if (c == n/2)
        return 1;
    else
        return 0;
}
