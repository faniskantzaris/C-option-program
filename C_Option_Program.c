#include <stdio.h>
#include <string.h>

void replacechar(char *word,char c1,char c2); 
int checkpalindrome(char *word); 

int main()
{
    char a, word[1000], c1, c2;
    int i, freq = 0,flag = 0, num, ch; 

    printf("Dwse ena string: "); 
    scanf("%s", &word);

    if (strlen(word) > 50) 
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
            for (i = 0; i < strlen(word); i++) 
            {
                if (word[i] == a)
                {
                    flag = 1; 
                    printf("%d\n", i + 1);
                    freq++; 
                }
            }
            if (flag) 
            {
                printf("O xaraktiras  %c brethike %d fores.\n", a, freq); 
            }
            else
            {
                printf("Kanena apotelesma\n"); 
            }
	    freq = 0;
        }
        else if (num == 2)
        {
            printf("Dwse ton xaraktira poy thes na antikatastisis: ");
            scanf(" %c", &c1);
            printf("Dwse ton xaraktira na antikatastathi me %c: ",c1);
            scanf(" %c", &c2); 
            printf("Prin thn antikatastasi:%s\n",word);
            printf("meta thn antikatastasi:");
            replacechar(word, c1, c2); 
	    printf("\n");
	}
        else if (num == 3)
        {
            if (checkpalindrome(word)) 
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
		printf("Mi diathesimi epilogh\n");
		while ( getchar() != '\n' );
	}
    } while (1);

    return 0;
}


void replacechar(char *word, char c1,char c2) 
{
    int i = 0;
    for (i = 0; i<strlen(word); i++) 
    {
        if (word[i] == c1) 
        {
	    printf("%c", c2); 
        }
	else
	{
	    printf("%c", word[i]);
	}
    }
}

int checkpalindrome(char *word) 
{
    int i, c = 0,n;
    n = strlen(word);
    for (i = 0; i < n/2; i++)
    {
        if (word[i] == word[n-i-1])
        	c++;
    }
    if (c == n/2)
        return 1;
    else
        return 0;
}
