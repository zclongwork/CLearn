#include <stdio.h>

// ��������ռ�õ��ֽ���(���������У��ǳ����õ�)  sizeof��ȡ�ֽ���
int main3() {

    // int ռ�����ֽ�  == 4
    // double ռ�����ֽ� == 8
    // char ռ�����ֽ� == 8

    printf("int ����������ռ���ֽ�����%d\n", sizeof(int));// 4
    printf("double ����������ռ���ֽ�����%d\n", sizeof(double));// 8
    printf("char ����������ռ���ֽ�����%d\n", sizeof(char));// 1

    return NULL; // NULL == 0
}

