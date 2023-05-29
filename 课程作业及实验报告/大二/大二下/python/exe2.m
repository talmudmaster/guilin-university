function y=exe2(x)
if x<-2
    y=exp(x)-x^3
elseif  -2<=x & x<0.5
    y=x^2+1
elseif  0.5<=x & x<1
    y=sin(x)+1
else
    y=log(x+2)
end