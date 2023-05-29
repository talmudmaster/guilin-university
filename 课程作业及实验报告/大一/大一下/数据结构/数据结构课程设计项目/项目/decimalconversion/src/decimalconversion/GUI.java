package decimalconversion;//����ת��

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
		JFrame frame = new JFrame("����ת��");//����һ��JFrame����
		frame.setLayout(null);//�޲���
		frame.setSize(600, 400);//���ô����С
		frame.setLocationRelativeTo(null);//ʹ�������
		
		JLabel l_initialnumber = new JLabel("��ʼ��ֵ��");//����һ��JLabel��ǩ
		JLabel l_initialconversion = new JLabel("��ʼ���ƣ�");
		JLabel l_finalconversion = new JLabel("ת������ƣ�");
		JLabel l_finalnumber = new JLabel("ת������ֵ��");
		l_initialnumber.setBounds(120, 30, 160, 30);//���ñ�ǩ�ڴ����е�λ�ü���ǩ��С
		l_initialconversion.setBounds(120, 90, 160, 30);
		l_finalconversion.setBounds(120, 150, 160, 30);
		l_finalnumber.setBounds(120, 210, 160, 30);
		l_initialnumber.setFont(new Font("����", Font.PLAIN, 25));//���ñ�ǩ�������ʽ
		l_initialconversion.setFont(new Font("����", Font.PLAIN, 25));
		l_finalconversion.setFont(new Font("����", Font.PLAIN,25));
		l_finalnumber.setFont(new Font("����", Font.PLAIN,25));
		frame.add(l_initialnumber);//���������봰��
		frame.add(l_initialconversion);
		frame.add(l_finalconversion);
		frame.add(l_finalnumber);
		
		JTextField initialnumber =new JTextField(100);//����һ��JTextField�����ı���
		JTextField finalnumber =new JTextField(100);
		initialnumber.setEditable(true);//�����ı��������ֿ�д��
		finalnumber.setEditable(false);//�����ı��������ֲ���д��
		initialnumber.setBounds(320, 30, 160, 30);//�����ı����ڴ����е�λ�ü��ı����С
		finalnumber.setBounds(320, 210, 160, 30);
		initialnumber.setFont(new Font("����", Font.PLAIN, 25));//�����ı����������ʽ
		finalnumber.setFont(new Font("����", Font.PLAIN,25));
		frame.add(initialnumber);//���������봰��
		frame.add(finalnumber);
		
		JButton button1 = new JButton("����");//����һ��JButton��ť
		JButton button2 = new JButton("���");
		button1.setBounds(120, 270, 160, 30);//���ð�ť�ڴ����е�λ�ü���ť��С
		button2.setBounds(320, 270, 160, 30);
		button1.setFont(new Font("����", Font.PLAIN, 20));//�����ı����������ʽ
		button2.setFont(new Font("����", Font.PLAIN, 20));
		frame.add(button1);//���������봰��
		frame.add(button2);
		
		//�������װ�ť�飬�ֱ�����ʼ���ƺ�ת������ƣ������ֽ�������Ϊ����ͬ
		JPanel panel1=new JPanel();    //�������
        JPanel panel2=new JPanel();
        JRadioButton i2=new JRadioButton("2");    //����JRadioButton����
        JRadioButton i8=new JRadioButton("8");    //����JRadioButton����
        JRadioButton i10=new JRadioButton("10");    //����JRadioButton����
        JRadioButton i16=new JRadioButton("16");    //����JRadioButton����
        
        JRadioButton f2=new JRadioButton("2");    //����JRadioButton����
        JRadioButton f8=new JRadioButton("8");    //����JRadioButton����
        JRadioButton f10=new JRadioButton("10");    //����JRadioButton����
        JRadioButton f16=new JRadioButton("16");    //����JRadioButton����
        
        ButtonGroup group1=new ButtonGroup();
        ButtonGroup group2=new ButtonGroup();
        
		panel1.setBounds(320, 90, 160, 30);
		panel2.setBounds(320, 150, 160, 30);
        
        //���JRadioButton��ButtonGroup��
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
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);////�û��������ڵĹرհ�ťʱ����ִ�еĲ���
        
        i2.addActionListener(new ActionListener() {//�����㰴ť���¼�������
			public void actionPerformed(ActionEvent e) {//����ť������¼�
				frame.setVisible(true);
				i2.setVisible(true);
				
				ic=2;
				regex = "^[0-1]+$";//��ǰ���ý�������Ӧ��������ʽ
				
				f2.setEnabled(false);//������ͬ�Ľ�����
				f8.setEnabled(true);
				f10.setEnabled(true);
				f16.setEnabled(true);
				
			}
		});
        
        i8.addActionListener(new ActionListener() {//�����㰴ť���¼�������
			public void actionPerformed(ActionEvent e) {//����ť������¼�
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
        
        i10.addActionListener(new ActionListener() {//�����㰴ť���¼�������
			public void actionPerformed(ActionEvent e) {//����ť������¼�
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
        
        i16.addActionListener(new ActionListener() {//�����㰴ť���¼�������
			public void actionPerformed(ActionEvent e) {//����ť������¼�
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
        
        
        
        
        f2.addActionListener(new ActionListener() {//�����㰴ť���¼�������
			public void actionPerformed(ActionEvent e) {//����ť������¼�
				frame.setVisible(true);
				f2.setVisible(true);
				
				fc=2;
				
				i2.setEnabled(false);
				i8.setEnabled(true);
				i10.setEnabled(true);
				i16.setEnabled(true);
				
			}
		});
        
        f8.addActionListener(new ActionListener() {//�����㰴ť���¼�������
			public void actionPerformed(ActionEvent e) {//����ť������¼�
				frame.setVisible(true);
				f8.setVisible(true);
				
				fc=8;
				
				i2.setEnabled(true);
				i8.setEnabled(false);
				i10.setEnabled(true);
				i16.setEnabled(true);
			}
		});
        
        f10.addActionListener(new ActionListener() {//�����㰴ť���¼�������
			public void actionPerformed(ActionEvent e) {//����ť������¼�
				frame.setVisible(true);
				f10.setVisible(true);
				
				fc=10;
				
				i2.setEnabled(true);
				i8.setEnabled(true);
				i10.setEnabled(false);
				i16.setEnabled(true);
			}
		});
        
        f16.addActionListener(new ActionListener() {//�����㰴ť���¼�������
			public void actionPerformed(ActionEvent e) {//����ť������¼�
				frame.setVisible(true);
				f16.setVisible(true);

				fc=16;
				
				i2.setEnabled(true);
				i8.setEnabled(true);
				i10.setEnabled(true);
				i16.setEnabled(false);
			}
		});
		
		
		
		button1.addActionListener(new ActionListener() {//�����㰴ť���¼�������
			public void actionPerformed(ActionEvent e) {//����ť������¼�
				frame.setVisible(true);
				button1.setVisible(true);
				String in;//�����ʼ��ֵ����Ϊ16����������ĸ�����Բ�����int����
				
				try {
					in = initialnumber.getText().trim();//��ȡ�ı��������ݸ�ֵ��in
					if(!in.matches(regex)) {
						JOptionPane.showMessageDialog(frame, "��д�ĳ�ʼ��ֵ���ʼ���Ʋ����ϣ����޸����ĳ�ʼ��ֵ", "����", JOptionPane.ERROR_MESSAGE);//���ִ�������ʾ�Ի�����ʾ
					}else {
						finalnumber.setText(Decimalconversion.baseConvert(in, ic, fc));//����TestStack����baseConvert������������ս���������ı�������ʾ���ı�����
					}
				} catch (NumberFormatException ex) {
					JOptionPane.showMessageDialog(frame, "���������Ƿ�����", "����", JOptionPane.ERROR_MESSAGE);//�׳��쳣����ʾ�Ի�����ʾ
				}	
			}
		});
		
		button2.addActionListener(new ActionListener() {//����հ�ť���¼�������
			public void actionPerformed(ActionEvent e) {//����ť������¼�
				frame.setVisible(true);
				button1.setVisible(true);
				
				try {
					initialnumber.setText("");//���ı������������
					finalnumber.setText("");
				} catch (NumberFormatException ex) {
					JOptionPane.showMessageDialog(frame, "���ִ���", "����", JOptionPane.ERROR_MESSAGE);
				}			
			}
		});		
	}	
}