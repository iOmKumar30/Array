#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[] = "ubuntulinux";

    // strlen returns the length of the string
    printf("Length of string: %d\n", strlen(s));

    // to lower case
    printf("%s\n", strlwr(s));

    // to upper case
    printf("%s\n", strupr(s));

    // concatenate two strings
    char t[] = "OS";
    strcat(s, t);
    printf("%s\n", s);

    // appends first n characters of a string to another string
    char u[] = "helloworld";
    strncat(s, u, 5);
    printf("%s\n", s);

    // copy one string to another
    char copy[100];
    strcpy(copy, s);
    printf("%s\n", copy);

    // copy first n characters of a string to another string
    char copy2[100];
    strncpy(copy2, s, 10);
    printf("%s\n", copy2);

    // compare two strings
    char a[] = "cat";
    char b[] = "car";
    printf("%d\n", strcmp(a, b)); // positive values implies first string is lexicographically greater than second string

    // compare two strings without regards to case
    char c[] = "cat";
    char d[] = "CAT";
    //
    printf("%d\n", strcmpi(c, d)); // zero values implies both strings are equal

    // compares first n characters of two strings without regards to case
    char e[] = "catIsCute";
    char f[] = "CatIsPretty";
    printf("%d\n", strnicmp(e, f, 5)); // zero values implies first 5 characters of both strings are equal

    // duplicate a string
    char g[] = "hello";
    char *h = strdup(g);
    printf("%s\n", h);

    // find first occurence of a character in a string
    char i[] = "hello";
    char j = 'l';
    printf("%d\n", strchr(i, j) - i); // strchr returns the address of the first occurence of the character hence we do -i to get the index

    // find last occurence of a character in a string
    char k[] = "hello";
    char l = 'l';
    printf("%d\n", strrchr(k, l) - k);

    // find first occurence of a given string in another string
    char m[] = "hi there hello world hello galaxy hello unvierse";
    char n[] = "hello";
    printf("%d\n", strstr(m, n) - m);

    // set all characters of a string to a given character
    char o[] = "hello";
    char p = 'a';
    strset(o, p);
    printf("%s\n", o);

    // set first n characters of a string to a given character
    char q[] = "helloworld";
    char r = 'a';
    strnset(q, r, 5);
    printf("%s\n", q);

    // reverse a string
    char x[] = "hello";
    strrev(x);
    printf("%s\n", x);
    return 0;
}