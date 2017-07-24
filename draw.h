
/*
	draw all the 27 cubes with 27*6 planes
*/


//-- draw all 27 cubes
void cube1()// center
{
	plane( 6, 0, 3, 2, 1 );
	plane( 6, 2, 3, 7, 6 );
	plane( 6, 0, 4, 7, 3 );
    plane( 6, 1, 2, 6, 5 );
	plane( 6, 4, 5, 6, 7 );
	plane( 6, 0, 1, 5, 4 );
}

void cube2()// down center
{
	plane( 6, 8, 11, 10, 9 );
	plane( 6, 10, 11, 15, 14 );
	plane( 6, 8, 12, 15, 11 );
    plane( 6, 9, 10, 14, 13 );
	plane( 6, 12, 13, 14, 15 );
	plane( dside[1][1], 8, 9, 13, 12);
}

void cube3()// left center
{
	plane( 6, 16, 19, 18, 17 );
	plane( 6, 18, 19, 23, 22 );
	plane( lside[1][1], 16, 20, 23, 19 );
    plane( 6, 17, 18, 22, 21 );
	plane( 6, 20, 21, 22, 23 );
	plane( 6, 16, 17, 21, 20 );
}

void cube4()// right center
{
	plane( 6, 24, 27, 26, 25 );
	plane( 6, 26, 27, 31, 30 );
	plane( 6, 24, 28, 31, 27 );
    plane( rside[1][1], 25, 26, 30, 29 );
	plane( 6, 28, 29, 30, 31 );
	plane( 6, 24, 25, 29, 28 );
}

void cube5()// up center
{
	plane( 6, 32, 35, 34, 33 );
	plane( uside[1][1], 34, 35, 39, 38 );
	plane( 6, 32, 36, 39, 35 );
    plane( 6, 33, 34, 38, 37 );
	plane( 6, 36, 37, 38, 39 );
	plane( 6, 32, 33, 37, 36 );
}

void cube6()// front center
{
	plane( 6, 40, 43, 42, 41 );
	plane( 6, 42, 43, 47, 46 );
	plane( 6, 40, 44, 47, 43 );
    plane( 6, 41, 42, 46, 45 );
	plane( fside[1][1], 44, 45, 46, 47 );
	plane( 6, 40, 41, 45, 44 );
}

void cube7()// back center
{
	plane( bside[1][1], 48, 51, 50, 49 );
	plane( 6, 50, 51, 55, 54 );
	plane( 6, 48, 52, 55, 51 );
    plane( 6, 49, 50, 54, 53 );
	plane( 6, 52, 53, 54, 55 );
	plane( 6, 48, 49, 53, 52 );
}

void cube8()// up left center
{
	plane( 6, 56, 59, 58, 57 );
	plane( uside[1][0], 58, 59, 63, 62 );
	plane( lside[0][1], 56, 60, 63, 59 );
    plane( 6, 57, 58, 62, 61 );
	plane( 6, 60, 61, 62, 63 );
	plane( 6, 56, 57, 61, 60 );
}

void cube9()// up right center
{
	plane( 6, 64, 67, 66, 65);
	plane( uside[1][2], 66, 67, 71, 70 );
	plane( 6, 64, 68, 71, 67 );
    plane( rside[0][1], 65, 66, 70, 69 );
	plane( 6, 68, 69, 70, 71 );
	plane( 6, 64, 65, 69, 68 );
}

void cube10()// up front center
{
	plane( 6, 72, 75, 74, 73 );
	plane( uside[2][1], 74, 75, 79, 78 );
	plane( 6, 72, 76, 79, 75 );
    plane( 6, 73, 74, 78, 77 );
	plane( fside[0][1], 76, 77, 78, 79 );
	plane( 6, 72, 73, 77, 76 );
}

void cube11()// up back center
{
	plane( bside[0][1], 80, 83, 82, 81 );
	plane( uside[0][1], 82, 83, 87, 86 );
	plane( 6, 80, 84, 87, 83 );
    plane( 6, 81, 82, 86, 85 );
	plane( 6, 84, 85, 86, 87 );
	plane( 6, 80, 81, 85, 84 );
}

void cube12()// down left center
{
	plane( 6, 88, 91, 90, 89 );
	plane( 6, 90, 91, 95, 94);
	plane( lside[2][1], 88, 92, 95, 91 );
    plane( 6, 89, 90, 94, 93 );
	plane( 6, 92, 93, 94, 95 );
	plane( dside[1][0], 88, 89, 93, 92 );
}

void cube13()// down right center
{
	plane( 6, 96, 99, 98, 97 );
	plane( 6, 98, 99, 103, 102 );
	plane( 6, 96, 100, 103, 99 );
    plane( rside[2][1], 97, 98, 102, 101 );
	plane( 6, 100, 101, 102, 103 );
	plane( dside[1][2], 96, 97, 101, 100 );
}

void cube14()// down front center
{
	plane( 6, 104, 107, 106, 105 );
	plane( 6, 106, 107, 111, 110 );
	plane( 6, 104, 108, 111, 107 );
    plane( 6, 105, 106, 110, 109 );
	plane( fside[2][1], 108, 109, 110, 111 );
	plane( dside[0][1], 104, 105, 109, 108);
}

void cube15()// down back center
{
	plane( bside[2][1], 112, 115, 114, 113 );
	plane( 6, 114, 115, 119, 118 );
	plane( 6, 112, 116, 119, 115 );
    plane( 6, 113, 114, 118, 117 );
	plane( 6, 116, 117, 118, 119 );
	plane( dside[2][1], 112, 113, 117, 116 );
}

void cube16()// up back left
{
	plane( bside[0][2], 120, 123, 122, 121 );
	plane( uside[0][0], 122, 123, 127, 126 );
	plane( lside[0][0], 120, 124, 127, 123 );
    plane( 6, 121, 122, 126, 125 );
	plane( 6, 124, 125, 126, 127 );
	plane( 6, 120, 121, 125, 124 );
}

void cube17()// up front left
{
	plane( 6, 128, 131, 130, 129 );
	plane( uside[2][0], 130, 131, 135, 134 );
	plane( lside[0][2], 128, 132, 135, 131 );
    plane( 6, 129, 130, 134, 133 );
	plane( fside[0][0], 132, 133, 134, 135 );
	plane( 6, 128, 129, 133, 132 );
}


void cube18()// up back right
{
	plane( bside[0][0], 136, 139, 138, 137 );
	plane( uside[0][2], 138, 139, 143, 142 );
	plane( 6, 136, 140, 143, 139 );
    plane( rside[0][2], 137, 138, 142, 141 );
	plane( 6, 140, 141, 142, 143);
	plane( 6, 136, 137, 141, 140);
}


void cube19()// up front right
{
	plane( 6, 144, 147, 146, 145 );
	plane( uside[2][2], 146, 147, 151, 150 );
	plane( 6, 144, 148, 151, 147 );
    plane( rside[0][0], 145, 146, 150, 149 );
	plane( fside[0][2], 148, 149, 150, 151 );
	plane( 6, 144, 145, 149, 148 );
}

void cube20()// center back left
{
	plane( bside[1][2], 152, 155, 154, 153 );
	plane( 6, 154, 155, 159, 158 );
	plane( lside[1][0], 152, 156, 159, 155 );
    plane( 6, 153, 154, 158, 157 );
	plane( 6, 156, 157, 158, 159 );
	plane( 6, 152, 153, 157, 156 );
}

void cube21()// center front left
{
	plane( 6, 160, 163, 162, 161 );
	plane( 6, 162, 163, 167, 166 );
	plane( lside[1][2], 160, 164, 167, 163 );
    plane( 6, 161, 162, 166, 165 );
	plane( fside[1][0], 164, 165, 166, 167 );
	plane( 6, 160, 161, 165, 164 );
}


void cube22()// center back right
{
	plane( bside[1][0], 168, 171, 170, 169 );
	plane( 6, 170, 171, 175, 174 );
	plane( 6, 168, 172, 175, 171 );
    plane( rside[1][2], 169, 170, 174, 173 );
	plane( 6, 172, 173, 174, 175 );
	plane( 6, 168, 169, 173, 172 );
}


void cube23()// center front right
{
	plane( 6, 176, 179, 178, 177 );
	plane( 6, 178, 179, 183, 182 );
	plane( 6, 176, 180, 183, 179 );
    plane( rside[1][0], 177, 178, 182, 181 );
	plane( fside[1][2], 180, 181, 182, 183 );
	plane( 6, 176, 177, 181, 180 );
}

void cube24()// down back left
{
	plane( bside[2][2], 184, 187, 186, 185 );
	plane( 6, 186, 187, 191, 190 );
	plane( lside[2][0], 184, 188, 191, 187 );
    plane( 6, 185, 186, 190, 189 );
	plane( 6, 188, 189, 190, 191 );
	plane( dside[2][0], 184, 185, 189, 188 );
}

void cube25()// down front left
{
	plane( 6, 192, 195, 194, 193 );
	plane( 6, 194, 195, 199, 198 );
	plane( lside[2][2], 192, 196, 199, 195 );
    plane( 6, 193, 194, 198, 197 );
	plane( fside[2][0], 196, 197, 198, 199 );
	plane( dside[0][0], 192, 193, 197, 196 );
}

void cube26()// down front right
{
	plane( bside[2][0], 200, 203, 202, 201 );
	plane( 6, 202, 203, 207, 206 );
	plane( 6, 200, 204, 207, 203 );
    plane( rside[2][2], 201, 202, 206, 205 );
	plane( 6, 204, 205, 206, 207 );
	plane( dside[2][2], 200, 201, 205, 204 );
}

void cube27()// down front right
{
	plane( 6, 208, 211, 210, 209 );
	plane( 6, 210, 211, 215, 214 );
	plane( 6, 208, 212, 215, 211 );
    plane( rside[2][0], 209, 210, 214, 213 );
	plane( fside[2][2], 212, 213, 214, 215 );
	plane( dside[0][2], 208, 209, 213, 212 );
}


//-- draw a plane function
void plane(int cl, int point1, int point2, int point3, int point4)
{

	glColor3f(0,0,0);// draw a border line for every single plane of a cube
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glVertex3fv(cubeCornerPoints[point1]);
	glVertex3fv(cubeCornerPoints[point2]);
	glVertex3fv(cubeCornerPoints[point3]);
	glVertex3fv(cubeCornerPoints[point4]);
	glEnd();


	glColor3fv(color[cl]);// draw a plane
	glBegin(GL_POLYGON);
	glVertex3fv(cubeCornerPoints[point1]);
	glVertex3fv(cubeCornerPoints[point2]);
	glVertex3fv(cubeCornerPoints[point3]);
	glVertex3fv(cubeCornerPoints[point4]);
	glEnd();
}