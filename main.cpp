//����13���1��
//��һ��������ķ��ӷ�ĸ�����Լ�ֺ�ķ��ӷ�ĸ
#include <stdio.h>

int gcd (int m,int n)//m>n
{
    if(m%n==0)  return n;
        else return gcd(n,m%n);
}

int main()
{
    int p,q;
    int r;
    while(scanf("%d %d",&p,&q)!=EOF)
    {
        r = gcd(p,q);
        p = p/r;
        q = q/r;
        printf("%d %d\n",p,q);
    }
    return 0;
}
