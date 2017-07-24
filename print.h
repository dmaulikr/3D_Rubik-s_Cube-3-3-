
/*
	print message in the window
*/

//-- print in glut window function
void print(int x, int y, char *string)
{
    int len, i;

    glRasterPos2f(x, y);

    len = (int) strlen(string);
    for (i = 0; i < len; i++)
    {
        glutBitmapCharacter(font, string[i]);
    }
}