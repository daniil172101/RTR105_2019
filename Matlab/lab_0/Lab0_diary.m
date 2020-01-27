%-- 01/27/2020 08:23:27 AM --%
mkdir lab_0
cd lab_0/
a = 1
b=2
c = a + b
A = [1 2; 3 4]
B = [3 4; 5 6]
C = A*B
C = A.*B
% Uzzīmēsim 2. kārtas polinomu
% y = a*x^2 + b*x + c
%polinoma koeficientus a,b,c
% saglabāsim vektorā C
C = [2 3 4];
% definēsim x
x = -6:2:6;
% tas nozīmē:
% sākuma_elements:solis:beigu_elements
x = -6:2:6
y = C(1)*x^2 + C(2)*x + C(3)
y = C(1)*x.^2 + C(2)*x + C(3)
% zīmēsim grafiku
% zīmē ar : plot(x,y)
plot(x;y)
plot(x,y)
% ko darīt lai nebūtu lauztā līnija
% ir jāsamazinā solis
x2 = -6:0.01:6;
y = C(1)*x2.^2 + C(2)*x2 + C(3)
plot(x2;y)
plot(x2,y)
% Kā uzzīmēt vairākus grafikus
plot(x,y,x2,y2)
y2 = C(1)*x2.^2 + C(2)*x2 + C(3)
y = C(1)*x.^2 + C(2)*x + C(3)
plot(x,y,x2,y2)
% kā mainīt līnijas izskatu
plot(x,y,' o ')
plot(x,y,' g ')
plot(x,y,' -- ')
plot(x,y,' --go ')
help plot
plot(x,y,' --pc ')
plot(x,y,' --pm ')
plot(x,y,' --^m ')
plot(x,y,' --vm ')
plot(x,y,' --vr ')
plot(x,y,'v',x2,y2,'r')
stem(x,y)
stairs(x,y)
% grafiku īpašību maiņa
mans_grafiks(x,y)
mans_grafiks(x,y,x2,y2)
mans_grafiks(x2,y2)
mans_grafiks(x,y)
mans_grafiks(x2,y2)
close all
% aizvērt visus grafikus
% Kā zīmēt vairākus grafikus - 2
stairs(x,y)
hold on
plot (x2,y2)
hold on
stem (x,y)
hold off
% hold on iesaldē asis
% hold off izslēdz to režīmu
%zīmēsim Lisažu figūras
% tālāko kodu rakstīsim Editor-ā
edit
help lisazu
lisazu
lisazu_fun
lisazu_fun(1,2)
lisazu_fun(1,5)
lisazu_fun(0.001,5)
lisazu_fun(0.001,700)
lisazu_fun(1000,0.05)
lisazu_fun(750,0.05)
lisazu_fun(750,0.15)
lisazu_fun(750,1.5)
lisazu_fun(750,6.25)
lisazu_fun(750,6.25,'r')
lisazu_fun(0.04,5.624)
lisazu_fun_anim(1,1)
lisazu_fun_anim(200,6.25)
lisazu_fun_anim(70,6.5)
lisazu_fun_anim(70,69)
lisazu_fun_anim(50,69)
lisazu_fun_anim(56,81)