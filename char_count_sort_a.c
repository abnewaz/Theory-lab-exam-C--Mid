#include<stdio.h>
#include<string.h>
int main()
{
    int i,A, j, k, m, n,a ,z,count=0;
    char ar[100], ap[26], letter[26];
    fgets(ar,sizeof(ar),stdin);
    int glass;

    //char aa;

    //scanf("%c",&m);

    //for(i=0;i=ar['\0'];i++)
//    for(i=0;ar[i]<=ar['\0'];i++)
//    {
//
//       //
//        if(ar[i]>=a && ar[i]<=z)
//        {
//
//        }printf("%s ",ar+i);
//        //printf("%d\n",a);
//
//
//    }

        //printf("%s \n",ar+i);
//        for(i=0;ar[i]<=ar['\0'];i++)
//        {
//            printf("%s...... \n",ar+i);
//        }
            printf("%s",ar);

            for(i=0;i<26;i++)
                {

                ap[i] =0;
                letter[i] = i;
                printf("%d ",ap[i]);

            }

            for(i=0;ar[i]!='\0';i++)
                {
                    ap[ar[i]-97]++;
                }
//                 for(i=0;ap[i]!='\0';i++)
//                {
//                    printf("%d",ap[i]);
//                }

            m=ap[1];
            printf("\n");
            for(i=0;i<26;i++)
                {


                printf("%d ",ap[i]);

            }

            printf("\n");
            //printf("...........%c ...",ap[1]);

            //sorting algorithm

            for (i = 0; i<26; i++)
            {
                for (j = i+1; j<26; j++)
                {
                    if (ap[j]>ap[i]){

                        //swap
                        glass = ap[j];
                        ap[j] = ap[i];
                        ap[i] = glass;

                        glass = letter[j];
                        letter[j] = letter[i];
                        letter[i] = glass;


                    }
                }

            }

            for (i = 0; ap[i]!= 0; i++){
                for (j = 0; j < ap[i]; j++){
                printf("%c", letter[i]+97);
                }
            }


    return 0;
}
