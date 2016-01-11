#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

void printNameCourse();
float computeCircleArea(float functionRadius);

int main(){
	
	printNameCourse();
	/**********************/
	float area;
	float radius;
	
	radius = 10;
	
	area = computeCircleArea(radius);
	
	printf("The Area is %f", area);
	return EXIT_SUCCESS;
	
	return 0;
}

void printNameCourse()
{
printf("Daniel Nikko B. Viray\n");
printf("Hello LBYEC71!\n");

}
float computeCircleArea(float functionRadius){
return PI * functionRadius * functionRadius;
}

