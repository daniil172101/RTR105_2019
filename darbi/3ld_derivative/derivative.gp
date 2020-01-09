set grid
plot "derivative.dat" every ::1 using 1:2 with lines title "f(x)"
replot "derivative.dat" every ::1 using 1:3 with lines title "f'(x) analytic"
replot "derivative.dat" every ::1 using 1:4 with lines title "f\"(x) analytic"
replot "derivative.dat" every ::1 using 1:5 with lines title "f'(x) forward difference"
replot "derivative.dat" every ::1 using 1:6 with lines title"f\"(x) forward difference"

