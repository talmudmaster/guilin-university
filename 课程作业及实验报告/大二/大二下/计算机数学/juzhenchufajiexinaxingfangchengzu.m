A=[4,-3,3;3,2,-6;1,-5,3];
B=[-1;-2;1];
C=[A,B];
[m,n]=size(A);
if rank(A)~=rank(C)
    disp('wu jie')
elseif n==rank(C)
    disp('wei yi jie')
    x=A\B
else
    disp('wu qiong duo jie')
    x=A\B
end
