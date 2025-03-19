#include <stdio.h>
int main()
{
    char m_read[800];
    FILE*fp=fopen("main.txt", "w");
    FILE*fpr=fopen("main.c", "r");
    fread(m_read, sizeof(m_read), 1, fpr);
    fprintf(fp, "%s", m_read);
    fclose(fp);
    fclose(fpr);

    return 0;
}
