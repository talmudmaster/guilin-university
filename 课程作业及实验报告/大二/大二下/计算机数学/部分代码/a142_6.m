syms x y z;
t=diff(sin(x^2*y*z));
t=subs(t,x,1);
t=subs(t,y,1);
t=subs(t,z,3)