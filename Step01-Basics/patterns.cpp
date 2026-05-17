#include <iostream>
#include <cstdlib>  // used to use system("cls") function
#include <unistd.h> // used to use sleep function
using namespace std;
/*
    ****
    ****
    ****
    ****
*/
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
    *
    **
    ***
    ****
    *****
*/
void pattern2(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j<= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/
void pattern3(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
 
/*
    1
    22
    333
    4444
    55555
*/
void pattern4(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

/*
    *****
    ****
    ***
    **
    *
*/
void pattern5(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
*/
void pattern6(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

/*
        *               [4,1,4] 
       ***              [3,3,3]
      *****             [2,5,2]
     *******            [1,7,1]
    *********           [0,9,0]
    in this j -> decending order for space and incending order for star
    so j goes in space till -> n-i-1
    for star -> it prints 2*i+1 as stars count is odd and starts from 1.
*/
void pattern7(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < 2*i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
    *********      [0,9,0]
     *******       [1,7,1]
      *****        [2,5,2]
       ***         [3,3,3]
        *          [4,1,4]
    here we can see that values of space and i are same so i used their relation
    for space -> i
    for star -> count is odd and must connect it somehow to the rows 
    so -> 2*(n-i-1)+1 -> 2*n-2*i-1 -> n-2*i+3 
*/
void pattern8(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < 2*(n - i) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *
    used two triangle pattern 6 & 7 for this.
*/
void pattern9(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < 2*i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < 2*(n - i) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
    *
    **
    ***
    ****
    ***
    **
    *
    for upper half triangle, star increases with i so both in relation
    for lower half triangle, started from n to n*2
    inner loop -> no of star decreases but no direct relation with i.
    so n*2 - i - 2
*/
void pattern10(int n)
{
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = n; i < n*2; i++)
    {
        for (int j = 0; j <= n*2-i-2; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
    reminder -> 1 -> odd else even for i
    value starts by checking the condition of row i.
    column prints the start value and then alternates it by: 1 - start
    so prints 010101.
*/
int start = 1;
void pattern11(int n)
{
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j <= i; j++)
        { 
            cout << start;
            start = 1 - start; // to alternate between 0 and 1
        }
        cout << endl;
    }
}

/*
    1        1
    12      21
    123    321
    1234  4321
    1234554321
    to print the space in the middle:
    column 0 to 2*(n - i)
    2nd triangle, printing decreasing like 321 so column must decrease for that.
    value of j and i is same for same column only flipped the range.
*/
void pattern12(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for(int j = 0; j < 2*(n - i); j++)
        {
            cout << " ";
        }
        for(int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

/*
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
*/
static int count = 1;
void pattern13(int n)
{
    for(int i =0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

/*
    A
    A B
    A B C
    A B C D
    A B C D E
*/
void pattern14(int n)
{
    for(int i =0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}

/*
    A B C D E
    A B C D
    A B C
    A B
    A
*/
void pattern15(int n)
{
    for(int i = 0; i  < n; i++)
    {
        for(int j = 0; j < (n - i); j++)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}

/*
    A
    B B
    C C C
    D D D D
    E E E E E
*/
void pattern16(int n)
{
    for(int i = 0; i  < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << char('A' + i) << " ";
        }
        cout << endl;
    }
}

/*
     A
    ABA
   ABCBA
  ABCDCBA
*/
void pattern17(int n)
{
    for(int i = 0; i < n; i++)
    {
        // space -> n-i-1
        for(int j = 0;  j < n-i-1; j++)
        {
            cout << " ";
        }
        // 1st half triangle -> incending order, j will be <= i
        for(int j = 0; j <= i; j++)
        {
            cout << char('A' + j);
        }
        // 2nd half portion -> decending order
        // j -> i - 1 as same is being used to decend the char
        for(int j = i-1; j >= 0; j--)
        {
            cout << char('A' + j);
        }
        cout << endl;
    }
}

/*
    E
    D E
    C D E
    B C D E
    A B C D E
    entering value in column = num of row so j <= i.
    to print char -> char('A' + (n - j - 1)) as it starts from E and then decends.
*/
void pattern18(int n)
{
    for(int i =0; i < n; i++)
    {
        for(int j = i; j >= 0; j--)
        {
            cout << char('A' + (n - j - 1)) << " ";
        }
        cout << endl;
    }
}

/*
            **********
            ****  ****
            ***    ***
            **      **
            *        *
            *        *
            **      **
            ***    ***
            ****  ****
            **********
two loop for rows and 3 for loop for column in each
1 loop -> 1st triangle
2 loop -> spaces
3 loop -> 2nd triangle
*/
void pattern19(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        for(int j = 0; j < 2*i; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for(int j = 0; j < 2*(n - i); j++)
        {
            cout << " ";
        }
        for(int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    * 
    used the above 2 row loops with interchanged position to each other and for 2nd loop, started i from 1 so can skip another big line.  
*/
void pattern20(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for(int j = 0; j < 2*(n - i); j++)
        {
            cout << " ";
        }
        for(int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        for(int j = 0; j < 2*i; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
    * * * * 

    *     *

    *     *

    * * * * 
*/
void pattern21(int n)
{
    for(int i = 0; i < n; i++)
    {
        if(i == 0 || i == n-1)
        {
            for(int j = 0; j < n; j++)
            {
                cout << "* ";
            }
        }else 
        { 
            cout << "* ";
            for(int j = 1; j < n - 1; j++)
            {
                cout << "  ";
            }
            cout << "*";
        }
        cout << endl;
        cout << endl;
    }
}

/*
                4 4 4 4 4 4 4 
                4 3 3 3 3 3 4 
                4 3 2 2 2 3 4 
                4 3 2 1 2 3 4 
                4 3 2 2 2 3 4 
                4 3 3 3 3 3 4 
                4 4 4 4 4 4 4 
    here loop for i and j is same.
    for value -> we have to find the min of all 4 sides and then subtract it from n to get the value.
*/
void pattern22(int n)
{
    for(int i = 0; i < 2*n - 1; i++)
    {
        for(int j = 0; j < 2*n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int bottom = (2*n - 2) - i;
            cout << n - min(min(top, bottom), min(left, right)) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
   //pattern1(n);
   //pattern2(n);
   //pattern3(n);
   //pattern4(n);
   //pattern5(n);
   //pattern6(n);
   //pattern7(n);
   //pattern8(n);
   //pattern9(n);
   //pattern10(n);
   //pattern11(n);
   //pattern12(n);
   //pattern13(n);
   //pattern14(n);
   //pattern15(n);
   //pattern16(n);
   //pattern17(n);
   //pattern18(n);
   //pattern19(n);
   //pattern20(n);
   //pattern21(n);
   //pattern22(n);
    return 0;
}