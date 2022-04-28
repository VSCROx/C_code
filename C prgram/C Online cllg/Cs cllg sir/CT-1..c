// Questions of CT-1 paper
#include<stdio.h>

// enum ABC{
//     l,n,m;    // Error in the [l,n,m;] -> there should not semicolon
// };

// int main(){
    //1.
    // int var = 0110;  // var = 72
    // var = var + 8;
    // printf("var=%d",var);

    //2.
    // int y=10;
    // if(y++ && y++!=10 && y++>11){
    //     printf("%d",y);
    // }
    // else{
    //     printf("%d",y);
    // }

    //3.Find the error in the given question
    // {
    //     enum ABC x;
    //     printf("%d",x);
    // }

    //4.
    // int a=2, b=1, c=2;
    // switch(a){
    //     case b:               // Error as case label does not reduce to an int constant 
    //     printf("You are in b ");
    //     break;
    //     case c:               // Error as case label does not reduce to an int constant 
    //     printf("You are in c ");
    //     break;
    //     default :
    //     printf("You are in default ");
    // }

    //5.
    // int a=0; 
    // a = 5>2 ? printf("4") : 3;   // first print the value of printf then a will assigned to the number = no. of digits ex.: if printf"1000" --> a will assigned to 4 (i.e no. of digits)
    // printf("%d",a);

    //6.
    // int a=5; 
	// printf("%d, %d, %d\n",a++,a++,++a); 
	/*Order of evaluation:  3 < -2 <-1	*/ 
    /* OUTPUT 
        7, 6, 8 
    */   
//     return 0;
// }

//7.***************************
// void main(){
//     char x=127;
//     x =x+1;
//     printf("%d",x);
// }
//Above explanation
// In c language maximum range of char is 127.
// If 127+1 = -128, it goes to negative value.
// so 125+10=135
// 135 = 127 + 8 = (127+1) + 7
// -128 + 7 = -121

//8. ***
// int main(){
//     int a =-1, b=1,c=0;
//     if(a=b){
//         printf("%d %d %d",a,b,c);
//     }
//     else{
//         printf("Hello");
//     }
//  Output:   1 1 0
// }

//9.
// enum demo{
//     a=1, b=4, c,d,e       // c =5, d=6, e =7
// };

// int main(){
//     printf("%d", b*c+e-d);          Output: 21
// }
// int a = 8.5;
//     printf("%d",a);
int main(){
    int x =1;
    int *ptr = &x;
    printf("%p",ptr);
}