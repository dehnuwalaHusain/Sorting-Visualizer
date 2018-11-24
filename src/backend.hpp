#define THICKNESS 3.0

/*
 * ------------------------------------------------------
 * drawString ()
 * Writes the string on the top-left corner of the screen.
 * ------------------------------------------------------
*/
void drawString ( float x, float y, char *string )
{
   glRasterPos2f ( x, y );
   
   for ( char* c = string ; *c != '\0'; c++ )
   {
      glutBitmapCharacter(GLUT_BITMAP_8_BY_13, *c); // Updates the position
   }
}

/*
 * ------------------------------------------------------
 * dispTemp ()
 * Displays the array on the GLUT screen with the height of each bar equal to the number in the array.
 * ------------------------------------------------------
*/
void dispTemp ( float numbers [ 200 ], int j, int j2, char *string )
{
    glClear ( GL_COLOR_BUFFER_BIT );
    drawString ( 0, 145, string);
    glLineWidth ( THICKNESS );
    glBegin ( GL_LINES );
    int increment = 0;
    for ( int i = 0 ; i < 200 ; i++ )
    {
        if ( i == j || i == j2 )
            glColor3f ( 1.0, 0.0, 0.0 );
        else
            glColor3f ( 1.0, 1.0, 1.0 ); 
        glVertex2i ( increment, 0 ); 
        glVertex2i ( increment , numbers [ i ]); 
        increment++;
    }
    glEnd();
    glFlush();
}

/*
 * ------------------------------------------------------
 * initializeArray ()
 * Initializes an array with progressively ascending numbers and shuffeles them in order to sort them.
 * ------------------------------------------------------
*/
void initializeArray ( float numbers [ 200 ])
{
    float increment = 0.75;
    for ( int i = 0 ; i < 200 ; i++, increment += 0.75 )
        numbers [ i ] = increment;
    int count = 0;
    
    srand ( time ( 0 ));
    for ( int i = 0; i < 200 ; i++ )
    {
        int j = ( rand () % ( 200 - i )) + i;
        float temp = numbers [ i ];
        numbers [ i ] = numbers [ j ];
        numbers [ j ] = temp;
    }

}
