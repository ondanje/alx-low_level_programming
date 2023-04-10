#include"main.h"
/**
 * main_entry point
 * @argc: count of args
 * @argv: array of args
 * Return : 0
 */
int main(int argc, char *argv[]) {
    FILE *fp_from, *fp_to;
    size_t sread, swritten;
    char buffer[BUFFER_SIZE];

    /*Checking for the correct number of arguments*/
    if (argc != 3) {
        fprintf(stderr, "Usage: cp file_from file_to\n");
        exit(97);
    }

    /*source file*/
    /*rb -reading binary*/
    if ((fp_from = fopen(argv[1], "rb")) == NULL) 
    {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    
    /*wb- write binary*/
    /*pening the destination*/
    if ((fp_to = fopen(argv[2], "wb")) == NULL) {
        fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    /*copying*/
    while ((sread = fread(buffer, 1, BUFFER_SIZE, fp_from)) > 0) 
    {
        if ((swritten = fwrite(buffer, 1, sread, fp_to)) != sread) {
            fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }

    /*Error during reading*/
    if (ferror(fp_from)) {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    if (fclose(fp_from) != 0) {
        fprintf(stderr, "Error: Can't close fp %p\n", (void *)fp_from);
        exit(100);
    }
    if (fclose(fp_to) != 0) {
        fprintf(stderr, "Error: Can't close fp %p\n", (void *)fp_to);
        exit(100);
    }

    return (0);
}
