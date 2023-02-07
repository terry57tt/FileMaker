#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argv, char **argc){
    if(argv < 2){
        printf("Usage: ./mk <name>\n");
        return EXIT_FAILURE;
    }else{
        char* result = malloc(1000);
        FILE *f = fopen("makefile", "w");
        for(int i=1;i<argv;i++){
            char *name = argc[i];
            fprintf(f, "%s: clean\n\tclang -std=c99 -Wall -Wextra -pedantic -g3 -fsanitize=address -c %s.c\n\tclang -std=c99 -Wall -Wextra -pedantic -g3 -fsanitize=address %s.o -o %s\n\t./%s\n\n",name,name,name,name,name);
            strcat(result, argc[i]);
            strcat(result, " ");
        }
        fprintf(f, "clean:\n\trm -f *.o\n\trm -f %s\n", result);
        fclose(f);
        free(result);
    }
    return EXIT_SUCCESS;
}