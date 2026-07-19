#include <stdio.h>
#include <stdbool.h>

int my_strlen(const char *str) {
    int len = 0;
    while (str[len] != '\n')
        len++;
    return len;
}

int find_substring(const char *haystack, const char *needle) {
    int hlen = my_strlen(haystack);
    int nlen = my_strlen(needle);

    for (int i = 0; i <= hlen - nlen; i++) {
        bool found = true;

        for (int j = 0; j < nlen; j++) {
            if (haystack[i + j] != needle[j]) {
                found = false;
                break;
            }
        }

        if (found)
            return i;
    }

    return -1;
}

int main(){
       	char haystack[100],needle[100];
       	printf("Enter the value of haystack: ");
       	fgets(haystack,sizeof(haystack),stdin);
       	printf("Enter the value of needle: "); 
	fgets(needle,sizeof(needle),stdin); 
	printf("ans = %d",find_substring(haystack,needle));
}
