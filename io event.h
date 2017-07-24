
/*
	handle all process by using mouse n keyboard
*/


//-- mouse event function
void mouse(int btn, int state, int x, int y)
{
	if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
	{
        moving = 1;
        beginx = x;
        beginy = y;
	}
	else if(btn==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
    {
        p=10.0;
        q=10.0;
        r=0.0;

        glutIdleFunc(spin);
	}
}


//-- motion control function
void motion(int x, int y)
{
    if(p>=360 || p<=-360)
        p=0;
    if(q>=360 || q<=-360)
        q=0;

    if(moving==1)
    {
        if((p>=-225 && p<=-135) || (p>=135 && p<=225))
        {
            q -= (x - beginx);
            beginx = x;
            p += (y - beginy);
            beginy = y;
        }
        else
        {
            q += (x - beginx);
            beginx = x;
            p += (y - beginy);
            beginy = y;
        }


        glutPostRedisplay();
    }
}


//-- keyboard event function
void keyboard(unsigned char key, int x, int y)
{
	if(key=='e' || key=='E')// up
	{
		if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: blue && up: yellow
		{
			rotation=6;
		}
		else if(  ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: orange && up: white
		{
			rotation=1;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: orange && up: yellow
		{
			rotation=6;
		}
		else if(  ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: green && up: white
		{
			rotation=1;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: green && up: yellow
		{
			rotation=6;
		}
		else if(  ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=45 && q<=135) || (q>=-315 && q<=-225)) )// front: red && up: white
		{
			rotation=1;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: red && up: yellow
		{
			rotation=6;
		}
		else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: white && up: blue
        {
            rotation=3;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: white && up: red
        {
            rotation=4;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: white && up: green
        {
            rotation=5;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: white && up: orange
        {
            rotation=2;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: yellow && up: blue
        {
            rotation=3;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: yellow && up: red
        {
            rotation=4;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: yellow && up: green
        {
            rotation=5;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: yellow && up: orange
        {
            rotation=2;
        }
		else// front: blue && up: white
		{
			rotation=1;
		}

        if(key=='e')
            inverse=0;
        else if(key=='E')
            inverse=1;

        glutIdleFunc(spin);
	}
	else if(key=='f' || key=='F')// right
	{
		if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: blue && up: yellow
		{
			rotation=4;
		}
		else if(  ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: orange && up: white
		{
			rotation=5;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: orange && up: yellow
		{
			rotation=3;
		}
		else if(  ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: green && up: white
		{
			rotation=4;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: green && up: yellow
		{
			rotation=2;
		}
		else if(  ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=45 && q<=135) || (q>=-315 && q<=-225)) )// front: red && up: white
		{
			rotation=3;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: red && up: yellow
		{
			rotation=5;
		}
		else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: white && up: blue
        {
            rotation=4;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: white && up: red
        {
            rotation=5;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: white && up: green
        {
            rotation=2;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: white && up: orange
        {
            rotation=3;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: yellow && up: blue
        {
            rotation=2;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: yellow && up: red
        {
            rotation=3;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: yellow && up: green
        {
            rotation=4;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: yellow && up: orange
        {
            rotation=5;
        }
		else// front: blue && up: white
		{
			rotation=2;
		}

        if(key=='f')
            inverse=0;
        else if(key=='F')
            inverse=1;

        glutIdleFunc(spin);
	}
    else if(key=='d' || key=='D')// front
    {
        if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: blue && up: yellow
		{
			rotation=3;
		}
        else if( ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: orange && up: white
		{
			rotation=2;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: orange && up: yellow
		{
			rotation=2;
		}
		else if(  ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: green && up: white
		{
			rotation=5;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: green && up: yellow
		{
			rotation=5;
		}
		else if(  ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=45 && q<=135) || (q>=-315 && q<=-225)) )// front: red && up: white
		{
			rotation=4;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: red && up: yellow
		{
			rotation=4;
		}
		else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: white && up: blue
        {
            rotation=1;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: white && up: red
        {
            rotation=1;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: white && up: green
        {
            rotation=1;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: white && up: orange
        {
            rotation=1;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: yellow && up: blue
        {
            rotation=6;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: yellow && up: red
        {
            rotation=6;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: yellow && up: green
        {
            rotation=6;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: yellow && up: orange
        {
            rotation=6;
        }
        else
        {
            rotation=3;
        }

        if(key=='d')
            inverse=0;
        else if(key=='D')
            inverse=1;

        glutIdleFunc(spin);
    }
    else if(key=='a' || key=='A')// left
    {
		if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: blue && up: yellow
		{
			rotation=2;
		}
		else if( ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: orange && up: white
		{
			rotation=3;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: orange && up: yellow
		{
			rotation=5;
		}
		else if(  ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: green && up: white
		{
			rotation=2;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: green && up: yellow
		{
			rotation=4;
		}
		else if(  ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=45 && q<=135) || (q>=-315 && q<=-225)) )// front: red && up: white
		{
			rotation=5;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: red && up: yellow
		{
			rotation=3;
		}
		else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: white && up: blue
        {
            rotation=2;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: white && up: red
        {
            rotation=3;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: white && up: green
        {
            rotation=4;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: white && up: orange
        {
            rotation=5;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: yellow && up: blue
        {
            rotation=4;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: yellow && up: red
        {
            rotation=5;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: yellow && up: green
        {
            rotation=2;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: yellow && up: orange
        {
            rotation=3;
        }
		else// front: blue && up: white
		{
			rotation=4;
		}

        if(key=='a')
            inverse=0;
        else if(key=='A')
            inverse=1;

        glutIdleFunc(spin);
    }
    else if(key=='s' || key=='S')// back
    {
        if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: blue && up: yellow
		{
			rotation=5;
		}
        else if( ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: orange && up: white
		{
			rotation=4;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: orange && up: yellow
		{
			rotation=4;
		}
		else if(  ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: green && up: white
		{
			rotation=3;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: green && up: yellow
		{
			rotation=3;
		}
		else if(  ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=45 && q<=135) || (q>=-315 && q<=-225)) )// front: red && up: white
		{
			rotation=2;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: red && up: yellow
		{
			rotation=2;
		}
		else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: white && up: blue
        {
            rotation=6;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: white && up: red
        {
            rotation=6;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: white && up: green
        {
            rotation=6;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: white && up: orange
        {
            rotation=6;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: yellow && up: blue
        {
            rotation=1;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: yellow && up: red
        {
            rotation=1;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: yellow && up: green
        {
            rotation=1;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: yellow && up: orange
        {
            rotation=1;
        }
        else
        {
            rotation=5;
        }

        if(key=='s')
            inverse=0;
        else if(key=='S')
            inverse=1;

        glutIdleFunc(spin);
    }
    else if(key=='x' || key=='X')// down
    {
		if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: blue && up: yellow
		{
			rotation=1;
		}
		else if(  ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: orange && up: white
		{
			rotation=6;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: orange && up: yellow
		{
			rotation=1;
		}
		else if(  ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: green && up: white
		{
			rotation=6;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ( (q>=315 && p<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: green && up: yellow
		{
			rotation=1;
		}
		else if( ( (p>=315 && p<=360) || (p>=0 && p<=45) || (p>=-45 && p<=0) || (p>=-360 && p<=-315) ) && ((q>=45 && q<=135) || (q>=-315 && q<=-225)) )// front: red && up: white
		{
			rotation=6;
		}
		else if( ((p>=-225 && p<=-135) || (p>=135 && p<=225)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: red && up: yellow
		{
			rotation=1;
		}
		else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: white && up: blue
        {
            rotation=5;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: white && up: red
        {
            rotation=2;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: white && up: green
        {
            rotation=3;
        }
        else if( ((p>=-315 && p<=-225) || (p>=45 && p<=135)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: white && up: orange
        {
            rotation=4;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ( (q>=315 && q<=360) || (q>=0 && q<=45) || (q>=-45 && q<=0) || (q>=-360 && q<=-315) ) )// front: yellow && up: blue
        {
            rotation=5;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-315 && q<=-225) || (q>=45 && q<=135)) )// front: yellow && up: red
        {
            rotation=2;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-225 && q<=-135) || (q>=135 && q<=225)) )// front: yellow && up: green
        {
            rotation=3;
        }
        else if( ((p>=-135 && p<=-45) || (p>=225 && p<=315)) && ((q>=-135 && q<=-45) || (q>=225 && q<=315)) )// front: yellow && up: orange
        {
            rotation=4;
        }
		else// front: blue && up: white
		{
			rotation=6;
		}

        if(key=='x')
            inverse=0;
        else if(key=='X')
            inverse=1;

        glutIdleFunc(spin);
    }
    else if(key=='o' || key=='O')
    {
        // random function
        srand(time(NULL));
        scrambler = rand() % 5 +1;

        glutIdleFunc(spin);

    }

}