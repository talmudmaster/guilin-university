clear all;
x=linspace(-2,4);
t=-1:0.01:1.5;
y=-4.*sin(t)-t.*t+4.5.*t+5.5;
y1=-4*sin(-1)-(-1)*(-1)+4.5*(-1)+5.5;
y2=-4*sin(1.5)-(1.5)*(1.5)+4.5*(1.5)+5.5;
axis([-2,4,0,8]);
for j=1:20
n=15;
d=2.5/n;
 pause(0.5);
  for i=0:n-1
   t1=-4*sin(-1+(i+1)*d)-(-1+(i+1)*d)*(-1+(i+1)*d)+4.5*(-1+(i+1)*d)+5.5;
   x3=[-1+i*d -1+(i+1)*d -1+(i+1)*d -1+i*d];
   y3=[2  2  t1  t1 ];
   fill(x3,y3,' ');
   hold on;
  axis([-2,4,0,8]);
    pause(0.08);
  end
  plot([-1,-1],[2,y1],'k','linewidth',1.5);%x=a
hold on;
plot(t,y,'k','linewidth',1.5);%y=f(x)
hold on;
plot([1.5,1.5],[2,y2],'k','linewidth',1.5);%x=b
hold on;
plot([-1,1.5],[2,2],'k','linewidth',1.5);%x轴
hold on;
pause(0.5);
  for i=0:n-1
   t1=-4*sin(-1+(i+1)*d)-(-1+(i+1)*d)*(-1+(i+1)*d)+4.5*(-1+(i+1)*d)+5.5;
   x3=[-1+i*d -1+(i+1)*d -1+(i+1)*d -1+i*d];
   y3=[2  2  t1  t1 ];
   fill(x3,y3,'w ');
   hold on;
   axis([-2,4,0,8]);
  end
plot([-1,-1],[2,y1],'k','linewidth',1.5);%x=a
hold on;
plot(t,y,'k','linewidth',1.5);%y=f(x)
hold on;
plot([1.5,1.5],[2,y2],'k','linewidth',1.5);%x=b
hold on;
plot([-1,1.5],[2,2],'k','linewidth',1.5);%x轴
hold on;

end
axis([-2,4,0,8]);






plot([-1,-1],[2,y1],'k','linewidth',1.5);%x=a
hold on;
plot([1.5,1.5],[2,y2],'k','linewidth',1.5);%x=b
hold on;
axis([-2,3,0,8]);
plot([-1,1.5],[2,2],'k','linewidth',1.5);%x轴
for i=1:40
    plot(t,y,'linewidth',3.5);%y=f(x)
    hold on;
pause(0.5);
end
axis([-2,3,0,8]);




clear all;
x=linspace(-4,12);
plot(5,5,'r.');
hold on;
plot(5,5,'ro');
hold on;
axis equal;
axis([-3,12,-3,12]);
alpha=0:pi/30:2*pi;%角度[0,2*pi]
R=5;%半径
x1=5+R*cos(alpha);
y1=5+R*sin(alpha);
plot(x1,y1,'g','linewidth',3);
hold on;
for t=1:30
n=3;%正n边形
i=1:n+1;
x=5+5*sin(2*pi/n*i);
y=5+5*cos(2*pi/n*i);
plot(x,y,'linewidth',2.3);
hold on;
pause(0.5);
n=6;%正n边形
i=1:n+1;
x=5+5*sin(2*pi/n*i);
y=5+5*cos(2*pi/n*i);
plot(x,y,'linewidth',2.3);
hold on;
pause(0.5);
n=12;%正n边形
i=1:n+1;
x=5+5*sin(2*pi/n*i);
y=5+5*cos(2*pi/n*i);
plot(x,y,'linewidth',2.3);
hold on;
pause(0.5);
alpha=0:pi/30:2*pi;%角度[0,2*pi]
R=5;%半径
x1=5+R*cos(alpha);
y1=5+R*sin(alpha);
plot(x1,y1,'linewidth',3);
hold on;
pause(0.5);
end
axis([-3,12,-3,12]);
axis equal;
