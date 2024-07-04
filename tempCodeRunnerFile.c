      printf("Enter a number to find its reverse : ");
        scanf("%d", &n);

        int dup_n = n;

        while (n >= 1) {
            n = n/10;
            no_digits++;                            
        }

        printf("%d", no_digits);
    }    