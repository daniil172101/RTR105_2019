%% sinusoīda
lab3_demo
axis([0 6.5 -2 2])

k =

    -2

Undefined function 'zeroes' for input arguments of type 'double'.

Error in <a href="matlab:matlab.internal.language.introspective.errorDocCallback('lab3_demo', '/home/user/RTR105_2019/Matlab/lab3/lab3_demo.m', 18)" style="font-weight:bold">lab3_demo</a> (<a href="matlab: opentoline('/home/user/RTR105_2019/Matlab/lab3/lab3_demo.m',18,0)">line 18</a>)
y_const=1.5+zeroes(size(t_const));

lab3_demo

ans =

  0×1 empty <a href="matlab:helpPopup cell" style="font-weight:bold">cell</a> array

lab3_demo
lab3_demo
%% Nākamais uzdevums
% būtu pārveidot skriptu
%% tagad izmantosim datu  filtrāciju
t = 0:1:6

t =

     0     1     2     3     4     5     6

tf = t<3

tf =

  1×7 <a href="matlab:helpPopup logical" style="font-weight:bold">logical</a> array

   1   1   1   0   0   0   0

t2 = t(tf)

t2 =

     0     1     2

lab3_demo(4)
{Error: <a href="matlab: opentoline('/home/user/RTR105_2019/Matlab/lab3/lab3_demo.m',22,23)">File: lab3_demo.m Line: 22 Column: 23
</a>Invalid expression. Check for missing multiplication operator, missing or unbalanced delimiters, or other
syntax error. To construct matrices, use brackets instead of parentheses.
} 
lab3_demo(4)

ans =

    1.5000

t = 0:0.01:6.5;
lab3_demo(t);
y =lab3_demo(t);
plot(t,y)
y =lab3_demo(4)

y =

    1.5000

lab3_demo

ans =

     []

y =lab3_demo(4)

y =

    1.5000

lab3_demo

ans =

     []

diary off
