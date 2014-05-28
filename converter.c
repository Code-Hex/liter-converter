#include <stdio.h>
#include <string.h>

int main() {

	int num, a, b;
	char l[256];
	char *p;

    printf("\n"); 
    puts("リットルコンバーター ------ ver 0.1 ------");
	printf("l or dl or ml => "); fgets(l, sizeof(l), stdin);
	p = strchr(l, '\n'); (p != NULL)? *p = '\0' : 0; /* fgetsの改行を削除する */


    if (!strcmp(l, "l")) /* string.h の効果*/
    {
    printf("liter => "); scanf("%d",&num);
    a = num * 10;
	b = num * 1000;

	printf("%dデシリットル\n", a);
	printf("%dミリリットル\n", b);
    }
    else if (!strcmp(l, "dl")) /* string.h の効果*/
    {
    printf("deciliter => "); scanf("%d",&num);
    a = num / 10;
	b = num * 10;

	printf("%dリットル\n", a);
	printf("%dミリリットル\n", b);
    }
    else if (!strcmp(l, "ml")) /* string.h の効果*/
    {
    printf("milliliter => "); scanf("%d",&num);
    a = num / 1000;
	b = num / 10;

	printf("%dリットル\n", a);
	printf("%dデシリットル\n", b);
    }
    else {
    	puts("なんかおかしいよ！");
    	puts("何がおかしいとかは白根(笑)");
	}


  return 0;

}