dd=0.1;
r=0:pi/20:2*pi;
n=length(r)
for i=1:n
    r=dd*(i-1):pi/80:dd*i;
    t=0:pi/80:0.5*pi;
    [r,t]=meshgrid(r,t);
    x=2.*sin(t).*cos(r);
    y=2.*sin(t).*sin(r);
    z=2.*cos(t);
    
    mesh(x,y,z);
    
    hold on
    pause(0.05);
end
