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

//����Calculator�̳���JFrame�࣬ʵ��ActionListener�ӿ�
public class Calculator extends JFrame implements ActionListener {
	// first��ʾ��һ������Ϊ�� , flag��ʾ�����������
	boolean first = true, flag = true;
	String num = "0";
	String operator = "=";// �������������
	double n, result;
	final JTextField textField = new JTextField("0");// ����һ���ı���
	private long changDu = 1L;
	
	// ���췽��
	public Calculator() { 
		// ��������
		this.setTitle("������");
		//���ô��ڿɼ�		
		this.setVisible(true);
		//���ô��ڴ�С
		this.setSize(455,430);
		//���ô��ھ���
		this.setLocationRelativeTo(null);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);//����Ĭ�ϵĹرղ���
		this.setLayout(null);// ���岻������
		
		// �����ı���	
		textField.setBounds(10, 0, 415, 43);// �����ı���߽�
		this.add(textField);// ���һ���ı���
		//�����ı����е��������Ҷ���
		textField.setHorizontalAlignment(JTextField.RIGHT);
		
		// ��ť+���񲼾ֹ�����
		GridLayout gridLayout = new GridLayout(5, 4, 5, 5);// ����һ������
		JPanel buttonPanel = new JPanel();// ����һ����ť���
		buttonPanel.setLayout(gridLayout);// ���ð�ť���
		this.add(buttonPanel);// ���һ����ť���
		buttonPanel.setBounds(10, 43, 415, 325);// ���ð�ť�߽�
		String[][] b = {
				// ��ά�ַ�������Ӱ�ť����
				{ "<��", "/", "*", "C" }, 
				{ "7", "8", "9", "-" },
				{ "4", "5", "6", "+" }, 
				{ "1", "2", "3", "1/x" },
				{ "%", "0", ".", "=" } };
		JButton[][] button = new JButton[10][10];// ��ά���鴴����ť
		int i, j;
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 4; j++) {
				button[i][j] = new JButton(b[i][j]);
				buttonPanel.add(button[i][j]);// ��Ӱ�ť
				button[i][j].addActionListener(this);// ��ӵ�ǰ��ť������
			}
		}
		//�����ڴ�С�ı�ʱ���ı���Ͱ�ť��֮�仯
		this.addComponentListener(new ComponentAdapter() {			
			//�����ڴ�С�ı�ʱ			
			public void componentResized(ComponentEvent e) {                                
				//��ȡ���ڵĴ�С			        
				Dimension d = getSize();				
				//��������Ĵ�С                                
				textField.setBounds(10, 0, d.width-40, (int)(0.1*d.height));                                
				buttonPanel.setBounds(10, (int)(0.1*d.height), d.width-40, (int)(0.9*d.height-60));
			} 					
		});		
	}
	
	public void actionPerformed(ActionEvent e) {// ʵ��actionPerformed����
		String s = e.getActionCommand();// ��ȡ��������
		if (s.equals("<��")) 
		{ // ���µļ�����<��
			String text = textField.getText();
			int i =text.length();
			if(i>0) {
				//�˸񣬽��ı����һ���ַ�ȥ��
				text =text.substring(0, i-1);
				if(i==1) {
					//����ı���û�����ݣ����ʼ���������ĸ���ֵ
					textField.setText("0");
					first = true;
					operator = "=";
				}else {
					//��ʾ�µ��ı�
					textField.setText(text);
					result = Integer.valueOf(text).intValue();
					num = text;
				}
			}		
		}else if (s.equals("C")) {// ���µļ�����C
			textField.setText("0");// �����ı���Ϊ0
			// ��ʼ��
			first = true;
			num = "0";
			result = 0.0;
			operator = "=";
		}else if (s.equals(".")){// ���µļ�����.
			// ����֮ǰû��С����
			if (num.indexOf(".") < 0) {	
				num += ".";// ��С����ӵ����ֵĺ���
				textField.setText(num);// �ı�����ʾ��С���������
				first = false;// ��ʾ��һ������Ϊ��
			}
		}else if (s.equals("+") || s.equals("-") || s.equals("*") || s.equals("/") ||// �������Ĳ�����Ϊ+ - * / = 1/x % 
				s.equals("=") || s.equals("1/x")|| s.equals("%")) {
			first = true;// ��ʾ��һ������Ϊ��
			n = Double.valueOf(num);// �ѷ���ֵ��ֵ��n
			if (flag == false){
				// �����������������Ϸ���ִ�пշ���
			} else if (operator.equals("+"))// �ӷ�����
				result += n;
			else if (operator.equals("*"))// �˷�����
				result *= n;
			else if (operator.equals("-"))// ��������
				result -= n;
			else if (operator.equals("/")){// ��������
				if (n != 0) {
					result /= n;
				}
				else {
					// �������Ϸ���������Ϣ�Ի���
					JOptionPane.showMessageDialog(this, "�������Ϸ�!", "��ʾ", DISPOSE_ON_CLOSE);
					first = true;
				}
			} else if (s.equals("%")){// �ٷֺ����㣬����100				
				result = n / 100;
			}
			else if (s.equals("1/x")){// ��������
				if (n == 0.0) {
					// �������Ϸ���������Ϣ�Ի���
					JOptionPane.showMessageDialog(this, "�������Ϸ�!", "��ʾ", DISPOSE_ON_CLOSE);
					first = true;
				} else {
					result = 1 /n;
				}
			} 
			else if (operator.equals("=")){// ��ֵ����
				result = n;
			}
			if ((int) result == result){// �������,ǿ������ת��
				textField.setText(Integer.toString((int)result));
				num = textField.getText();
			} 
			else{
				textField.setText(Double.toString(result));//�����ı����������
				num = textField.getText();//��ȡ�ı���������ݣ�����ֵ��num
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