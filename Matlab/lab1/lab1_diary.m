%% Mērījumu datu apstrāde

% pieņemsim kā mums ir mērījumu dati
% mainam spriegumu un mēram strāvu
Vm = [ -1 0.3 1.5 2.5 3.2];
Im = [1.1 2.2 2.1 3.2 4.7]*1e-3;
plot(Vm,Im,'-o')
% pielaikosim 2.kārtas polinomu
% y = a*x^2+b*x+c
% polyfit - meklē polinoma koeficientus
% C = polyfit(x,y,N)
% N =polinoma kārta
C = polyfit(Vm,Im,2)

C =

    0.0002    0.0004    0.0015

% šie cipari nozīmē
% y = C(1)*x^2+C(2)*x+C(3);
% definēsim x ar sīkāku soli
V = -1:0.01:3.2;
V = min(Vm):0.01:max(Vm);
V = linspace(min(Vm),max(Vm),100);
% liekam x mūsu izteiksmē
I = C(1)*V.^2+C(2)*V+C(3);
plot(Vm,Im<'-o',V,I)
{Error using <a href="matlab:matlab.internal.language.introspective.errorDocCallback('lt')" style="font-weight:bold"> < </a>
Matrix dimensions must agree.
} 
plot(Vm,Im'-o',V,I)
{Undefined function or variable 'o'.
} 
plot(Vm,Im,'-o',V,I)
plot(Vm,Im,'o',V,I)
C = polyfit(Vm,Im,3)

C =

    0.0002   -0.0004    0.0003    0.0021

I = C(1)*V.3+C(2)*V.^2*V+C(3)*V+C(4); 
 I = C(1)*V.3+C(2)*V.^2*V+C(3)*V+C(4); 
           ↑
{Error: Invalid expression. Check for missing multiplication operator, missing or unbalanced delimiters, or
other syntax error. To construct matrices, use brackets instead of parentheses.
} 
I = C(1)*V.^3+C(2)*V.^2*V+C(3)*V+C(4);
{Error using <a href="matlab:matlab.internal.language.introspective.errorDocCallback('mtimes')" style="font-weight:bold"> * </a>
Incorrect dimensions for matrix multiplication. Check that the number of columns in the first matrix matches
the number of rows in the second matrix. To perform elementwise multiplication, use '.*'.
} 
I = C(1)*V.^3+C(2)*V.^2+C(3)*V+C(4);
plot(Vm,Im,'o',V,I)
%% to pašu var izdarīt šādi:
% izmantosim polyval funkciju, kas aprēķinā polinoma vērtības
I = polyval(C,V);
% sintakse y = polyval(C,x);
plot(Vm,Im,'o',V,I)
%% uzdevums atkārtot to pašu 4.kārtai
C = polyfit(Vm,Im,4);
I = polyval(C,V);
plot(Vm,Im,'o',V,I)
% gadijumu kad pieliekota polinoma kārta
% ir vienāda ar (N-1), kur N - punktu skaits
% sauc par polinomiālo interpolāciju
% (polinoms iet caur mērījumu punktiem)
% bet citus gadijumus sauc par polinomiālo aproksimāciju(tad linija var nesakrīst ar mērījuma punktiem)
% Uzdevums atkārtot 1. kārtai
C = polyfit(Vm,Im,1);
I = polyval(C,V);
plot(Vm,Im,'o',V,I)

%% Mērījumu sērijas
% pieņemsim kā mēs katrai sprieguma vērtībai strāvu nomērīsim 5 reizes
Vm = [ -1 0.3 1.5 2.5 3.2];
Im = [1.1 2.2 2.1 3.2 4.7; 0.9 1.8 2.6 3.3 4.5; 1.0 2.0 2.4 3.4 4.3; 0.8 2.1 2.5 3.2 4.6;0.9 1.9 2.3 3.2 4.4]

Im =

    1.1000    2.2000    2.1000    3.2000    4.7000
    0.9000    1.8000    2.6000    3.3000    4.5000
    1.0000    2.0000    2.4000    3.4000    4.3000
    0.8000    2.1000    2.5000    3.2000    4.6000
    0.9000    1.9000    2.3000    3.2000    4.4000

% pamēģināsim to uzzīmēt ar plot
figure
plot(Vm,Im,'-o')
%% 
% Matlab zīmē matricas pa kolonnām
% mūsu dati bija ierakstīti pa rindām
% tāpēc ir jātransponē matricu
plot(Vm,Im','-o')
%%
% Pieliekosim polinomu
% funkcija polyfit strādās tikai ar vektoriem
Im

Im =

    1.1000    2.2000    2.1000    3.2000    4.7000
    0.9000    1.8000    2.6000    3.3000    4.5000
    1.0000    2.0000    2.4000    3.4000    4.3000
    0.8000    2.1000    2.5000    3.2000    4.6000
    0.9000    1.9000    2.3000    3.2000    4.4000

% ir funkcija, kas sasummē vektorus
A = [1 2 3 4 5];
sum(A)

ans =

    15

sum(Im)

ans =

    4.7000   10.0000   11.9000   16.3000   22.5000

Ivid = sum(Im)/5

Ivid =

    0.9400    2.0000    2.3800    3.2600    4.5000

sum(Im,1)

ans =

    4.7000   10.0000   11.9000   16.3000   22.5000

sum(Im,2)

ans =

   13.3000
   13.1000
   13.1000
   13.2000
   12.7000

% 1 - summē elementus katrā kolonnā
% 2 - summē elementus katrā rindā
Ivid = mean(Im)

Ivid =

    0.9400    2.0000    2.3800    3.2600    4.5000

% pielaikosim polinomu
C = polyfit(Vm,Ivid,3);
V = linspace(min(Vm),max(Vm),100);
I = polyval(C,V);
% uzdevums:
% ar 'o' attēlot mērījumu datus
% ar '*' attēlot vidējo vērtību
% ar '-' attēlot pielaikoto polinomu
plot(Vm,Im,'o',Vm,Ivid,'*',V,I,'-')
plot(Vm,Im','o',Vm,Ivid,'*',V,I,'-')

Inovirze = std(Im)

Inovirze =

    0.1140    0.1581    0.1924    0.0894    0.1581

errorbar(Vm,Ivid,Inovirze)
errorbar(Vm,Ivid,Inovirze'.')
hold on
plot(V,I)
hold off
errorbar(Vm,Ivid,Inovirze,'.')
hold on
plot(V,I)
hold off
xlabel('U,V')
ylabel('I,mA')
title('Strāvas atkarība no sprieguma')
legend('dati1','dati2')
legend('eksperipentālie dati','pielaikotais polinoms')

grid
ls
bilde1.png  bilde2.png	lab1_diary.m

%% Datu nolasīšana no grafika
A = imread('bilde1.png');
B = imread('bilde2.png');
figure(1),image(A)
figure(2),image(B)
figure(2),image([500 800],[0 1],B)
figure(2),image([500 800],[1 0],B)
set(gca,'YDir','normal')
set(gca,'YDir','normal')
%% varam nolasīt grafiku
% izmantosim funkciju ginput
[x,y] = ginput(10)

x =

  580.3849
  588.6972
  596.3167
  600.4729
  604.6290
  607.3997
  611.5559
  613.6339
  614.3266
  616.4047


y =

    0.0981
    0.1538
    0.2301
    0.3035
    0.3651
    0.4061
    0.5059
    0.5499
    0.5997
    0.6408

hold on , plot(x,y,'o')
diary off
