/* Defining EOF if stdio.h is not included */
#ifndef EOF
    #define EOF (-1)
#endif

int count_characters(){

    int nc;
    nc = 0;

    while(  getchar()  != EOF ){
        nc++;
    }

    return nc;
}