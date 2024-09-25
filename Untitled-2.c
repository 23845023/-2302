#include <stdio.h>  
#include <stdlib.h>  
#include <time.h>  
  
int main() {  
    int size;  
    int *array; // 使用指针来动态分配数组  
    int i;  
  
    // 初始化随机数种子  
    srand(time(NULL));  
  
    // 获取用户输入的数组大小  
    printf("请输入数组的大小：");  
    scanf("%d", &size);  
  
    // 动态分配数组内存  
    array = (int *)malloc(size * sizeof(int));  
    if (array == NULL) {  
        printf("内存分配失败！\n");  
        return 1; // 分配失败时退出程序  
    }  
  
    // 生成随机数并填充数组  
    for (i = 0; i < size; i++) {  
        array[i] = rand() % 100; // 生成0到99之间的随机数  
    }  
  
    // 打印数组元素  
    printf("无序数组：");  
    for (i = 0; i < size; i++) {  
        printf("%d ", array[i]);  
    }  
    printf("\n");  
  
    // 释放动态分配的内存  
    free(array);  
  
    return 0;  
}