#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *low[] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
char *high[] = {"", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

int main() {
    int n, i, num, h, l;
    char s[20], s1[10], s2[10];
    scanf("%d", &n);
    getchar();
    while (n--) {
        gets(s);
        if (isdigit(s[0])) {
            num = 0;
            for (i = 0; s[i]; i++) {
                num = num * 10 + (s[i] - '0');
            }
            h = num / 13;
            l = num % 13;
            if (h) {
                printf("%s", high[h]);
                if (l) printf(" %s", low[l]);
            } else {
                printf("%s", low[l]);
            }
            printf("\n");
        } else {
            num = 0;
            if (strchr(s, ' ')) {
                sscanf(s, "%s %s", s1, s2);
                for (i = 1; i <= 12; i++) {
                    if (strcmp(s1, high[i]) == 0) num += i * 13;
                    if (strcmp(s2, low[i]) == 0) num += i;
                }
            } else {
                for (i = 0; i <= 12; i++) {
                    if (strcmp(s, low[i]) == 0) {
                        num = i;
                        break;
                    }
                }
                for (i = 1; i <= 12; i++) {
                    if (strcmp(s, high[i]) == 0) {
                        num = i * 13;
                        break;
                    }
                }
            }
            printf("%d\n", num);
        }
    }
    return 0;
}
