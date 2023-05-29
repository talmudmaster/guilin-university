package decimalconversion;

import java.util.Arrays;

public class Decimalconversion {
    // ͨ�ý���ת������
    public static String baseConvert(String initialnumber, int initialconversion,int finalconversion) {
        Stack stack = new Stack(100);
        char[] a=new char[]{'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
        char[] b=initialnumber.toCharArray();
        int bNumber=0,t=0;
        
        for (char p:b){
            stack.push(p);
        }
        
        //����ʼ����תΪ10����
        while (!stack.isEmpty()){
            char temp=(char) stack.pop();
            bNumber+= Arrays.binarySearch(a,temp)*Math.pow(initialconversion,t);
            t++;
        }
        
        //��10����תΪ�����������
        StringBuilder builder=new StringBuilder();
        while (bNumber>0){
            stack.push(a[bNumber%finalconversion]);
            bNumber/=finalconversion;
        }
        while (!stack.isEmpty()) {
            builder.append(stack.pop());
        }
        
        String str;
        str=builder.toString();
        return str;
    }
}
