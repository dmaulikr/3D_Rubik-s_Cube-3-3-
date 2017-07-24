
/*
	spin the cube by each move
*/


//-- spinning cubes by each move function
void spin()
{
    theta += speed ;

    if(theta==360.0)
        theta -= 360.0;

	if(theta>=90.0)
	{
        glutIdleFunc(NULL);

        if(rotation==1 && inverse==0)
        {
            Up();
        }
        else if(rotation==1 && inverse==1)
        {
            Up();
            Up();
            Up();
        }
        else if(rotation==2 && inverse==0)
        {
            Right();
        }
        else if(rotation==2 && inverse==1)
        {
            Right();
            Right();
            Right();
        }
        else if(rotation==3 && inverse==0)
        {
            Front();
        }
        else if(rotation==3 && inverse==1)
        {
            Front();
            Front();
            Front();
        }
        else if(rotation==4 && inverse==0)
        {
            Left();
        }
        else if(rotation==4 && inverse==1)
        {
            Left();
            Left();
            Left();
        }
        else if(rotation==5 && inverse==0)
        {
            Back();
        }
        else if(rotation==5 && inverse==1)
        {
            Back();
            Back();
            Back();
        }
        else if(rotation==6 && inverse==0)
        {
            Down();
        }
        else if(rotation==6 && inverse==1)
        {
            Down();
            Down();
            Down();
        }

        rotation=0;
        theta=0;
    }

    if(scrambler)
    {
        for(int i=0; i<25; i++)
        {
            char d = scramble[scrambler-1][i];

            if(d=='U')
            {
                Up();
            }
            else if(d=='u')
            {
                Up();
                Up();
                Up();

            }
            else if(d=='D')
            {
                Down();
            }
            else if(d=='d')
            {
                Down();
                Down();
                Down();
            }
            else if(d=='L')
            {
                Left();
            }
            else if(d=='l')
            {
                Left();
                Left();
                Left();
            }
            else if(d=='R')
            {
                Right();
            }
            else if(d=='r')
            {
                Right();
                Right();
                Right();
            }
            else if(d=='F')
            {
                Front();
            }
            else if(d=='f')
            {
                Front();
                Front();
                Front();
            }
            else if(d=='B')
            {
                Back();
            }
            else if(d=='b')
            {
                Back();
                Back();
                Back();
            }
        }

        scrambler=0;
    }

    glutPostRedisplay();
}