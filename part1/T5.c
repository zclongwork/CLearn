#include <stdio.h>

// ָ���Ѷȸ�һ��
int main5() {

    int number_int = 100;
    double number_double = 200;
    printf("number_int��ֵ��:%d\n", number_int);
    printf("number_double��ֵ��:%lf\n", number_double);

    // * == ȡ��number_int��ַ����Ӧ��ֵ == 100
    // ָ��ȡ��ֵ
    // ��Ȼ�κα������ǵ�ַ������ʹ�ö��ڻ�ȡֵ����У�
    printf("number_int��ֵ��:%d\n", *(&number_int));
    printf("number_double��ֵ��:%lf\n", *(&number_double));


    //   ================   �Ѷ�

    int * intP = &number_int;
    double * doubleP = &number_double;

    // ��� 100  �� 200
    printf("number_int��ֵ��:%d\n", *intP);
    printf("number_double��ֵ��:%lf\n", *doubleP);

    // ����
    /**
       ͬѧ�ǣ������ȥ������ѯ��ָ������£��ͻᷢ�֣�һЩרҵ������´�ѧ��ʦһֱ˵��������ɹ�Ȱ�˺ܶ�ѧ��������
       �ڴ��ַ�������ڴ��ַ������ָ�룬ָ�������ָ�������.... һ��ε�רҵ���� ...


       ��⣺  ������� ������Ϊ��

       �ڴ��ַ == ָ��
       ָ�� == �ڴ��ַ
        int *��  double *      (int���͵�ָ��)

        ָ�������ָ����� == ����һ���������ѣ�ֻ���� ��ָ��� ���� ����
        intP��  doubleP
     */

    return NULL;
}
