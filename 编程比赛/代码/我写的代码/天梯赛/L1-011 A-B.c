/*
����Ҫ�������A-B�������鷳���ǣ�A��B�����ַ�������
�����ַ���A�а��ַ���B���������ַ�ȫɾ����ʣ�µ��ַ���ɵľ����ַ���A-B��

�����ʽ��
������2�����Ⱥ�����ַ���A��B�����ַ����ĳ��ȶ�������10^4��
���ұ�֤ÿ���ַ��������ɿɼ���ASCII��Ϳհ��ַ���ɣ�����Ի��з�������

�����ʽ��
��һ���д�ӡ��A-B�Ľ���ַ�����

����������
I love GPLT!  It's a fun game!
aeiou
���������
I lv GPLT!  It's  fn gm!
*/
#include <stdio.h>
#include <string.h>

int main()
{
	char a[1001],b[1001];
	int c[128]={0};
	gets(a);
	gets(b);
	int len = strlen(a);
	int len1 = strlen(b);
	int i;
	for( i = 0 ; i < len1 ; i++ ){
		c[b[i]] = 1;
	}
	for( i = 0 ; i < len ; i++ ){
		if(!c[a[i]]){
			putchar(a[i]);
		}
	}
	putchar('\n');
	return 0;
}
/*
import java.io.BufferedReader;
import java.io.InputStreamReader;
 
public class Main {
    // ���ֽ�, ��һ���ֵ����ӳ�ʱ��.
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();
        String str1 = br.readLine();
        System.out.print(str.replaceAll("["+str1+"]", ""));
    }
}
*/
