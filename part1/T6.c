#include <stdio.h>

// ͨ��  ָ�루��ַ�� �޸�ֵ
int main6() {

    int i = 100;

    // p:��ֻ���յ�ַ�������һ��100�����淶
    // int * p = i;
    int * p = &i;

    i = 200;

    printf("i��ֵ��:%d\n", i);

    *p = 300;

    printf("i��ֵ��:%d\n", i);

    return 0;
}

