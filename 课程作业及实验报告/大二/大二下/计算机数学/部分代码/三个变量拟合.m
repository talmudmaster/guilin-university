����1
clc
clear
x1=[77 56 85 74 61 83 83 65 69 64 76 53 75 69 66 57]';
x2=[82 72 80 79 75 77 67 83 79 78 83 63 64 83.5 83 79]';
y=[72.3 50.5 76.5 78 72.5 75.5 73.5 62.5 73.5 66.5 82 50.5 64 76.8 74.1 65.3]';
e=ones(16,1);
x=[e,x1,x2];
[b,bint,r,rint,stats]=regress(y,x,0.05);
rcoplot(r,rint);
b

����2
clc
clear
x1=[77
56
85
74
61
83
83
65
69
64
76
53
75
69
66
57
]
x2=[82
72
80
79
75
77
67
83
79
78
83
63
64
83.5
83
79
]
y=[72.3
50.5
76.5
78
72.5
75.5
73.5
62.5
73.5
66.5
82
50.5
64
76.8
74.1
65.3
]
A=[y,x1,x2]
y=A(:,1)
x1=A(:,2)
x2=A(:,3)
x=[x1 x2]
fun=inline('c(1)+c(2).*x(:,1)+c(3).*x(:,2)','c','x')
c=lsqcurvefit(fun,rand(1,3),x,y)
