#include <stdio.h>

// C���Բ����������أ�    Java���ԣ�C++����

// void change(int i); // ������

void change(int * i); // ������

// ���� ȡ�޸�һ������ָ�������
int main7() {

    int i = 100;

    change(&i);

    printf("%d\n", i);

    // * i �� *i ��ʲô������  û���� д������

    /*
        int * i;  ����ָ��

        *i = 888;  ȡ���ڴ��ַ����Ӧ��ֵ�޸ĳ� 888
    */

    return 0;
}

// ��������д�� main�����棬�ᱨ��
// void change(int i) {}

// ��ʵ��
/*void change(int i) {

    printf("change�ڴ��ַ��%p\n", &i);

    i = 200;
}*/

// ��ʵ��
// ʹ��ָ�� ���޸�
void change(int * i) {

    *i = 666;
}

