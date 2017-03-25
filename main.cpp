/*****************************************************************************
 * AUTHOR	  : 
 * STUDENT ID     :  
 * LAB #13	  : Output - Geometry
 * CLASS	  : CS1A
 * SECTION	  : MW: 8am
 * DUE DATE	  : 03/13/17
 ****************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/****************************************************************************
 * ANALYSIS PARAGRAPH
 *---------------------------------------------------------------------------
 * We discussed the difference of each persons Lab #11 and decided to use
 * my (Stan) lab. We chose my lab because it had greater detail and
 * organization. In addition, it was easier to read and modify for Lab 13.
 ****************************************************************************/

/****************************************************************************
 * OUTPUT - GEOMETRY
 *---------------------------------------------------------------------------
 * This program will obtain from the user the
 * dimensions of 3 geometric objects...
 * 		a triangle,
 * 		rectangle, and
 * 		a circle.
 *
 * It calculates, stores and outputs the area of each triangle, rectangle,
 * and circle object.
 *---------------------------------------------------------------------------
 * INPUT:
 *	  Three sets of data will be input
 * 	  *************
 * 	  *** set 1 ***
 * 	  *************
 * 	  	triangleHeight	: the height of the triangle
 * 	  	triangleBase	: the size of the base of the triangle
 *
 *	  *************
 * 	  *** set 2 ***
 * 	  *************
 * 	  	rectangleWidth	: the width of the rectangle
 * 	  	rectangleHeight	: the height of the rectangle
 *
 *    	  *************
 * 	  *** set 3 ***
 * 	  *************
 * 	  	circleRadius	: the radius of the circle
 *
 * OUTPUT:
 * 	This program will output the program heading and the triangle area,
 * 	rectangle area,and circle area
 * 		triangleArea 	    : the area of the triangle
 * 		rectangleArea	    : the area of the rectangle
 * 		circleArea	    : the area of the circle
 *
 ****************************************************************************/

int main()
{
	/************************************************************************
	 * CONSTANTS
	 * ----------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ----------------------------------------------------------------------
 	 * PROGRAMMER     : Programmer's Name
	 * CLASS	  : Student's Course
	 * SECTION	  : Class Days and Times
	 * LAB_NUM	  : Lab Number (specific to this lab)
	 * LAB_NAME	  : Title of the Lab
	 *
	 * ----------------------------------------------------------------------
	 * USED FOR COLUMN FORMATTING
	 * ----------------------------------------------------------------------
	 * PROMPT_COL         : the set width of the column for the prompts
	 * TRIANGLE_AREA_COL  : the column for area of the triangle
	 * RECTANGLE_AREA_COL : the column for area of the rectangle
	 * CIRCLE_AREA_COL    : the column for area of the circle
	 *
	 ************************************************************************/
	const char PROGRAMMER[] = " ";
	const char CLASS[]	= "CS1A";
	const char SECTION[]	= "MW: 8:00a";
	const int  LAB_NUM	= 13;
	const char LAB_NAME[]	= "Output - Geometry";
	const float PI 		= 3.14159;

	const int PROMPT_COL         = 35;
	const int TRIANGLE_AREA_COL  = 18;
	const int RECTANGLE_AREA_COL = 19;
	const int CIRCLE_AREA_COL    = 16;

	float triangleHeight;      // INPUT & CALC - Set 1: triangle height
	float triangleBase;        // INPUT & CALC - Set 1: triangle base
	float triangleArea;        // CALC & OUT   - Set 1: triangle area

	float rectangleWidth;      // INPUT & CALC - Set 2: rectangle width
	float rectangleHeight;	   // INPUT & CALC - Set 2: rectangle height
	float rectangleArea;	   // CALC & OUT   - Set 2: rectangle area

	float circleRadius;	   // INPUT & CALC - Set 3: circle radius
	float circleArea;	   // CALC & OUT   - Set 3: circle area

	// OUTPUT - Class Heading
	cout << left;
	cout << "********************************************************\n";
	cout << "*  PROGRAMMED BY : "  << PROGRAMMER << endl;
	cout << "*  "	   << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	cout << "*  "	   << setw(14) << "SECTION"  << ": " << SECTION  << endl;
	cout << "*  LAB #" << setw(9)  << LAB_NUM    << ": " << LAB_NAME << endl;
	cout << "********************************************************\n\n";
	cout << right;

	/************************************************************************
	 * INPUT - Set 1: read in 1 set of data each containing:
	 * 		  triangleHeight, and
	 * 	  	  triangleBase
	 *
 	 *   	   Set 2: read in 1 set of data each containing:
	 * 		  rectangleWidth, and
	 * 		  rectangleHeight
 	 *
 	 *	   Set 3: read in 1 set of data containing:
	 *	   	  circleRadius
	 *
	 ************************************************************************/
	// INPUT - Set 1: triangleHeight, and triangleBase
	cout << left;
	cout << setw(PROMPT_COL) << "Enter the height of the triangle: ";
	cin  >> triangleHeight;

	cout << setw(PROMPT_COL) << "Enter the base of the triangle: ";
	cin  >> triangleBase;

	cout << endl;

	// INPUT - Set 2: rectangleWidth, and rectangleHeight
	cout << setw(PROMPT_COL) << "Enter the width of the rectangle: ";
	cin  >> rectangleWidth;

	cout << setw(PROMPT_COL) << "Enter the height of the rectangle: ";
	cin  >> rectangleHeight;

	cout << endl;

	// INPUT - Set 3: circleRadius
	cout << setw(PROMPT_COL) << "Enter the radius of the circle: ";
	cin  >> circleRadius;

	cout << endl << endl;
	cout << right;

	/************************************************************************
	 * PROCESSING - Set 1: calculates the area of the triangle
	 ************************************************************************/
	triangleArea = (triangleHeight * triangleBase) / 2.0;

	/************************************************************************
	 * PROCESSING - Set 2: calculates the area of the rectangle
	 ************************************************************************/
	rectangleArea = rectangleWidth * rectangleHeight;

	/************************************************************************
	 * PROCESSING - Set 3: calculates the area of the circle
	 ************************************************************************/
	circleArea = PI * pow(circleRadius, 2);

	/************************************************************************
	 * OUTPUT - Set 1: output the area of the triangle
	 * 			Set 2: output the area of the rectangle
	 * 			Set 3: output the area of the circle
	 *
	 * 			TRIANGLE AREA     RECTANGLE AREA     CIRCLE AREA
	 *			      94.0072                433	 3848.45
	 *				   94                433       3.85e+003
	 *				 94.0	            433.       3.85e+003
	 *			       94.007	         433.000	3848.448
	 *			     94.00717	       433.00000      3848.44800
	 ************************************************************************/

	/************************************************************************
	*OUTPUT - three sets of data(triangleArea, rectangleArea, and
	*circleArea header)
	*************************************************************************/

	cout << right;
	cout << setw(TRIANGLE_AREA_COL)  << "TRIANGLE AREA";
	cout << setw(RECTANGLE_AREA_COL) << "RECTANGLE AREA";
	cout << setw(CIRCLE_AREA_COL)    << "CIRCLE AREA";
        cout << left << endl;

    // OUTPUT-three sets of data(triangleArea, rectangleArea, and circleArea)
	cout << setprecision(6);
        cout << right << setw(TRIANGLE_AREA_COL)  << triangleArea
                      << setw(RECTANGLE_AREA_COL) << rectangleArea
                      << setw(CIRCLE_AREA_COL)    << circleArea
		      << endl;

        cout << setprecision(3);
	cout << right << setw(TRIANGLE_AREA_COL)  << triangleArea
		      << setw(RECTANGLE_AREA_COL) << rectangleArea
		      << setw(CIRCLE_AREA_COL)    << circleArea
		      << endl;

	cout << setprecision(3) << showpoint;
	cout << right << setw(TRIANGLE_AREA_COL)  << triangleArea
	    	      << setw(RECTANGLE_AREA_COL) << rectangleArea
		      << setw(CIRCLE_AREA_COL)    << circleArea
		      << endl;

	cout << setprecision(3) << fixed;
	cout << right << setw(TRIANGLE_AREA_COL)  << triangleArea
		      << setw(RECTANGLE_AREA_COL) << rectangleArea
		      << setw(CIRCLE_AREA_COL)    << circleArea
		      << endl;

	cout << setprecision(5) << fixed;
	cout << right << setw(TRIANGLE_AREA_COL)  << triangleArea
		      << setw(RECTANGLE_AREA_COL) << rectangleArea
		      << setw(CIRCLE_AREA_COL)    << circleArea;
	return 0;
}
