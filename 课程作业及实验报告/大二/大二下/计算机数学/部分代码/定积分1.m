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
tt=0;
for t=1:15
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

n=3;%正n边形
i=1:n+1;
x=5+5*sin(2*pi/n*i);
y=5+5*cos(2*pi/n*i);
plot(x,y,'w','linewidth',2.3);
hold on;

n=6;%正n边形
i=1:n+1;
x=5+5*sin(2*pi/n*i);
y=5+5*cos(2*pi/n*i);
plot(x,y,'w','linewidth',2.3);
hold on;

n=12;%正n边形
i=1:n+1;
x=5+5*sin(2*pi/n*i);
y=5+5*cos(2*pi/n*i);
plot(x,y,'w','linewidth',2.3);
hold on;

alpha=0:pi/30:2*pi;%角度[0,2*pi]
R=5;%半径
x1=5+R*cos(alpha);
y1=5+R*sin(alpha);
plot(x1,y1,'linewidth',3);
hold on;
pause(0.8);
end
axis([-3,12,-3,12]);
axis equal;