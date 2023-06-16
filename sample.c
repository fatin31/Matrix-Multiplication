#include<stdio.h>
#include<math.h>
#include <time.h>
#include<stdlib.h>

int main()
{
    int m,n,r,s;
    int a[256][256],b[256][256],multi[256][256],i,j,k;


    printf("Choose a way to matrix multiplication: \n");
    printf("\n >> Choice 1: For Loop\n >> Choice 2: While Loop\n >> Choice 3: Do While Loop\n\n");
    int choice;
    printf("choice: ");
    scanf("%d",&choice);
    if(choice>3)
    {
        printf("\nInvalid Input.\n");
    }
    switch(choice)
    {
    case 1:

        printf("\nEnter number of rows and columns of 1st matrix\n");
        scanf("%d%d",&m,&n);

        printf("\nEnter number of rows and columns of 2nd matrix\n");
        scanf("%d%d",&r,&s);


        if(n!=r)
        {
            printf("\n The matrix cannot be multiplied \n");
            return 0;
        }

        else
        {
            printf (" \nChoice 1: Insert Random Value\nChoice 2: User Input\n");
            int o;
            scanf("%d",&o);
            if(o==1)
            {

                printf("Enter First matrix: \n");
                srand(time(0));
                for(i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        a[i][j]=rand()%100;
                    }
                }


                printf("Enter second matrix: \n");
                srand(time(0));
                for(i=0; i<r; i++)
                {
                    for(j=0; j<s; j++)
                    {
                        b[i][j]=rand()%100;
                    }
                }
            }

            else
            {

                printf("Enter First matrix: \n");
                for(i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        scanf("%d",&a[i][j]);
                    }
                }

                printf("Enter second matrix: \n");
                for(i=0; i<r; i++)
                {
                    for(j=0; j<s; j++)
                    {
                        scanf("%d",&b[i][j]);
                    }
                }

            }
        }

        printf("\n The element of first matrix is: [%dx%d]", m,n);
        printf("\n");
        for(i=0; i<m; i++)
        {
            printf("\n");
            for(j=0; j<n; j++)
                printf("\t%d",a[i][j]);
        }

        printf("\n\n The element of second matrix is: [%dx%d]", r,s);
        printf("\n");
        for(i=0; i<r; i++)
        {
            printf("\n");
            for(j=0; j<s; j++)
                printf("\t%d",b[i][j]);
        }

        clock_t start_time = clock();

        for(i=0; i<m; i++)
        {
            for(j=0; j<s; j++)
            {
                multi[i][j]=0;
                for(k=0; k<r; k++)
                {
                    multi[i][j]= multi[i][j] + a[i][k]*b[k][j];
                }
            }
        }

        printf("\n\n Result: [%dx%d]", m,s);
        printf("\n\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<s; j++)
            {
                printf("\t%d  ",multi[i][j]);
            }
            printf("\n");
        }

        double elapsed_time = (double)(clock() - start_time) / CLOCKS_PER_SEC;
        printf("\nDone in %f seconds\n", elapsed_time);

        break;
    }

        return 0;
    }
