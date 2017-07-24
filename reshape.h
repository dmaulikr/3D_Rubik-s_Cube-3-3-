
/*
	shape the whole 3D cube
*/

//-- reshape the cube function
void reshape(int width,int height)
{
	glViewport(0,0,width,height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	if (width <= height)
        glOrtho( -10.0, 10.0, -10.0*(GLfloat)height/(GLfloat)width, 10.0*(GLfloat)height/(GLfloat)width, -10.0, 10.0 );
	else
        glOrtho( -10.0*(GLfloat)width/(GLfloat)height, 10.0*(GLfloat)width/(GLfloat)height, -10.0, 10.0, -10.0, 10.0 );

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}