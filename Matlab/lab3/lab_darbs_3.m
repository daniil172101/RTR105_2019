function y = lab_darbs_3(t)
if nargin == 0
    t = 0:0.01:6.5;
end
%% Datu filtrācija
% t_sin = 4.5:0.01:6.5;
t_sin_f = (t>=4.5)&(t<=6.5);
t_sin = t(t_sin_f);
% t_zero = 0:0.01:1;
t_zero_f = (t>=0)&(t<1);
t_zero = t(t_zero_f);
% t_const = 4:0.01:4.5;
t_const_f = (t>=4)&(t<4.5);
t_const = t(t_const_f);
% t_saw = 1:0.01:2.5;
t_saw_f = (t>=1)&(t<2.5);
t_saw = t(t_saw_f);
% t_noise = 2.5:0.01:4;
t_noise_f = (t>=2.5)&(t<4);
t_noise = t(t_noise_f);
%% sinusoīda
A0 = 0; A = 2.5;
T = (6.5-4.5)/8; f = 1/T;
delay = 4.5;
y_sin = A0+A*sin(2*pi*f*(t_sin-delay));
% plot(t_sin,y_sin)
% hold on

%% nulles signāls
y_zero = zeros(size(t_zero));
% plot(t_zero,y_zero)

%% konstantes signāls
y_const=zeros(size(t_const))-2.5;
% plot(t_const,y_const)

%% trokšņa signāls
y_noise = 2.5*rand(size(t_noise))-1.25;
% plot(t_noise,y_noise)

%% lineāri mainīgais signāls
k = (1.5+1.5)/(1-2.5);
delay = 1.75;
y_saw = k*(t_saw-delay);
%% Visu signālu apvienošana
t = [t_zero,t_saw,t_noise,t_const,t_sin];
y = [y_zero,y_saw,y_noise,y_const,y_sin];
if nargout == 0
    plot(t,y)
    y = [];
end