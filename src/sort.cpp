#include <GL/glut.h>
#include <bits/stdc++.h>
#include "algorithms.h"
using namespace std; 

/*
 * ------------------------------------------------------
 * init2D ()
 * Initializes the GLUT window into matrix mode, and creates a projection plane of 200 by 150
 * ------------------------------------------------------
*/
void init2D()
{
    glMatrixMode (GL_PROJECTION);
    gluOrtho2D ( 0.0, 200.0, 0.0, 150.0 );
}


void displayMe ( void )
{
    float numbers [ 200 ];

    // Initializes an array with progressively ascending numbers and shuffeles them in order to sort them.    
    initializeArray ( numbers );
    
    dispTemp ( numbers, -1, -1, "" );
    glEnd();
    glFlush();

    // Add your sorting algorithm here
    /* 1. */ bubble_sort ( numbers );
    dispTemp ( numbers, -1, -1, "Bubble Sort" );

    initializeArray ( numbers );
    
    /* 2. */ quick_sort ( numbers, 0, 199 );
    dispTemp ( numbers, -1, -1, "Quick Sort" );
}


int main ( int argc, char** argv )
{
    glutInit ( &argc, argv );
    glutInitDisplayMode ( GLUT_SINGLE );
    glutInitWindowSize ( 798, 600 );
    glutInitWindowPosition ( 100, 100 );
    glutCreateWindow( "Sorting visualizer" );

    init2D ();
    glutDisplayFunc ( displayMe );
    glutMainLoop ();
    return 0;
}