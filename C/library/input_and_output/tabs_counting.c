#ifndef EOF
    #define EOF -1
#endif

int count_tabs(){

    int tabs, c;

    tabs = 0;

    while ( ( c = getchar() ) != EOF )
        if ( c == '\t' )
            tabs++;    
    
    return tabs;
}
