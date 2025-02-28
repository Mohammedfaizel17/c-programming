#include<stdio.h>
int main(){
    {
        int x=10, y=20;
        {
            printfn("x=%d ,y=%d \n",x,y);
            {
                int y=40;
                x++;
                y++;
                printf(" x=%d ,y=%d\n,"x,y)
            }
        }
        return 0;
    }
}