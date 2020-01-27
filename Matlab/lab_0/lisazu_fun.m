function lisazu_fun(f1,f2)
% Funkcija, kas uzzīmē Lisažu figūras
% Call:
%lisazu_fun(f1,f2)
% 27.01.2020
 t = 0:0.01:1;
% f1 = 1; f2 = 1;
 x = cos(2*pi*f1*t);
 y = sin(2*pi*f2*t);
 plot(x,y)
 shg