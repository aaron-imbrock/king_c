#include <stdio.h>
#include <math.h>

#define	RADIUS 10
#define VOLUME_OF_SPHERE (M_PI * 4.0f/3.0f * (RADIUS * RADIUS * RADIUS))

int main(void)
{
	// const int RADIUS = 10;
	// const VOLUME_OF_SPHERE = M_PI * 4.0f/3.0f * (RADIUS * RADIUS * RADIUS);

	printf("The volume of a sphere with a radius of %d is %.2\n", RADIUS, VOLUME_OF_SPHERE);

	return 0;
}

