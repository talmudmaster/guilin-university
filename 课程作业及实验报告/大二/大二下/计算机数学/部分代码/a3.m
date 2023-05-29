syms x y;
t=(log10(x^2+y^2)-1)/(x-1)^2+y^2*exp(-(x+y));
s1=limit(t,x,1);
s2=limit(s1,y,1)