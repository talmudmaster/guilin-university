package decimalconversion;//进制转换

import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.ButtonGroup;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JRadioButton;
import javax.swing.JTextField;

public class GUI extends JFrame{
	int ic,fc;
	String regex = "";
	public static void main(String[] args) {
		new GUI();
	}
	public GUI() {
		JFrame frame = new JFrame("进制转换");//创建一个JFrame窗体
		frame.setLayout(null);//无布局
		frame.setSize(600, 400);//设置窗体大小
		frame.setLocationRelativeTo(null);//使窗体居中
		
		JLabel l_initialnumber = new JLabel("初始数值：");//创建一个JLabel标签
		JLabel l_initialconversion = new JLabel("初始进制：");
		JLabel l_finalconversion = new JLabel("转换后进制：");
		JLabel l_finalnumber = new JLabel("转换后数值：");
		l_initialnumber.setBounds(120, 30, 160, 30);//设置标签在窗体中的位置及标签大小
		l_initialconversion.setBounds(120, 90, 160, 30);
		l_finalconversion.setBounds(120, 150, 160, 30);
		l_finalnumber.setBounds(120, 210, 160, 30);
		l_initialnumber.setFont(new Font("宋体", Font.PLAIN, 25));//设置标签内字体格式
		l_initialconversion.setFont(new Font("宋体", Font.PLAIN, 25));
		l_finalconversion.setFont(new Font("宋体", Font.PLAIN,25));
		l_finalnumber.setFont(new Font("宋体", Font.PLAIN,25));
		frame.add(l_initialnumber);//添加组件进入窗体
		frame.add(l_initialconversion);
		frame.add(l_finalconversion);
		frame.add(l_finalnumber);
		
		JTextField initialnumber =new JTextField(100);//创建一个JTextField单行文本域
		JTextField finalnumber =new JTextField(100);
		initialnumber.setEditable(true);//设置文本域内文字可写入
		finalnumber.setEditable(false);//设置文本域内文字不可写入
		initialnumber.setBounds(320, 30, 160, 30);//设置文本域在窗体中的位置及文本域大小
		finalnumber.setBounds(320, 210, 160, 30);
		initialnumber.setFont(new Font("宋体", Font.PLAIN, 25));//设置文本域内字体格式
		finalnumber.setFont(new Font("宋体", Font.PLAIN,25));
		frame.add(initialnumber);//添加组件进入窗体
		frame.add(finalnumber);
		
		JButton button1 = new JButton("运算");//创建一个JButton按钮
		JButton button2 = new JButton("清空");
		button1.setBounds(120, 270, 160, 30);//设置按钮在窗体中的位置及按钮大小
		button2.setBounds(320, 270, 160, 30);
		button1.setFont(new Font("宋体", Font.PLAIN, 20));//设置文本域内字体格式
		button2.setFont(new Font("宋体", Font.PLAIN, 20));
		frame.add(button1);//添加组件进入窗体
		frame.add(button2);
		
		//设置两套按钮组，分别代表初始进制和转换后进制，且两种进制设置为不相同
		JPanel panel1=new JPanel();    //创建面板
        JPanel panel2=new JPanel();
        JRadioButton i2=new JRadioButton("2");    //创建JRadioButton对象
        JRadioButton i8=new JRadioButton("8");    //创建JRadioButton对象
        JRadioButton i10=new JRadioButton("10");    //创建JRadioButton对象
        JRadioButton i16=new JRadioButton("16");    //创建JRadioButton对象
        
        JRadioButton f2=new JRadioButton("2");    //创建JRadioButton对象
        JRadioButton f8=new JRadioButton("8");    //创建JRadioButton对象
        JRadioButton f10=new JRadioButton("10");    //创建JRadioButton对象
        JRadioButton f16=new JRadioButton("16");    //创建JRadioButton对象
        
        ButtonGroup group1=new ButtonGroup();
        ButtonGroup group2=new ButtonGroup();
        
		panel1.setBounds(320, 90, 160, 30);
		panel2.setBounds(320, 150, 160, 30);
        
        //添加JRadioButton到ButtonGroup中
        group1.add(i2);
        group1.add(i8);
        group1.add(i10);
        group1.add(i16);
        
        group2.add(f2);
        group2.add(f8);
        group2.add(f10);
        group2.add(f16);
        
        panel1.add(i2);
        panel1.add(i8);
        panel1.add(i10);
        panel1.add(i16);
        
        panel2.add(f2);
        panel2.add(f8);
        panel2.add(f10);
        panel2.add(f16);
        
        frame.add(panel1);
        frame.add(panel2);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);////用户单击窗口的关闭按钮时程序执行的操作
        
        i2.addActionListener(new ActionListener() {//（运算按钮）事件监听器
			public void actionPerformed(ActionEvent e) {//（按钮）点击事件
				frame.setVisible(true);
				i2.setVisible(true);
				
				ic=2;
				regex = "^[0-1]+$";//提前设置进制所对应的正则表达式
				
				f2.setEnabled(false);//隐藏相同的进制数
				f8.setEnabled(true);
				f10.setEnabled(true);
				f16.setEnabled(true);
				
			}
		});
        
        i8.addActionListener(new ActionListener() {//（运算按钮）事件监听器
			public void actionPerformed(ActionEvent e) {//（按钮）点击事件
				frame.setVisible(true);
				i8.setVisible(true);
				
				ic=8;
				regex = "^[0-7]+$";
				
				f2.setEnabled(true);
				f8.setEnabled(false);
				f10.setEnabled(true);
				f16.setEnabled(true);
			}
		});
        
        i10.addActionListener(new ActionListener() {//（运算按钮）事件监听器
			public void actionPerformed(ActionEvent e) {//（按钮）点击事件
				frame.setVisible(true);
				i10.setVisible(true);
				
				ic=10;
				regex = "^[0-9]+$";
				
				f2.setEnabled(true);
				f8.setEnabled(true);
				f10.setEnabled(false);
				f16.setEnabled(true);
			}
		});
        
        i16.addActionListener(new ActionListener() {//（运算按钮）事件监听器
			public void actionPerformed(ActionEvent e) {//（按钮）点击事件
				frame.setVisible(true);
				i16.setVisible(true);

				ic=16;
				regex = "^[A-F0-9]+$";
				
				f2.setEnabled(true);
				f8.setEnabled(true);
				f10.setEnabled(true);	
				f16.setEnabled(false);
			}
		});
        
        
        
        
        f2.addActionListener(new ActionListener() {//（运算按钮）事件监听器
			public void actionPerformed(ActionEvent e) {//（按钮）点击事件
				frame.setVisible(true);
				f2.setVisible(true);
				
				fc=2;
				
				i2.setEnabled(false);
				i8.setEnabled(true);
				i10.setEnabled(true);
				i16.setEnabled(true);
				
			}
		});
        
        f8.addActionListener(new ActionListener() {//（运算按钮）事件监听器
			public void actionPerformed(ActionEvent e) {//（按钮）点击事件
				frame.setVisible(true);
				f8.setVisible(true);
				
				fc=8;
				
				i2.setEnabled(true);
				i8.setEnabled(false);
				i10.setEnabled(true);
				i16.setEnabled(true);
			}
		});
        
        f10.addActionListener(new ActionListener() {//（运算按钮）事件监听器
			public void actionPerformed(ActionEvent e) {//（按钮）点击事件
				frame.setVisible(true);
				f10.setVisible(true);
				
				fc=10;
				
				i2.setEnabled(true);
				i8.setEnabled(true);
				i10.setEnabled(false);
				i16.setEnabled(true);
			}
		});
        
        f16.addActionListener(new ActionListener() {//（运算按钮）事件监听器
			public void actionPerformed(ActionEvent e) {//（按钮）点击事件
				frame.setVisible(true);
				f16.setVisible(true);

				fc=16;
				
				i2.setEnabled(true);
				i8.setEnabled(true);
				i10.setEnabled(true);
				i16.setEnabled(false);
			}
		});
		
		
		
		button1.addActionListener(new ActionListener() {//（运算按钮）事件监听器
			public void actionPerformed(ActionEvent e) {//（按钮）点击事件
				frame.setVisible(true);
				button1.setVisible(true);
				String in;//定义初始数值，因为16进制数有字母，所以不能用int类型
				
				try {
					in = initialnumber.getText().trim();//获取文本域中内容赋值给in
					if(!in.matches(regex)) {
						JOptionPane.showMessageDialog(frame, "填写的初始数值与初始进制不符合，请修改您的初始数值", "错误", JOptionPane.ERROR_MESSAGE);//出现错误则显示对话框提示
					}else {
						finalnumber.setText(Decimalconversion.baseConvert(in, ic, fc));//调用TestStack类中baseConvert函数计算出最终结果并设置文本让其显示在文本域中
					}
				} catch (NumberFormatException ex) {
					JOptionPane.showMessageDialog(frame, "请检查输入是否有误", "错误", JOptionPane.ERROR_MESSAGE);//抛出异常则显示对话框提示
				}	
			}
		});
		
		button2.addActionListener(new ActionListener() {//（清空按钮）事件监听器
			public void actionPerformed(ActionEvent e) {//（按钮）点击事件
				frame.setVisible(true);
				button1.setVisible(true);
				
				try {
					initialnumber.setText("");//将文本域中内容清空
					finalnumber.setText("");
				} catch (NumberFormatException ex) {
					JOptionPane.showMessageDialog(frame, "出现错误", "错误", JOptionPane.ERROR_MESSAGE);
				}			
			}
		});		
	}	
}