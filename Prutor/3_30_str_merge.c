#include <stdio.h>

char *strMerge(char *s, char *t)
{
    int len1, len2;
    len1 = strlen(s);
    len2 = strlen(t);
    int count = len1 + len2;
    char *str = (char *)malloc(sizeof(char) * count);

    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < count;)
    {
        if (len1)
        {
            str[i] = s[cnt1++];
            i++;
            len1--;
        }
        if (len2)
        {
            str[i] = t[cnt2++];
            len2--;
            i++;
        }
    }

    printf("%s", str);
    //  printf("%d",strlen(str));

    return str;

    //write your code here
}
int main()
{

    char str1[128], str2[128];
    scanf("%s", str1);
    scanf("%s", str2);
    strMerge(str1, str2);

    //code
    return 0;
}