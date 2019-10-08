#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/*
 * Structs, enums and unions definitions
 * Typedefs
 * prototypes
 */
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);


void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /* _HOLBERTON_H_ */
