#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void num(int l){
    int n =7;
    int cout[n]; 
    FILE* fp;
    fp = fopen("lotto.txt", "w");
    time_t curtime;
    time(&curtime);
    srand(1);
    fprintf(fp,"========= lotto649 =========\n");
    for (int i =1; i <=2; i++){
        for ( int k =0;k <n; k++){
            cout[k] = rand() %69 + 1;
                for ( int j =0;j <k; j++){
                    if (cout[k] == cout[j]){
                        k--;
                        break;
                    }
                }
        }
        fprintf(fp, "[%d]: ", i);
        for(int a =0; a <n; a++){
            fprintf(fp, "%02d ", cout[a]);
        }
        fprintf(fp, "\n");
    }
    fprintf(fp,"========= csie@CGU =========\n");    
    fclose (fp);
    return;
}
int main()
{
    
    int l;
    printf("請輸入要的樂透份數：");
    scanf("%d", &l);
    num(l);
    return 0;
}
