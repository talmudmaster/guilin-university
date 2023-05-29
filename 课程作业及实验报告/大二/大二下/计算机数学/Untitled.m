xa=-3:3;
ya=-3:13;
[x,y]=meshgrid(xa,ya);
z=x.^4+3.*x.^2+y.^2-2.*x-2.*y-2.*x.^2.*y+6;
surf(x,y,z);