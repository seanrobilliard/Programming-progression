// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


#include "stdio.h"
constexpr auto pie = 3.14;;
#define triangle 1;
#define square 2;
#define circle 3;
#define rectangle 4;
#define parallelogram 5;
#define sector 6;
#define trapizium 7;
#define elipse 8;






int main()
{
	int choice = 0;
	int area = 0;



	printf_s("area calculator \n");
	printf_s("Enter choice: \n", choice);

	printf_s("1 triangle \n");
	printf_s("2 square \n");
	printf_s("3 circle \n");
	printf_s("4 rectangle \n");
	printf_s("5 parallelogram \n");
	printf_s("6 sector \n");
	printf_s("7 trapizium \n");
	printf_s("8 elipse \n");



	scanf_s("%d", &choice);
	if (choice > 8)
	{
		printf("invalid shape");
	}

	printf_s("your choice %d \n", choice);



	switch (choice)
	{
	case 1:

		float trianglearea;
		float trianglebase;
		printf("enter base: \n");
		scanf_s("%f", &trianglebase);


		float triangleheight;
		printf("enter height: \n");
		scanf_s("%f", &triangleheight);

		trianglearea = (0.5*trianglebase*triangleheight);

		printf("trianglearea: %.2f\n", trianglearea);

		break;


	case 2:
	{
		float squarebase;
		printf("enter base: \n");
		scanf_s("%f", &squarebase);


		float squareheight;
		printf("enter height: \n");
		scanf_s("%f", &squareheight);

		float squarearea = squarebase * squareheight;

		printf("area :%.2f\n", squarearea);
	}

	break;

	case 3:
		float radius;
		printf("enter radius: \n");
		scanf_s("%f", &radius);

		float circlearea;
		circlearea = (radius*radius*3.14);

		printf("area :%.2f\n", circlearea);

		break;


	case 4:
		float rectangleheight;
		printf("enter height: \n");
		scanf_s("%f", &rectangleheight);

		float rectanglewidth;
		printf("enter width: \n");
		scanf_s("%f", &rectanglewidth);

		float rectanglearea;
		rectanglearea = (rectangleheight*rectanglewidth);
		printf("area :%.2f\n", rectanglearea);

		break;

	case 5:
		float parallelogramheight;
		printf("enter vertical height: \n");
		scanf_s("%f", &parallelogramheight);

			float parallelogramwidth;
		printf("enter width: \n");
		scanf_s("%f", &parallelogramwidth);

		float parallelogramarea;
		parallelogramarea = (parallelogramheight*parallelogramwidth);
			printf("area :%.2f\n", parallelogramarea);

		break;

	case 6:

		float sectorradius;
		printf("enter radius: \n");
		scanf_s("%f", &sectorradius);

		float sectorangle;
		printf("enter angle in radians: \n");
		scanf_s("%f", &sectorangle);


		float sectorarea;
		sectorarea = (0.5*sectorradius*sectorradius*sectorangle);

		printf("area :%.2f\n", sectorarea);

		break;

	case 7:

		float topwidth;
		printf("enter top height: \n");
		scanf_s("%f", &topwidth);


		float bottomwidth;
		printf("enter bottom height: \n");
		scanf_s("%f", &bottomwidth);



		float height;
		printf("enter height: \n");
		scanf_s("%f", &height);

		float trapiziumarea;
		trapiziumarea = (0.5*(topwidth+bottomwidth)*height);


		printf("area :%.2f\n", trapiziumarea);

		break;

	case 8:

		float majorradius;
		printf("enter major radius: \n");
		scanf_s("%f", &majorradius);

		float minorradius;
		printf("enter minor radius: \n");
		scanf_s("%f", &minorradius);


		float elipsearea;
		elipsearea = (3.14*minorradius*majorradius);

		printf("area :%.2f\n", elipsearea);
		 
		break;





	}








	return 0;
}



