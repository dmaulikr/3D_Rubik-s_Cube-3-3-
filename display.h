
/*
	main display function
*/

//-- display whole things function
void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glPushMatrix();

    glColor3fv(color[0]);
	print(-3.5,9,"Rubik's Cube 3D");

    // instruction box
	glColor3fv(color[1]);
	glBegin(GL_LINE_LOOP);
	glVertex2i(-16,7);
	glVertex2i(-9,7);
	glVertex2i(-9,-7);
	glVertex2i(-16,-7);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(16,7);
	glVertex2i(9,7);
	glVertex2i(9,-7);
	glVertex2i(16,-7);
	glEnd();

	glColor3fv(color[3]);
	print(-15,5,"  Right   -> f");
	print(-15,3,"  Left    -> a");
	print(-15,1,"  Up      -> e");
	print(-15,-1,"  Down   -> x");
	print(-15,-3,"  Front   -> d");
	print(-15,-5,"  Back    -> s");
	print(10,5,"  Right !  -> F");
	print(10,3,"  Left !    -> A");
	print(10,1,"  Up !      -> E");
	print(10,-1,"  Down ! -> X");
	print(10,-3,"  Front !  -> D");
	print(10,-5,"  Back !   -> S");


    glRotatef(0+p, 1.0, 0.0, 0.0);
    glRotatef(0+q, 0.0, 1.0, 0.0);
    glRotatef(0+r, 0.0, 0.0, 1.0);


    if(rotation==0)// neutral
    {
        cube1();
        cube2();
        cube3();
        cube4();
        cube5();
        cube6();
        cube7();
        cube8();
        cube9();
        cube10();
        cube11();
        cube12();
        cube13();
        cube14();
        cube15();
        cube16();
        cube17();
        cube18();
        cube19();
        cube20();
        cube21();
        cube22();
        cube23();
        cube24();
        cube25();
        cube26();
        cube27();
    }
    else if(rotation==1) //Up spin
    {
        cube1();
        cube2();
        cube3();
        cube4();
        cube6();
        cube7();
        cube12();
        cube13();
        cube14();
        cube15();
        cube20();
        cube21();
        cube22();
        cube23();
        cube24();
        cube25();
        cube26();
        cube27();

        if(inverse==0)
        {
            glRotatef(-theta,0.0,1.0,0.0);
        }
        else
        {
            glRotatef(theta,0.0,1.0,0.0);
        }

        cube5();
        cube8();
        cube9();
        cube10();
        cube11();
        cube16();
        cube17();
        cube18();
        cube19();
    }
    else if(rotation==2)// Right spin
    {
        cube1();
        cube2();
        cube3();
        cube5();
        cube6();
        cube7();
        cube8();
        cube10();
        cube11();
        cube12();
        cube14();
        cube15();
        cube16();
        cube17();
        cube20();
        cube21();
        cube24();
        cube25();

        if(inverse==0)
        {
            glRotatef(-theta,1.0,0.0,0.0);
        }
        else
        {
            glRotatef(theta,1.0,0.0,0.0);
        }

        cube4();
        cube9();
        cube13();
        cube18();
        cube19();
        cube22();
        cube23();
        cube26();
        cube27();
    }
    else if(rotation==3)// Front spin
    {
        cube1();
        cube2();
        cube3();
        cube4();
        cube5();
        cube7();
        cube8();
        cube9();
        cube11();
        cube12();
        cube13();
        cube15();
        cube16();
        cube18();
        cube20();
        cube22();
        cube24();
        cube26();

        if(inverse==0)
        {
            glRotatef(-theta,0.0,0.0,1.0);
        }
        else
        {
            glRotatef(theta,0.0,0.0,1.0);
        }

        cube6();
        cube10();
        cube14();
        cube17();
        cube19();
        cube21();
        cube23();
        cube25();
        cube27();
    }
    else if(rotation==4)// Left spin
    {
        cube1();
        cube2();
        cube4();
        cube5();
        cube6();
        cube7();
        cube9();
        cube10();
        cube11();
        cube13();
        cube14();
        cube15();
        cube18();
        cube19();
        cube22();
        cube23();
        cube26();
        cube27();

        if(inverse==0)
        {
            glRotatef(theta,1.0,0.0,0.0);
        }
        else
        {
            glRotatef(-theta,1.0,0.0,0.0);
        }

        cube3();
        cube8();
        cube12();
        cube16();
        cube17();
        cube20();
        cube21();
        cube24();
        cube25();
    }
    else if(rotation==5)// Back spin
    {
        cube1();
        cube2();
        cube3();
        cube4();
        cube5();
        cube6();
        cube8();
        cube9();
        cube10();
        cube12();
        cube13();
        cube14();
        cube17();
        cube19();
        cube21();
        cube23();
        cube25();
        cube27();

        if(inverse==0)
        {
            glRotatef(theta,0.0,0.0,1.0);
        }
        else
        {
            glRotatef(-theta,0.0,0.0,1.0);
        }

        cube7();
        cube11();
        cube15();
        cube16();
        cube18();
        cube20();
        cube22();
        cube24();
        cube26();
    }
    else if(rotation==6)// Down spin
    {
        cube1();
        cube3();
        cube4();
        cube5();
        cube6();
        cube7();
        cube8();
        cube9();
        cube10();
        cube11();
        cube16();
        cube17();
        cube18();
        cube19();
        cube20();
        cube21();
        cube22();
        cube23();

        if(inverse==0)
        {
            glRotatef(theta,0.0,1.0,0.0);
        }
        else
        {
            glRotatef(-theta,0.0,1.0,0.0);
        }

        cube2();
        cube12();
        cube13();
        cube14();
        cube15();
        cube24();
        cube25();
        cube26();
        cube27();
    }
    glPopMatrix();

	glFlush();
	glutSwapBuffers();

}