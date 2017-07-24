
/*
It's a simple 3D rubiks cube programm in cpp using opengl(glut).
	Here mouse event is used to rotate the cube, and keyboard event 
	is used to spin the cube. Here extra feature is auto scrambling.
*/

//-- header files
#include<iostream>
#include<stdio.h>
#include <string.h>
#include<GL/glut.h>
#include <ctime>

#include "array.h"
#include "variable n function.h"
#include "display.h"
#include "draw.h"
#include "spin.h"
#include "move.h"
#include "io event.h"
#include "reshape.h"
#include "print.h"

using namespace std;




//-- main function
int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (1000, 600);
    glutCreateWindow ("RUBIK'S CUBE");

    glutReshapeFunc (reshape);
    glutIdleFunc(spin);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);

    glutKeyboardFunc(keyboard);
    glutDisplayFunc (display);
    glEnable(GL_DEPTH_TEST);
    glutMainLoop();

    return 0;
}











