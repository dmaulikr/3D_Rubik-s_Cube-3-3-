
/* 
	some name of used variables n functions
*/


//-- global variables
int temp, temp1,temp2,temp3;

static int rotation = 0;
int scrambler = 0;
static GLfloat theta = 0.0;
static GLfloat p = 0.0, q = 0.0, r = 0.0;
static GLint inverse = 0;
int beginx = 0, beginy = 0;
int moving = 0;
float speed = 0.9;

void *font = GLUT_BITMAP_TIMES_ROMAN_24;


//-- functions name
void display();
void keyboard(unsigned char key, int x, int y);
void mouse(int btn, int state, int x, int y);
void motion(int x, int y);
void reshape(int width, int height);
void print(int x, int y, char *string);
void plane(int cl, int point1, int point2, int point3, int point4);
void cube1();
void cube2();
void cube3();
void cube4();
void cube5();
void cube6();
void cube7();
void cube8();
void cube9();
void cube10();
void cube11();
void cube12();
void cube13();
void cube14();
void cube15();
void cube16();
void cube17();
void cube18();
void cube19();
void cube20();
void cube21();
void cube22();
void cube23();
void cube24();
void cube25();
void cube26();
void cube27();
void spin();
void Up();
void Down();
void Front();
void Back();
void Left();
void Right();