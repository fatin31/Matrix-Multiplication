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

    case 2:

        printf("\nEnter number of rows and columns of 1st matrix\n");
        scanf("%d%d",&m,&n);

        printf("\nEnter number of rows and columns of 2nd matrix\n");
        scanf("%d%d",&r,&s);

        if(n!=r)
        {
            printf("\n The matrix cannot be multiplied\n");
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
                i= 0 ;
                while( i < m )
                {

                    j= 0 ;
                    while( j < n )

                    {
                        a[i][j]=rand()%100;
                        j++ ;
                    }
                    i++;
                }

                printf("Enter second matrix: \n");
                srand(time(0));
                i= 0 ;
                while( i < r )
                {

                    j= 0 ;
                    while( j < s )

                    {
                        b[i][j]=rand()%100;
                        j++ ;
                    }
                    i++;
                }
            }

            else
            {

                printf("Enter First matrix: \n");
                i= 0 ;
                while( i < m )
                {

                    j= 0 ;
                    while( j < n )

                    {
                        scanf("%d", &a[i][j]);
                        j++ ;
                    }
                    i++;
                }

                printf("Enter second matrix: \n");
                i= 0 ;
                while( i < r )
                {

                    j= 0 ;
                    while( j < s )

                    {
                        scanf("%d", &b[i][j]);
                        j++ ;
                    }
                    i++;
                }

            }
        }

        printf("\n The element of first matrix is: [%dx%d]", m,n);
        printf("\n");

        i=0;
        while( i<m )
        {
            printf("\n");
            j=0;
            while( j<n )
            {
                printf("\t%d",a[i][j]);
                j++;
            }
            i++;
        }


        printf("\n\n The element of second matrix is: [%dx%d]", r,s);
        printf("\n");

        i=0;
        while( i<r )
        {
            printf("\n");
            j=0;
            while( j<s )
            {
                printf("\t%d",b[i][j]);
                j++;
            }
            i++;
        }

        clock_t strt_time = clock();

        i=0;
        while(i<m)
        {
            j=0;
            while(j<s)
            {
                k=0;
                multi[i][j]=0;
                while(k<r)
                {
                    multi[i][j] = multi[i][j] + a[i][k] * b[k][j];
                    k++;
                }
                j++;
            }
            i++;
        }
        printf("\n\n Result: [%dx%d]", m,s);
        printf("\n\n");

        i=0;
        while(i<m)
        {
            j=0;
            while(j<s)
            {
                printf("\t%d  ",multi[i][j]);
                j++;
            }
            i++;
            printf("\n");
        }


        double elpsd_time = (double)(clock() - strt_time) / CLOCKS_PER_SEC;
        printf("\nDone in %f seconds\n", elpsd_time);

        break;

    case 3:

        printf("\nEnter number of rows and columns of 1st matrix\n");
        scanf("%d%d",&m,&n);

        printf("\nEnter number of rows and columns of 2nd matrix\n");
        scanf("%d%d",&r,&s);

        if(n!=r)
        {
            printf("\n The matrix cannot be multiplied\n");
            return 0;
        }

        else
        {
            printf (" \nChoice 1: Insert Random Value\nChoice 2: User Input\n");
            int o;
            scanf("%d",&o);
            if(o==1)
            {

                i= 0 ;
                do
                {
                    printf("Enter First matrix: \n");
                    srand(time(0));
                    j= 0 ;
                    do

                    {
                        a[i][j]=rand()%100;
                        j++ ;
                    }
                    while( j < n );
                    i++;
                }
                while( i < m );


                printf("Enter Second matrix: \n");
                srand(time(0));
                i= 0 ;
                do
                {

                    j= 0 ;
                    do

                    {
                        b[i][j]=rand()%100;
                        j++ ;
                    }
                    while( j < s );
                    i++;
                }
                while( i < r );
            }

            else
            {

                printf("Enter First matrix: \n");
                i= 0 ;
                do
                {

                    j= 0 ;
                    do

                    {
                        scanf("%d", &a[i][j]);
                        j++ ;
                    }
                    while( j < n );
                    i++;
                }
                while( i < m );

                printf("Enter second matrix: \n");
                i= 0 ;
                do
                {

                    j= 0 ;
                    do

                    {
                        scanf("%d", &b[i][j]);
                        j++ ;
                    }
                    while( j < s );
                    i++;
                }
                while( i < r );

            }
        }

        printf("\n The element of first matrix is: [%dx%d]", m,n);
        printf("\n");

        i=0;
        do
        {
            printf("\n");
            j=0;
            do
            {
                printf("\t%d",a[i][j]);
                j++;
            }
            while( j < n );
            i++;
        }
        while( i < m );


        printf("\n\n The element of second matrix is: [%dx%d]", r,s);
        printf("\n");


        i=0;
        do
        {
            printf("\n");
            j=0;
            do
            {
                printf("\t%d",b[i][j]);
                j++;
            }
            while( j < s );
            i++;
        }
        while( i < r );

        clock_t srt_time = clock();

        i=0;
        do
        {
            j=0;
            do
            {
                k=0;
                multi[i][j]=0;
                do
                {
                    multi[i][j] = multi[i][j] + a[i][k] * b[k][j];
                    k++;
                }
                while(k < r);
                j++;
            }
            while(j < s);
            i++;
        }
        while(i < m);

        printf("\n\n Result: [%dx%d]", m,s);
        printf("\n\n");

        i=0;
        do
        {
            j=0;
            do
            {
                printf("\t%d 0  ",multi[i][j]);
                j++;
            }
            while(j < s);
            i++;
            printf("\n");
        }
        while(i < m);


        double elpsed_time = (double)(clock() - srt_time) / CLOCKS_PER_SEC;
        printf("\nDone in %f seconds\n", elpsed_time);
        break;
    }
    return 0;
}
