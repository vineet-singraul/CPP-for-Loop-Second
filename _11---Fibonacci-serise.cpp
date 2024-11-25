// Print Fibonacci series up to N terms using a for loop.
//✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️

#include <iostream>
using namespace std;
int main()
{
   int number ; 
   cout<<"Enter Number : ";
   cin>>number;

   int new_val = 0;
   int pre_val = 0;
   int his_val = 0;

   for(int i = 0; i <= number ; ++i)
   {
      pre_val = pre_val + i;
      new_val = --pre_val;
      his_val = pre_val + new_val;
      cout<<his_val<<" "<<" ";
   }
}

// 0 1 1 2 3 5 8 13 21 34