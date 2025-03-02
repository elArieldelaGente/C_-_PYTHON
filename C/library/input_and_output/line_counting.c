#ifndef EOF
    #define EOF -1
#endif

int count_lines() {
    
    int c, nl;

    nl = 0;
    while ( ( c = getchar()) != EOF )
        if ( c == '\n')
            nl++;

    return nl;

}