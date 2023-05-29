package simplecalculator;

import java.awt.Dimension;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ComponentEvent;
import java.awt.event.*;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;

//定义Calculator继承自JFrame类，实现ActionListener接口
public class Calculator extends JFrame implements ActionListener {
	// first表示第一个数字为真 , flag表示运算符不连续
	boolean first = true, flag = true;
	String num = "0";
	String operator = "=";// 定义操作符变量
	double n, result;
	final JTextField textField = new JTextField("0");// 创建一个文本框
	private long changDu = 1L;
	
	// 构造方法
	public Calculator() { 
		// 创建窗体
		this.setTitle("计算器");
		//设置窗口可见		
		this.setVisible(true);
		//设置窗口大小
		this.setSize(455,430);
		//设置窗口居中
		this.setLocationRelativeTo(null);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);//设置默认的关闭操作
		this.setLayout(null);// 窗体不做布局
		
		// 顶部文本框	
		textField.setBounds(10, 0, 415, 43);// 设置文本框边界
		this.add(textField);// 添加一个文本框
		//设置文本框中的内容向右对齐
		textField.setHorizontalAlignment(JTextField.RIGHT);
		
		// 按钮+网格布局管理器
		GridLayout gridLayout = new GridLayout(5, 4, 5, 5);// 创建一个网格
		JPanel buttonPanel = new JPanel();// 创建一个按钮面板
		buttonPanel.setLayout(gridLayout);// 设置按钮面板
		this.add(buttonPanel);// 添加一个按钮面板
		buttonPanel.setBounds(10, 43, 415, 325);// 设置按钮边界
		String[][] b = {
				// 二维字符数组添加按钮名称
				{ "<—", "/", "*", "C" }, 
				{ "7", "8", "9", "-" },
				{ "4", "5", "6", "+" }, 
				{ "1", "2", "3", "1/x" },
				{ "%", "0", ".", "=" } };
		JButton[][] button = new JButton[10][10];// 二维数组创建按钮
		int i, j;
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 4; j++) {
				button[i][j] = new JButton(b[i][j]);
				buttonPanel.add(button[i][j]);// 添加按钮
				button[i][j].addActionListener(this);// 添加当前按钮监听器
			}
		}
		//当窗口大小改变时其文本框和按钮随之变化
		this.addComponentListener(new ComponentAdapter() {			
			//当窗口大小改变时			
			public void componentResized(ComponentEvent e) {                                
				//获取窗口的大小			        
				Dimension d = getSize();				
				//设置组件的大小                                
				textField.setBounds(10, 0, d.width-40, (int)(0.1*d.height));                                
				buttonPanel.setBounds(10, (int)(0.1*d.height), d.width-40, (int)(0.9*d.height-60));
			} 					
		});		
	}
	
	public void actionPerformed(ActionEvent e) {// 实现actionPerformed方法
		String s = e.getActionCommand();// 获取动作命令
		if (s.equals("<—")) 
		{ // 按下的键等于<—
			String text = textField.getText();
			int i =text.length();
			if(i>0) {
				//退格，将文本最后一个字符去掉
				text =text.substring(0, i-1);
				if(i==1) {
					//如果文本框没有内容，则初始化计算器的各种值
					textField.setText("0");
					first = true;
					operator = "=";
				}else {
					//显示新的文本
					textField.setText(text);
					result = Integer.valueOf(text).intValue();
					num = text;
				}
			}		
		}else if (s.equals("C")) {// 按下的键等于C
			textField.setText("0");// 设置文本框为0
			// 初始化
			first = true;
			num = "0";
			result = 0.0;
			operator = "=";
		}else if (s.equals(".")){// 按下的键等于.
			// 数字之前没有小数点
			if (num.indexOf(".") < 0) {	
				num += ".";// 将小数点加到数字的后面
				textField.setText(num);// 文本框显示加小数点后数字
				first = false;// 表示第一个数字为假
			}
		}else if (s.equals("+") || s.equals("-") || s.equals("*") || s.equals("/") ||// 如果输入的操作符为+ - * / = 1/x % 
				s.equals("=") || s.equals("1/x")|| s.equals("%")) {
			first = true;// 表示第一个数字为真
			n = Double.valueOf(num);// 把返回值赋值给n
			if (flag == false){
				// 如果运算符连续，不合法，执行空方法
			} else if (operator.equals("+"))// 加法运算
				result += n;
			else if (operator.equals("*"))// 乘法运算
				result *= n;
			else if (operator.equals("-"))// 减法运算
				result -= n;
			else if (operator.equals("/")){// 除法运算
				if (n != 0) {
					result /= n;
				}
				else {
					// 操作不合法，弹出消息对话框
					JOptionPane.showMessageDialog(this, "操作不合法!", "提示", DISPOSE_ON_CLOSE);
					first = true;
				}
			} else if (s.equals("%")){// 百分号运算，除以100				
				result = n / 100;
			}
			else if (s.equals("1/x")){// 倒数运算
				if (n == 0.0) {
					// 操作不合法，弹出消息对话框
					JOptionPane.showMessageDialog(this, "操作不合法!", "提示", DISPOSE_ON_CLOSE);
					first = true;
				} else {
					result = 1 /n;
				}
			} 
			else if (operator.equals("=")){// 赋值运算
				result = n;
			}
			if ((int) result == result){// 结果处理,强制类型转换
				textField.setText(Integer.toString((int)result));
				num = textField.getText();
			} 
			else{
				textField.setText(Double.toString(result));//设置文本组件的内容
				num = textField.getText();//获取文本组件的内容，并赋值给num
			}
			System.out.println(num);
			flag = false;
			first = true;
			operator = s;
			} 
			else if (first){
				textField.setText(s);
				num = textField.getText();
				first = false;
				flag = true;
			} 
			else{
				textField.setText(textField.getText() + s);
				num = textField.getText();
			}		
	}

	public static void main(String[] args) {
		new Calculator();
	}
}