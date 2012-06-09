/* Eric Gallager
 * 
 * Problem:
 * Here we want you to write a program that will take the x and y coordinates of a point and tell us what quadrant the point is in or if the point sits on the coordinate line, what line it sits on.
 * 
 * Recall that in Quadrant 1 both x and y are positive, in Quadrant 2 x is negative and y is positive, in Quadrant 3 both x and y are negative adn in Quadrant 4 x is positive and y is negative.
 * 
 * therefore 
 * (-1.0,-2.4) is in quadrant 3 and
 * (0.0, 4.8) is on the y axis.
 *
 * ---
 *
 * Algorithm:
 *
 * 1. Get user input for x coordinate
 * 2. Get user input for y coordinate
 * 3. Decide quadrant/axis based on user input:
 *	3a. If (x > 1) && (y > 1), then quadrant = 1
 *	3b. If (x < 1) && (y > 1), then quadrant = 2
 *	3c. If (x > 1) && (y < 1), then quadrant = 3
 *	3d. If (x < 1) && (y < 1), then quadrant = 4
 *	3e. If x == 0, then axis = y
 *	3f. If y == 0, then axis = x
 *	3g. If (x == 0) && (y == 0), then the point is on the origin.
 * 4. Display the result.
 * 
 */

#include <stdio.h>
#include <math.h>

int main (double x_coordinate, double y_coordinate) {
    printf("\nEnter the x coordinate> "); // prompt
	scanf("%lf", &x_coordinate); // get input
	// printf("\n (The X coordinate being used is %.2f) \n", x_coordinate); /* statement for debugging */
	/* copy and paste, replacing "x" with "y" */
	printf("\nEnter the y coordinate> "); // prompt
	scanf("%lf", &y_coordinate); // get input
	// printf("\n (The Y coordinate being used is %.2f) \n", y_coordinate); /* statement for debugging */
	if (x_coordinate > 0 && y_coordinate > 0) {
		printf("\n The point is in quadrant 1 \n"); // Making the quadrant a variable doesn't really help much, it's actually easier just to hard-code the response here.
	} else if (x_coordinate < 0 && y_coordinate > 0) {
		printf("\n The point is in quadrant 2 \n");
	} else if (x_coordinate > 0 && y_coordinate < 0) {
		printf("\n The point is in quadrant 3 \n");
	} else if (x_coordinate < 0 && y_coordinate < 0) { 
		printf("\n The point is in quadrant 4 \n");
	} else if (x_coordinate == 0) {
		printf("\n The point is on the Y axis. \n");
	} else if (y_coordinate == 0) {
		printf("\n The point is on the X axis. \n");
	} else if (x_coordinate == 0 && y_coordinate == 0) { 
		printf("\n The point is at the origin. \n");
	} else
		printf("\n This is not supposed to happen. \n");
    return 0;
}

// newline \n
