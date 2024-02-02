//
// Created by yklsfzy on 2024/1/8/0008.
//
#include <stdio.h>
#include <stdlib.h>
int main(){
    char ch;
    FILE *fp;
    if((fp = fopen("test.txt","w"))==NULL)
    {
        printf("文件打开失败！\n");
        return 1;
    }
    ch = (char )fgetc(fp);
    while(ch!=EOF){
        fputc(ch,fp);
        ch = (char )fgetc(fp);
    }
    return 0;
}