#include "backend.hpp"
/*
 * -------------------------------------------------
 * Bubble Sort
 * -------------------------------------------------
*/
void bubble_sort ( float numbers [ 200 ])
{
    for ( int i = 0 ; i < 200; i++ )
    {
        for ( int j = 0 ; j < 200 - i - 1; j++ )
        {
            dispTemp ( numbers, j, j + 1, "Bubble Sort" );
            if ( numbers [ j ] > numbers [ j + 1 ])
            {   
                float temp = numbers [ j ];
                numbers [ j ] = numbers [ j + 1 ];
                numbers [ j + 1 ] = temp;
            }
            dispTemp ( numbers, j, j + 1, "Bubble Sort" );
        }
    }
    dispTemp ( numbers, -1, -1, "Bubble Sort");
}

/* 
 * -------------------------------------------------
 * QUICK SORT
 * -------------------------------------------------
*/
int partition ( float arr [ 200 ], int low, int high ) 
{ 
    int pivot = arr [ high ];
    int i = low - 1;  
  
    for (int j = low; j <= high - 1; j++) 
    { 

        dispTemp ( arr, j, pivot, "Quick Sort" );
        if ( arr [ j ] <= pivot ) 
        { 
            i++;    
            float temp = arr [ i ];
            arr [ i ] = arr [ j ];
            arr [ j ] = temp;
        } 
        dispTemp ( arr, j, pivot, "Quick Sort" );
    } 
    float temp = arr [ i + 1 ];
    arr [ i + 1 ] = arr [ high ];
    arr [ high ] = temp;
    dispTemp ( arr, low, high, "Quick Sort" ); 
    return ( i + 1 ); 
} 
void quick_sort ( float arr [ 200 ], int low, int high) 
{ 
    dispTemp ( arr, low, high, "Quick Sort" );
    if ( low < high ) 
    { 
        int pi = partition ( arr, low, high ); 
  
        quick_sort ( arr, low, pi - 1 ); 
        quick_sort ( arr, pi + 1, high ); 
    } 
} 

/*
 * -------------------------------------------------
*/