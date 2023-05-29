#include <cstdio>
#include <cstring>

bool isPrime(int n) {
    if (n<=1) {
        //特判1不是质数
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
	//判断这个数是否是质数
    int i, j;
    for (i=0; i+k<=strlen(data); i++) {
        num = 0;
        for (j=0; j<k; j++) {
            ans[j] = data[j+i];
            num = num*10 + (ans[j]-'0');
        }
        ans[j] = '\0';
        //测试数据
        if (isPrime(num)) {
            printf("%s\n", ans);
            return 0;
        }
    }
    //运行到这里，说明没有找到
    printf("404\n");
    return 0;
}
