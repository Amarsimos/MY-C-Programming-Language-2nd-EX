
#include <stdio.h>
//������ʳ���
//ֱ��ͼ
int main()
{
    int c ,state = 0;
    int number = 0;// �ۼӵ����ַ�����
    while((c=getchar()) != EOF)
    {
       if(!(c == ' ' || c == '\t' || c == '\n'))
       {
           state = 1;
           putchar(c); //��ӡ��ÿһ���ַ���������if�������ģ�
           ++number;// number���մ�ŵ���һ�������ַ��ĸ���
       }
       else
       {
           if(state == 1)//������һ�����ո�\t,\n����������ֻ����һ��
           {
               printf("\t\t\t");
               for(int i = 0;i<number;++i)//�����ַ��������һ����*��
                   printf("*");
               printf("\t\t\t%d��",number);
               putchar('\n');
               number = 0;//��number��0���ۼ���һ�����ʵ��ַ�����
           }
           state = 0;//������0�����һ�����������������������ո�\t,\n�����������if(state==1)�������
       }
    }
    return 0;
}
