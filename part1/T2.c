#include <stdio.h>

// ������������
int main2() {

    int i = 100;
    double d = 200;
    float f = 200;
    long l = 100;
    short s = 100;
    char c = 'd';
    // �ַ���
    char * str = "Derry";

    // ��������ӡ�ģ���Ҫռλ
    printf("i��ֵ�ǣ�%d\n", i); // d == ����
    printf("d��ֵ��:%lf\n", d); // lf == long float
    printf("f��ֵ��:%f\n", f); // f == float
    printf("l��ֵ��:%d\n", l); // d == ����
    printf("s��ֵ��:%d\n", s); // s == short
    printf("c��ֵ��:%c\n", c); // c == char
    printf("�ַ���:%s\n", str); // s == String

    printf("Derry");
    // getchar();
}

