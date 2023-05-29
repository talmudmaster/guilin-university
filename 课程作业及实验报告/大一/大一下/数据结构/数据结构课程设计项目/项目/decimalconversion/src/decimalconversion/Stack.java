package decimalconversion;

public class Stack {
    Object[] stacks; // 栈容器
    int size; // 栈容量
    int top; // 记录位置
    int len; // 栈实际成员数量

    public Stack(int size) {
        super();
        this.size = size;
        this.stacks = new Object[this.size];
        this.top = -1;
    }

    // 获取栈顶元素
    public Object peek() {
        return this.stacks[top];
    }

    // 判断栈是否为空
    public boolean isEmpty() {
        return top == (-1);
    }

    // 判断栈是否已满
    public boolean isFull() {
        return top == (size - 1);
    }

    // 入栈过程
    public void push(Object value) {
        len++;
        stacks[++this.top] = value;
    }

    // 出栈过程
    public Object pop() {
        len--;
        return stacks[this.top--]; // 注意这里不能用“--this.top”，会导致栈溢出
    }

    // 获取栈实际大小
    public int len() {
        return this.len;
    }
    
}