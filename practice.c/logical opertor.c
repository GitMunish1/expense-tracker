// gcc -Wall -g test2.c gnuplot_i.c -o test2 -lm
#include <stdio.h>
#include <math.h>
#include "gnuplot_i.h"

#define NPOINTS 15

int main(void) {
    // declare arrays of doubles
    double x[NPOINTS], y1[NPOINTS], y2[NPOINTS];

    // place some data in the arrays
    // circle: (x - 5)^2 + (y - 5)^2 = 25
    for (int i = 0; i < NPOINTS; i++) {
        x[i] = (double)i;
        y1[i] = sqrt(25 - pow(x[i] - 5, 2)) + 5;
        y2[i] = -sqrt(25 - pow(x[i] - 5, 2)) + 5;
    }

    // create gnuplot handle
    gnuplot_ctrl *handle = gnuplot_init();

    // set up gnuplot window
    gnuplot_setterm(handle, "wxt", 600, 400);
    gnuplot_resetplot(handle);
    gnuplot_setstyle(handle, "points");
    gnuplot_set_axislabel(handle, "y", "circle");

    // plot points in the x and y double arrays on the graph
    gnuplot_plot_coordinates(handle, x, y1, NPOINTS, "circle top half");

    // plot a second set of points
    // ERROR HERE
    gnuplot_plot_coordinates(handle, x, y2, NPOINTS, "circle bottom half");

    // wait until viewing finished
    printf("Press Enter to Continue");
    while( getchar() != '\n' );

    // done
    gnuplot_close(handle);
    return 0;
}