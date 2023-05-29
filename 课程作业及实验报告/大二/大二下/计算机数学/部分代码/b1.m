fun=@(x,y)x.*exp(-x.^2).*sin(y);
q=quad2d(fun,0,2,0,2*pi)