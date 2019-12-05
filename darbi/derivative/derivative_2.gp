set grid
plot [0:2*pi] sin(x)*sin(x)*cos(x)*cos(x) 
replot [0:2*pi] sin(2*x)*cos(2*x)
replot "derivative.dat" every ::1 using 1:2 with lines
replot "derivative.dat" every ::1 using 1:3 with lines
