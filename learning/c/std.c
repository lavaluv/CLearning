#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    //<stdio.h>
    int getc(File *fp):return next char from fp,if
    error return EOF
    int putc(int c,File *fp):output c to fp and return
    c.
    char * gets(char *in)/int puts(char *out):read/write
    line;read delete ‘\n’;write add ‘\n’

    int getchar(void)/#define getchar(FILE *fp) getc(stdin):
    read a char from std input;
    use < to redirect input to file or other input

    int putchar(int)/#define putc(int c,FILE* fp):
    send char to std output;
    if success return the char,if flase return EOF;
    use > to redirect output

    int printf(char *format,arg1,arg2,...):output 
    variable using format,return the number of char
    int fprintf(FILE *fp,char *format,...)

    int scanf(char *format,...):read char from std
    input,retrun input count
    int fscanf(FILE *fp,char *format,...)

    int sprintf(char *string,char *format,arg1,arg2,...):
    save to string 

    int sscanf(char *string,char *format,...):read
    from string

    FILE * fopen(char *filename,char *mode):open file,
    reaturn FILE ptr,include buffer/buffer index/status/
    error/EOF etc. Mode include “r”read,”w”write,”a”add,
    ”b”binary
    int fopen(FILE *)/int fclose(FILE *)/int ferror(FILE *)
    int feof(FILE *):FILE statuts control
    char *fgets(char * line,int maxLine,FILE * fp):read line
    char *fputs(char * line,FILE * fp):write line

    //<ctype.h>
    toLower(c)/toupper(c)
    isalpha(c)/isdigit(c)/isalnum(c)
    islower(c)/isupper(c)
    isspace(c)

    //<String.h>
    int strlen(s):return length of string
    strcat(s,t)/strncat(s,t,n):add (n char) t to tail of s
    strcmp(s,t)/strncmp(s,t,n):compare s,t
    strcpy(s,t)/strncpy(s,t,n):copy (m char) from t to s
    strchr(s,c)/strrchr(s,c):return index of first(last) c

    <math.h>
    exp(x)/log(x)/log10(x)/pow(x,y)/sqrt(x)/fabs(x)
*/
int main(int argc, char *argv[]){
    char *prog = argv[0];
    printf("%s is running.\n",prog);
    {
        FILE *fp = fopen("test.txt","w");
        char c;
        if(fp != NULL){
            while((c = getchar()) != EOF){
                putc(c,fp);
            }
            fclose(fp);
        }
        else{
            fprintf(stderr,"%s failed to open %n",prog,"test.txt");
            exit(1);
        }
        fp = fopen("test.txt","r");
        if(fp != NULL){
            while((c = getc(fp)) != EOF){
            putc(c,stdout);
            }
            fclose(fp);
        }
        else{
            fprintf(stderr,"%s failed to open %n",prog,"test.txt");
            exit(2);
        }   
    }
}