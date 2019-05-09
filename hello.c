#include <stdio.h>

int main(int argc, char *argv[]) {
// char *: 
//    int a = 10;
//    int * b = &a; // pointer l'adresse de "a"
//    int c = *b; // 
// char tab[10] = "abcdefghij";
//   printf("%s \n",tab);

    for(int i = 1; i<argc; ++i)
	printf("%s %s \n","bonjour",argv[i]);
//    printf("%d",somme(1,2));	

 //   printf("Hello, world! %d %p %d \n",a,(void*)b,c);
    return 0;
}
