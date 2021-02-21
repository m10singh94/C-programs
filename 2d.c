// to calculate yearly total, yearly average and monthly avrage rainfall
#include <stdio.h>
int main()
{
    float rain[5][12] = {{25.9, 47.0, 12.5, 32.6, 55.21, 55.62, 10.32, 21.05, 09.32, 30.0, 11.02, 14.12},
                         {23.12, 12.02, 13.02, 45.02, 32.05, 45.0, 70.23, 32.13, 20.31, 4.12, 5.61, 3.0},
                         {45.02, 85.0, 45.62, 69.31, 20.13, 12.32, 6.30, 12.52, 30.12, 78.32, 33.0, 55.0},
                         {23.12, 12.02, 13.02, 54.62, 32.05, 45.0, 45.21, 32.13, 61.24, 4.12, 5.61, 3.0},
                         {40.65, 12.02, 87.95, 45.02, 21.24, 45.0, 15.41, 32.13, 30.17, 40.32, 5.61, 3.0}};
    float mon_avg = 0, yr_total[5] = {0}, yr_avg = 0, mon_total;
    int yr = 2015;
    printf("YEAR\tTOT_RAINFALL\n");
    for(int i = 0; i < 5; i++)
    {   for(int j = 0; j < 12; j++)
            yr_total[i] += rain[i][j];
        printf("%4d\t%.2f\n", yr++, yr_total[i]);
        yr_avg += yr_total[i];
    }
    yr_avg /= 5;
    printf("\nAverage rainfall for all 5 yeras = %.2f\n", yr_avg);
    printf("\nMONTHLY AVERAGES : \nJan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");
    for(int i = 0; i < 12; i++)
    {   mon_total = 0;
        for(int j = 0; j < 5; j++)
            mon_total += rain[j][i];
        printf("%.2f   ", mon_total/5);
    }   
    return 0;     
}