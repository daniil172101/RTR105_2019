%% 4.laboratorijas darbs
%% Daudzkontūru shēmas simulācija

% Dots:
R1 = 1; R2 = 2; R3 = 3; R4 =4; R5 = 5; R6 = 6; R7 = 7;
E1 = 1; E2 = 2; E3 = 3;

R =[R1+R2+R3 -R2 0; -R2 R2+R4+R5 -R5; 0 -R5 R5+R6+R7]

R =

     6    -2     0
    -2    11    -5
     0    -5    18

E = [E1 -E2 -E3]'

E =

     1
    -2
    -3

%% vienādojums ir uzdots šādi:
% R * Ik = E
% atrisināt var ar Gausa izslēgšanas metodi
% kas ir "\"
Ik = R\E

Ik =

    0.0735
   -0.2795
   -0.2443

% esam atraduši 3 kontūrstrāvas
% ir jāatrod UR2-?
% ir jāatrod PR2-?
IR2 = Ik(1)-Ik(2)

IR2 =

    0.3530

UR2 = IR2*R2

UR2 =

    0.7060

PR2 = IR2*UR2

PR2 =

    0.2492

%% Pieņemsim ka E1,E2,E3 vērtības ir citi
% būs 3 laika momenti, katrā Ei būs trīs vērtības
E1 = [1 -1 0];
E2 = [2 -2 0];
E3 = [3 -3 0];
E = [E1; E2; E3]

E =

     1    -1     0
     2    -2     0
     3    -3     0

E = [E1; -E2; -E3]

E =

     1    -1     0
    -2     2     0
    -3     3     0

% atkal rēķināsim vienādojumu sistēmu
Ik = R\E

Ik =

    0.0735   -0.0735         0
   -0.2795    0.2795         0
   -0.2443    0.2443         0

% 1.kontūrstrāva ir 1.rindā
%% jāatrod IR3,UR3,PR3
IR3 = Ik(1,:)

IR3 =

    0.0735   -0.0735         0

UR3 = IR3 * R3

UR3 =

    0.2205   -0.2205         0

PR3 = UR3.*IR3

PR3 =

    0.0162    0.0162         0

%% vēl viens piemērs 
% laikā mainīgie signāli
t = 0:0.01:1;
E1 = sin(2*pi*t*5);
% E2 = 2 konstante
E2 = 2+zeros(size(t));
E3 = 0.5*cos(2*pi*7*t);
E = [E1; -E2; -E3];
% rēķināsim 101 vienādojumu sistēma
Ik = R\E;
% Būs jāuzzīmē UR5,PR5-?
IR5 = Ik(3,:)-Ik(2,:);
UR5 = IR5*R5;
PR5 = IR5.*UR5;
%% uzzīmēsim:
plot(t,UR5,t,PR5);
legend('U_{R5}(t)','P_{R5}(t)')
xlabel('t,s')
grid
%% Kā var uzzīmēt divus dažādus grafikus
% lai būtu 2-as neatkarīgas y asis
plotyy(t,UR5,t,PR5);
h = plotyy(t,UR5,t,PR5)

h = 

  1×2 <a href="matlab:helpPopup matlab.graphics.axis.Axes" style="font-weight:bold">Axes</a> array:

    Axes    Axes

ylabel(h(1),'spriegums,V')
ylabel(h(2),'jauda,W')
legend('U_{R5}(t)','P_{R5}(t)')
xlabel('t,s')
grid
%% vēl viens variants
figure(2)
yyaxis left
plot(t,UR5)
ylabel('spriegums,V')
xlabel('t,s')
yyaxis right
plot(t,PR5)
ylabel('jauda,W')
legend('U_{R5}(t)','P_{R5}(t)')
grid
%% Kā pārbaudīt rezultātus?
% lai pārbāudītu rezultātus, ja aprēķins
% bija veikts ar KSM pārbauda Kirhofa sprieguma likumu visiem kontūriem,
% ja aprēķins bija veikts ar MSM - pārbauda Kirhofa strāvas likumu visiem mezgliem
%% Pārbaudīsim Kirhofa sprieguma likumu 3.kontūram
% UR5+UR6+UR7 == -E3
%pārvietosim visu uz vienu pusi
% UR5+UR6+UR7+E3 == 0
% piešķirsim kreiso pusi mainīgajam Utst
% Utst = UR5+UR6+UR7+E3;
% uzzīmēsim, būtu jābūt 0
UR6 = Ik(3,:)*R6;
UR7 = Ik(3,:)*R7;
Utst = UR5+UR6+UR7+E3;
figure(3),plot(t,Utst),title('pārbaude')
diary off
