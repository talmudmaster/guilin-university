syms x y z;
t=diff(x*exp(x*y*z)+(x+y)*atan(log10(1+x^2*y*z)),x);
t=diff(t,y);
t=diff(t,z);

s=subs(t,z,1);
s=subs(t,y,0);
s=subs(t,x,1)