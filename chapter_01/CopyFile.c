//
// Created by yklsfzy on 2024/1/7/0007.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *in, *out;
    char ch, infile[20], outfile[20];
    printf("please input this input file name\n");
    scanf("%s", infile);
    printf("please input this output file name\n");
    scanf("%s", outfile);
    if ((in = fopen(infile, "r")) == NULL) {
        printf("error opening input file");
        exit(0);
    }
    if ((out = fopen(outfile, "w")) == NULL) {
        printf("error opening output file");
        exit(0);
    }
    ch = (char) fgetc(in);
    while (!feof(in)) {
        fputc(ch, out);
        ch = (char) fgetc(in);
    }
    fclose(in);
    fclose(out);
    printf("ending");
    return 0;
}