#include<iostream.h>
#include<conio.h>
void primenumbers(int low,int high)
{   
      flag = 0;
      for(i = 2; i <= lbound/2; i++) {
         if(lbound % i == 0) {
            flag = 1;
            break;
         }
      }
      if (flag == 0) 
         cout<<lbound<<" ";// used for printing 
      lbound++;
   }
}
int main() {
   int l,h;
   cout<<"Enter the starting number";
   cin>>l;
   cout<<"Enter the ending number";
   cin>>h;
   primenumbers(l,h);
   return 0;
}

   
 