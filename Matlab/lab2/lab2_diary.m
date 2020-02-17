%% Ievads simboliskajā matemātikā
% Piemērs
syms a11 a12 a21 a22 b11 b12 b21 b22
A = [a11 a12 ; a21 a22];
B = [b11 b12 ; b21 b22];
a
{Undefined function or variable 'a'.
} 
A
 
A =
 
[ a11, a12]
[ a21, a22]
 
B
 
B =
 
[ b11, b12]
[ b21, b22]
 
C = A*B
 
C =
 
[ a11*b11 + a12*b21, a11*b12 + a12*b22]
[ a21*b11 + a22*b21, a21*b12 + a22*b22]
 
D = A.*B
 
D =
 
[ a11*b11, a12*b12]
[ a21*b21, a22*b22]
 
%% Kā definēt simbolisko mainīgo
% 1.
% definēsim x y kā simboliskus mainīgus izmantojot "sim"
x = sym('x');
y = sym('y');
%% atradīsim kvadrātsakni no x^2
y = x^2;
z = sqrt(y)
 
z =
 
(x^2)^(1/2)
 
x = sym('x','positive');
y = x^2;
z = sqrt(y)
 
z =
 
x
 
%% Kā definēt simbolisko mainīgo - 2.variants
syms x y 
% šajā rindā esam definējuši x,y kā simboliskus mainīgus
syms x y positive
% šajā rindā esam definējuši x,y kā pozitīvus simboliskus mainīgus 
syms a11 a12 a21 a22
A = [a11 a12 ; a21 a22];
A'
 
ans =
 
[ conj(a11), conj(a21)]
[ conj(a12), conj(a22)]
 
%% pateiksim kā matricas elementi ir real
syms a11 a12 a21 a22 real
A = [a11 a12 ; a21 a22];
A'
 
ans =
 
[ a11, a21]
[ a12, a22]
 
%% Kā definēt simbolisko mainīgo - 3.variants
A = sym('a',[2 3])
 
A =
 
[ a1_1, a1_2, a1_3]
[ a2_1, a2_2, a2_3]
 
A = sym('a%d%d',[2 3])
 
A =
 
[ a11, a12, a13]
[ a21, a22, a23]
 
A = sym('a_%d_%d',[2 3])
 
A =
 
[ a_1_1, a_1_2, a_1_3]
[ a_2_1, a_2_2, a_2_3]
 
A = sym('a%d%d',[2 3])
 
A =
 
[ a11, a12, a13]
[ a21, a22, a23]
 
%% Atvasināšana
syms x
y = x^2;
% atvasināšanu veiksim ar funkciju diff
diff(y)
 
ans =
 
2*x
 
%% Parciālais atvasinājums
syms x y
z = 3*x^5 + 7*y^6;
diff(z,x)
 
ans =
 
15*x^4
 
diff(z,y)
 
ans =
 
42*y^5
 
% Integrēšana
syms x
y = x^3;
int(y)
 
ans =
 
x^4/4
 
syms a
int(x^3,a)
 
ans =
 
a*x^3
 
%% Noteiktais integrālis
syms x
int(x,x,0,3)
 
ans =
 
9/2
 
double(int(x,x,0,3))

ans =

    4.5000

%% pirmajā piemērā atbilde nav skaitlis (bet ir simboliskais mainīgais)
int(x^2,x,-3,3)
 
ans =
 
18
 
%% Robežas
syms x
limit(1/(x-1),x,1,'left')
 
ans =
 
-Inf
 
% izteiksme 1/(x-1), ja x tiecas uz 1 no kreisās puses
limit(1/(x-1),x,1,'right')
 
ans =
 
Inf
 
%% Vienādojumu risināšana
syms x
% risināsim vienādojumu x^2 -7x + 12 = 0, (saknēm jābūt 3,4) 
solve(x^2-7*x+12=0,x)
 solve(x^2-7*x+12=0,x)
                 ↑
{Error: Incorrect use of '=' operator. To assign a value to a variable, use '='. To compare values for
equality, use '=='.
} 
solve(x^2-7*x+12==0,x)
 
ans =
 
 3
 4
 
%% Vienādojumu sistēmu risināšana
syms x y z
atb = solve(x+y+z==10,x-y+z==4,x+y-z==0)

atb = 

  <a href="matlab:helpPopup struct" style="font-weight:bold">struct</a> with fields:

    x: [1×1 sym]
    y: [1×1 sym]
    z: [1×1 sym]

atb.x
 
ans =
 
2
 
atb.y
 
ans =
 
3
 
atb.z
 
ans =
 
5
 
%% Simboliskie mainīgie
%% Simboliskās konstantes
a = vpa(2)
 
a =
 
2.0
 
b = vpa(pi)
 
b =
 
3.1415926535897932384626433832795
 
c = vpa(sqrt(2))
 
c =
 
1.4142135623730950488016887242097
 
d = sqrt(a)
 
d =
 
1.4142135623730950488016887242097
 
% zīmju skaitu mainīšana
digits(100)
a = vpa(pi)
 
a =
 
3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117068
 
b = vpa(exp(1))
 
b =
 
2.71828182845904553488480814849026501178741455078125
 
% vpa = Variable Precision Arithmetic
%% Rezultātu vienkāršošana
syms x
y = 1/((x-1)*(x-2))
 
y =
 
1/((x - 1)*(x - 2))
 
dif(y)
{Undefined function or variable 'dif'.
} 
diff(y)
 
ans =
 
- 1/((x - 1)*(x - 2)^2) - 1/((x - 1)^2*(x - 2))
 
y = (x-4)*(x-5)/((x-1)*(x-2))
 
y =
 
((x - 4)*(x - 5))/((x - 1)*(x - 2))
 
diff(y)
 
ans =
 
(x - 4)/((x - 1)*(x - 2)) + (x - 5)/((x - 1)*(x - 2)) - ((x - 4)*(x - 5))/((x - 1)*(x - 2)^2) - ((x - 4)*(x - 5))/((x - 1)^2*(x - 2))
 
y_atv = diff(y)
 
y_atv =
 
(x - 4)/((x - 1)*(x - 2)) + (x - 5)/((x - 1)*(x - 2)) - ((x - 4)*(x - 5))/((x - 1)*(x - 2)^2) - ((x - 4)*(x - 5))/((x - 1)^2*(x - 2))
 
%% Mēģināsim vienkāršot
simplify(y_atv)
 
ans =
 
(6*(x^2 - 6*x + 7))/(x^2 - 3*x + 2)^2
 
%% Citi vienkāršojumi
syms x
y =(x-3)*(x-4)
 
y =
 
(x - 3)*(x - 4)
 
expand(y)
 
ans =
 
x^2 - 7*x + 12
 
atb =expand(y);
factor(atb)
 
ans =
 
[ x - 3, x - 4]
 
horner(atb)
 
ans =
 
x*(x - 7) + 12
 
%% Rezultātu "skaistā" attēlošana
y = (x-4)*(x-5)/((x-1)*(x-2));
pretty(y)
(x - 4) (x - 5)
---------------
(x - 1) (x - 2)

%% Ko darīt ar rezultātiem
% dots:
y = (x-4)*(x-5)/((x-1)*(x-2));
% y = (x-4)*(x-5)/((x-1)*(x-2))
% Uzdevums : atvasinājumu, un uzzīmēt to ar funkciju plot
% Uzdevums : atrast atvasinājumu, un uzzīmēt to ar funkciju plot
% Risinājums:
% 1.solis: definēsim simboliskus mainīgus
syms x
y = (x-4)*(x-5)/((x-1)*(x-2));
% 2.solis: atvasinājums
y_atv = diff(y)
 
y_atv =
 
(x - 4)/((x - 1)*(x - 2)) + (x - 5)/((x - 1)*(x - 2)) - ((x - 4)*(x - 5))/((x - 1)*(x - 2)^2) - ((x - 4)*(x - 5))/((x - 1)^2*(x - 2))
 
y_atv = simplify(diff(y)) 
 
y_atv =
 
(6*(x^2 - 6*x + 7))/(x^2 - 3*x + 2)^2
 
% 3.solis: izteiksmes vektorizācija
y_v = vectorize(y)

y_v =

    '((x - 4).*(x - 5))./((x - 1).*(x - 2))'

y_atv_v = vectorize(y_atv)

y_atv_v =

    '(6.*(x.^2 - 6.*x + 7))./(x.^2 - 3.*x + 2).^2'

% 4.solis: saformēsim x kā vektoru
% x intervāls būs dots uzdevumā
x = -2:0.01:2-0.01;
% x pieder intervālam [-2;2)
% 5.solis: ieliksim x - aprēķināsim y 
% 1.variants: copy-paste
% 2.variants: izmantojot eval
% eval - interpretatora funkcija
y_n = eval(y_n);
{Undefined function or variable 'y_n'.
} 
y_n = eval(y_v);
y_atv_n = eval(y_atv_v);
% 6.solis: uzzīmēsim
plot(x,y_n,x,y_atv_n)
ylim([-100 100])
% 7.solis: grafiku anotācija
% izteiksmes "skaistā" attēlošana -2
y_ltx = latex(y)

y_ltx =

    '\frac{\left(x-4\right)\,\left(x-5\right)}{\left(x-1\right)\,\left(x-2\right)}'

y_atv_ltx = latex(y_atv)

y_atv_ltx =

    '\frac{6\,\left(x^2-6\,x+7\right)}{{\left(x^2-3\,x+2\right)}^2}'

legend(['$',y_ltx,'$'],['$',y_atv_ltx,'$'])
[Warning: Error updating Legend.

 String scalar or character vector must have valid interpreter syntax:
$\frac{\left(x-4\right)\,\left(x-5\right)}{\left(x-1\right)\,\left(x-2\right)}$
] 
[Warning: Error updating Legend.

 String scalar or character vector must have valid interpreter syntax:
$\frac{6\,\left(x^2-6\,x+7\right)}{{\left(x^2-3\,x+2\right)}^2}$
] 
h=legend(['$',y_ltx,'$'],['$',y_atv_ltx,'$'])

h = 

[Warning: Error updating Legend.

 String scalar or character vector must have valid interpreter syntax:
$\frac{\left(x-4\right)\,\left(x-5\right)}{\left(x-1\right)\,\left(x-2\right)}$
] 
[> In <a href="matlab:matlab.internal.language.introspective.errorDocCallback('defaulterrorcallback', '/usr/local/MATLAB/R2018a/toolbox/matlab/graphics/defaulterrorcallback.m', 12)" style="font-weight:bold">defaulterrorcallback</a> (<a href="matlab: opentoline('/usr/local/MATLAB/R2018a/toolbox/matlab/graphics/defaulterrorcallback.m',12,0)">line 12</a>)
  In matlab.graphics.illustration.Legend/get.String
  In matlab.graphics.illustration.Legend/getDescriptiveLabelForDisplay] 
[Warning: Error updating Legend.

 String scalar or character vector must have valid interpreter syntax:
$\frac{6\,\left(x^2-6\,x+7\right)}{{\left(x^2-3\,x+2\right)}^2}$
] 
[> In <a href="matlab:matlab.internal.language.introspective.errorDocCallback('defaulterrorcallback', '/usr/local/MATLAB/R2018a/toolbox/matlab/graphics/defaulterrorcallback.m', 12)" style="font-weight:bold">defaulterrorcallback</a> (<a href="matlab: opentoline('/usr/local/MATLAB/R2018a/toolbox/matlab/graphics/defaulterrorcallback.m',12,0)">line 12</a>)
  In matlab.graphics.illustration.Legend/get.String
  In matlab.graphics.illustration.Legend/getDescriptiveLabelForDisplay] 
  <a href="matlab:helpPopup matlab.graphics.illustration.Legend" style="font-weight:bold">Legend</a> ($\frac{\left(x-4\right)\,\left(x-5\right)}{\left(x-1\right)\,\left(x-2\right…) with properties:

         String: {1×2 cell}
       Location: 'northeast'
    Orientation: 'vertical'
       FontSize: 9
       Position: [0.0327 0.8187 0.8536 0.0821]
          Units: 'normalized'

  Show <a href="matlab:if exist('h', 'var'), matlab.graphics.internal.getForDisplay('h', h, 'matlab.graphics.illustration.Legend'), else, matlab.graphics.internal.getForDisplay('h'), end">all properties</a>

set(h,'Interpreter','Latex')
diary off
