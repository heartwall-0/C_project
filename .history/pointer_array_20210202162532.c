/*
 * @Author: Daylight
 * @Date: 2021-02-02 15:46:57
 * @LastEditTime: 2021-02-02 16:25:32
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \new_C\pointer_array.c
 */
#include "stdio.h"
#include "stdlib.h"

void OutNumber(int * p, int len){
    int i = 0;
    for(i = 0; i < len; i++){
        printf("%d\n", *(p + i));
    }
    return 0;
}
int main(void){
    int num[5] = {1, 2, 3, 4, 5};
    int len = 0;
    
    len = sizeof(num) / sizeof(int);
    OutNumber(&num, len);
    //! printf("%#x\n", &num);
    //! 等价于printf("%#x\n", &num[0]);
    system("pause");
    return 0;
}