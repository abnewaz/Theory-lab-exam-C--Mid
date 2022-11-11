#include<stdio.h>
#include<string.h>

int main()
{

    char w1[] = "eggplant";
    char w2[] = "Egg";
    int i;
    // take the length of the strings
    int l1 = strlen(w1);
    int l2 = strlen(w2);



    // make every letter small
    for (i=0; i<l1; i++)
    {
        if (w1[i] < 97)
        {
            w1[i] += 32;
        }
    }
    for (i=0; i<l2; i++)
    {
        if (w2[i]<97)
        {
            w2[i] += 32;
        }
    }
    //printf("%s", w1);

    // compare
    i = 0;
    while (w1[i] != '\0' || w2[i] != '\0')
    {

        if (w1[i] == w2[i])
        {
            i++;
            continue;

        }
        else if(w1[i] >w2[i])
        {
            printf("%s < %s", w2, w1);
            break;
        }
        else
        {
            printf("%s < %s", w1, w2);
            break;

        }

    }


    return 0;
}
