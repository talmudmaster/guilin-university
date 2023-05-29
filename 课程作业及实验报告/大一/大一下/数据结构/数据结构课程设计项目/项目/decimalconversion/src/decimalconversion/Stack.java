package decimalconversion;

public class Stack {
    Object[] stacks; // ջ����
    int size; // ջ����
    int top; // ��¼λ��
    int len; // ջʵ�ʳ�Ա����

    public Stack(int size) {
        super();
        this.size = size;
        this.stacks = new Object[this.size];
        this.top = -1;
    }

    // ��ȡջ��Ԫ��
    public Object peek() {
        return this.stacks[top];
    }

    // �ж�ջ�Ƿ�Ϊ��
    public boolean isEmpty() {
        return top == (-1);
    }

    // �ж�ջ�Ƿ�����
    public boolean isFull() {
        return top == (size - 1);
    }

    // ��ջ����
    public void push(Object value) {
        len++;
        stacks[++this.top] = value;
    }

    // ��ջ����
    public Object pop() {
        len--;
        return stacks[this.top--]; // ע�����ﲻ���á�--this.top�����ᵼ��ջ���
    }

    // ��ȡջʵ�ʴ�С
    public int len() {
        return this.len;
    }
    
}