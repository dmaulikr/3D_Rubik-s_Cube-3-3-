
/*
	6*2 basic moves
*/


//-- general 6 moves function
void Up()
{
    // change in up side
	int temp = uside[0][0];

	uside[0][0] = uside[2][0];
	uside[2][0] = uside[2][2];
	uside[2][2] = uside[0][2];
	uside[0][2] = temp;

	temp = uside[1][0];

    uside[1][0] = uside[2][1];
	uside[2][1] = uside[1][2];
	uside[1][2] = uside[0][1];
	uside[0][1] = temp;

    // change in other sides
    temp1 = fside[0][0];
    temp2 = fside[0][1];
    temp3 = fside[0][2];

    fside[0][0] = rside[0][0];
    fside[0][1] = rside[0][1];
    fside[0][2] = rside[0][2];

    rside[0][0] = bside[0][0];
    rside[0][1] = bside[0][1];
    rside[0][2] = bside[0][2];

    bside[0][0] = lside[0][0];
    bside[0][1] = lside[0][1];
    bside[0][2] = lside[0][2];

    lside[0][0] = temp1;
    lside[0][1] = temp2;
    lside[0][2] = temp3;
}

void Front()
{
    // change in front side
    int temp = fside[0][0];
	fside[0][0] = fside[2][0];
	fside[2][0] = fside[2][2];
	fside[2][2] = fside[0][2];
	fside[0][2] = temp;

	temp = fside[1][0];
    fside[1][0] = fside[2][1];
	fside[2][1] = fside[1][2];
	fside[1][2] = fside[0][1];
	fside[0][1] = temp;

    // change in other sides
    temp1 = lside[0][2];
    temp2 = lside[1][2];
    temp3 = lside[2][2];

    lside[0][2] = dside[0][0];
    lside[1][2] = dside[0][1];
    lside[2][2] = dside[0][2];

    dside[0][0] = rside[2][0];
    dside[0][1] = rside[1][0];
    dside[0][2] = rside[0][0];

    rside[2][0] = uside[2][2];
    rside[1][0] = uside[2][1];
    rside[0][0] = uside[2][0];

    uside[2][2] = temp1;
    uside[2][1] = temp2;
    uside[2][0] = temp3;
}

void Right()
{
    // change in right side
	temp = rside[0][0];

	rside[0][0] = rside[2][0];
	rside[2][0] = rside[2][2];
	rside[2][2] = rside[0][2];
	rside[0][2] = temp;

	temp = rside[1][0];

    rside[1][0] = rside[2][1];
	rside[2][1] = rside[1][2];
	rside[1][2] = rside[0][1];
	rside[0][1] = temp;

    // change in other sides
	temp1 = uside[0][2];
    temp2 = uside[1][2];
	temp3 = uside[2][2];

	uside[0][2] = fside[0][2];
	uside[1][2] = fside[1][2];
	uside[2][2] = fside[2][2];

	fside[0][2] = dside[0][2];
	fside[1][2] = dside[1][2];
	fside[2][2] = dside[2][2];


	dside[0][2] = bside[2][0];
	dside[1][2] = bside[1][0];
	dside[2][2] = bside[0][0];

	bside[2][0] = temp1;
	bside[1][0] = temp2;
	bside[0][0] = temp3;
}

void Left()
{
    // change in left side
    temp = lside[0][0];

	lside[0][0] = lside[2][0];
	lside[2][0] = lside[2][2];
	lside[2][2] = lside[0][2];
	lside[0][2] = temp;

	temp = lside[1][0];

    lside[1][0] = lside[2][1];
	lside[2][1] = lside[1][2];
	lside[1][2] = lside[0][1];
	lside[0][1] = temp;

    // change in other sides
	temp1 = fside[0][0];
	temp2 = fside[1][0];
	temp3 = fside[2][0];

	fside[0][0] = uside[0][0];
	fside[1][0] = uside[1][0];
	fside[2][0] = uside[2][0];

	uside[0][0] = bside[2][2];
	uside[1][0] = bside[1][2];
	uside[2][0] = bside[0][2];

	bside[2][2] = dside[0][0];
	bside[1][2] = dside[1][0];
	bside[0][2] = dside[2][0];


	dside[0][0] = temp1;
	dside[1][0] = temp2;
	dside[2][0] = temp3;
}

void Back()
{
	// change in back side
	temp = bside[0][0];

	bside[0][0] = bside[2][0];
	bside[2][0] = bside[2][2];
	bside[2][2] = bside[0][2];
	bside[0][2] = temp;

	temp = bside[1][0];

    bside[1][0] = bside[2][1];
	bside[2][1] = bside[1][2];
	bside[1][2] = bside[0][1];
	bside[0][1] = temp;

    // change in other sides
	temp1 = uside[0][0];
	temp2 = uside[0][1];
	temp3 = uside[0][2];

	uside[0][0] = rside[0][2];
	uside[0][1] = rside[1][2];
	uside[0][2] = rside[2][2];

	rside[0][2] = dside[2][2];
	rside[1][2] = dside[2][1];
	rside[2][2] = dside[2][0];

	dside[2][2] = lside[2][0];
	dside[2][1] = lside[1][0];
	dside[2][0] = lside[0][0];

	lside[2][0] = temp1;
	lside[1][0] = temp2;
	lside[0][0] = temp3;
}

void Down()
{
	// change in down side
	temp = dside[0][0];

	dside[0][0] = dside[2][0];
	dside[2][0] = dside[2][2];
	dside[2][2] = dside[0][2];
	dside[0][2] = temp;

	temp = dside[1][0];

    dside[1][0] = dside[2][1];
	dside[2][1] = dside[1][2];
	dside[1][2] = dside[0][1];
	dside[0][1] = temp;

    // change in others side
	temp1 = fside[2][0];
	temp2 = fside[2][1];
	temp3 = fside[2][2];

	fside[2][0] = lside[2][0];
	fside[2][1] = lside[2][1];
	fside[2][2] = lside[2][2];

	lside[2][0] = bside[2][0];
	lside[2][1] = bside[2][1];
	lside[2][2] = bside[2][2];

	bside[2][0] = rside[2][0];
	bside[2][1] = rside[2][1];
	bside[2][2] = rside[2][2];

	rside[2][0] = temp1;
	rside[2][1] = temp2;
	rside[2][2] = temp3;
}