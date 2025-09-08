#include<iostream>

using namespace std;

// star1: Prints a right-angled triangle pattern.
// It increases the number of stars in each row.
void star1(int n){

    for (int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)  cout<<"*";
        cout<<endl;
    }
}

// star2: Prints an inverted right-angled triangle pattern.
// It decreases the number of stars in each row.
void star2(int n){

    for (int i=n;i>0;i--)
    {
        for(int j=0;j<i;j++)  cout<<"*";
        cout<<endl;
    }
}

// star3: Prints a diagonal line of stars from top-left.
// The number of spaces before the star increases with each row.
void star3(int n){

    for (int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)  cout<<" ";
        cout<<"*";
        cout<<endl;
    }
}

// star4: Prints a diagonal line of stars from top-right.
// The number of spaces before the star decreases with each row.
void star4(int n){

    for (int i=n;i>0;i--)
    {
        for(int j=0;j<i-1;j++)  cout<<" ";
        cout<<"*";
        cout<<endl;
    }
}

// star5: Prints a right-aligned inverted right-angled triangle.
// It uses spaces to push the stars to the right side.
void star5(int n){

    for (int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)    cout<<" ";
        for(int k=0;k<n-i;k++)  cout<<"*";
        cout<<endl;
    }
}

// star6: Prints a right-aligned right-angled triangle.
// It uses leading spaces to align the stars to the right.
void star6(int n){

    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)    cout<<" ";
        for(int k=0;k<=i;k++)  cout<<"*";
        cout<<endl;
    }
}

// star7: Prints a pyramid (or equilateral triangle) pattern.
// The pattern widens with a central star in each row.
void star7(int n){

    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)    cout<<" ";

        for(int k=0;k<=i*2;k++)  cout<<"*";
        cout<<endl;
    }
}

// star8: Prints an inverted pyramid pattern.
// The pattern narrows towards a central star.
void star8(int n){

    for (int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)    cout<<" ";

        for(int k=1;k<(n-i)*2;k++)  cout<<"*";
        cout<<endl;
    }
}

// star9: Prints a diamond pattern.
// It combines the pyramid (star7) and inverted pyramid (star8) patterns.
void star9(int n){

    // First half of the diamond (pyramid)
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)    cout<<" ";
        for(int k=0;k<=i*2;k++)  cout<<"*";
        cout<<endl;
    }
    // Second half of the diamond (inverted pyramid)
    for (int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)    cout<<" ";
        for(int k=1;k<(n-i)*2;k++)  cout<<"*";
        cout<<endl;
    }
}

// star10: Prints a inverted diamond pattern.
// It has two mirrored triangles of stars and a central space.
void star10(int n){

    // Top half of the inverted diamond
    for (int i=0;i<n;i++)
    {
        // Left side stars
        for(int j=0;j<n-i-1;j++)    cout<<"*";
        // Central spaces
        for(int k=0;k<=i*2;k++)  cout<<" ";
        // Right side stars
        for(int j=n-i-1;j>0;j--)    cout<<"*";

        cout<<endl;
    }
    // Bottom half of the inverted diamond
    for (int i=1;i<n;i++)
    {
        // Left side stars
        for(int j=0;j<i;j++)    cout<<"*";
        // Central spaces
        for(int k=1;k<(n-i)*2;k++)  cout<<" ";
        // Right side stars
        for(int j=i;j>0;j--)    cout<<"*";
        
        cout<<endl;
    }
}

int main()
{
    int n=0;
    cout<<("Enter the number: ");
    cin>>n;

    // Declare and initialize an array of function pointers.
    // This allows us to call each function using a loop.
    void (*patterns[])(int)={star1,star2,star3,star4,star5,star6,star7,star8,star9,star10};

    // Calculate the total number of patterns in the array.
    int totalPatterns=sizeof(patterns)/sizeof(patterns[0]);

    // Loop through the array of function pointers.
    for(int i=0;i<totalPatterns;i++)
    {
        cout<<i+1<<" "<<endl;
        patterns[i](n); // Call the function at the current index.
        cout<<endl;
    }
    
    return 0;
}


/*
Output
------

Enter the number: 5
1 
*
**
***
****
*****

2 
*****
****
***
**
*

3 
*
 *
  *
   *
    *

4 
    *
   *
  *
 *
*

5 
*****
 ****
  ***
   **
    *

6 
    *
   **
  ***
 ****
*****

7 
    *
   ***
  *****
 *******
*********

8 
*********
 *******
  *****
   ***
    *

9 
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

10 
**** ****
***   ***
**     **
*       *
         
*       *
**     **
***   ***
**** ****


*/
