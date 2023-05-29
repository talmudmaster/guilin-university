#include <cstdio>
#include <cstring>

bool isPrime(int n) {
    if (n<=1) {
        //����1��������
        return false;
    }
    for (int i=2; i*i<=n; i++) {
        if (0==n%i) {
            return false;
        }
    }
    return true;
}

int main() 
{
    int l, k;
    char data[1002];
    char ans[10];
    scanf("%d %d %s", &l, &k, data);
    int num;
	//�ж�������Ƿ�������
    int i, j;
    for (i=0; i+k<=strlen(data); i++) {
        num = 0;
        for (j=0; j<k; j++) {
            ans[j] = data[j+i];
            num = num*10 + (ans[j]-'0');
        }
        ans[j] = '\0';
        //��������
        if (isPrime(num)) {
            printf("%s\n", ans);
            return 0;
        }
    }
    //���е����˵��û���ҵ�
    printf("404\n");
    return 0;
}
