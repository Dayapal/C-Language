
// #include<stdio.h>

// // function definition
// int main(){

//     return 0;
// }

// main();  // function call -> function invoke

// Variable : like container hota hai jaha ham data store krte hai

// #include<stdio.h>

// int main(){

//     int num;

//     int value;
//     printf("The address of num : %u\n",&num);
//     printf("The address of value : %u",&value);
// }

// varible rule (identifiers rules):

// #include<stdio.h>

// int main(){

//     // Rule 1: we can not use number in variable before variablename

//     // float 12price; // not ok

//     // Rule 2 : we can use number in variable after variablename.
//     // float price12; // ok

//     // Rule 3 : we can not add white space inside variable name

//     // int first number; // not ok

//     // Rule 4: we can not use special symbol in variable name except -> _,$

//     // int $first_number; // ok
//     // int @first_number; //Not ok

//     //  Rule 5 : variable are case-sensitive

//     // int num = 10;

//     // int Num = 20;

//     // printf("Num : %d\n",Num);
//     // printf("num : %d",num);

//     // Rule 6 : we can not use keywords as a variable

//     // int if; //not ok

//     // float char; // not ok
// }

// datatype :

// int -> 4bytes ->12, 34,-98 -> %d
// float -> 4bytes -> 12.36, -36985.69, -> %f
// double -> 8bytes -> 45896.36589745 ->%lf
// char -> 1 byte -> 'a' , 'b' -> %c
// string -> not exit in c programming -> char ch[]; char *ch; -> size is eual to number of charater - null character ('/0'); -> %s

// #include<stdio.h>

// int main(){
//     printf("Hello class! 54685\t");
//     printf("Hey, How are you?");
// }

// #include<stdio.h>

// int main(){
//     printf("Hello class! 54685");
//     printf("\nHey, How are you?");
// }

// #include<stdio.h>

// int main(){

//  int num = 10;

//  printf("The value of num is :%d",num);

// }

// #include<stdio.h>

// int main(){

//  int num = 10;

//  printf("The value of num is :%d\n",num);
//  float price = 100.25;

//  printf("The value of price is :%0.2f\n",price);
//  double PI = 3.14;

//  printf("The value of PI is :%0.3lf\n",PI);
//  char ch = 'a';

//  printf("The value of ch is :%c\n",ch);
//  char username[] = "Pawan Maurya";

//  printf("The value of username is :%s\n",username);
//  char *address = "Red and white";

//  printf("The value of username is :%s\n",address);

// }

// #include<stdio.h>

// int main(){

//     int num = 30;

//     num = 33;

//     printf("The value of num is : %d\n",num);
// }

// Methdo 1:

// #include<stdio.h>

// int main(){

//     const int NUM = 30;

//     // num = 33;

//     printf("The value of num is : %d\n",NUM);

// }

// Method 2:

// 1. micro (#define) method is used to create constant variable
// 2. No datatype used
// 3. jab bhee declared and insilization krte -> = , ; not used
// 4. variable name should be captal letter
// 5. datatype detucted according to value
// 6. it is global variable so it can be access anywhere in your program.

// #include<stdio.h>

// int main(){

//     const int NUM = 30;

//     // num = 33;

//     printf("The value of num is : %d\n",NUM);

// }

// #include<stdio.h>

// #define NUM 36.58  // gloabal variable

// int main(){

//     // NUM = 22.78; // not ok

//     printf("The value of num is : %0.2f\n",NUM);

// }

// #include<stdio.h>

// #define NUM 36.58  // gloabal variable

// int age = 30;  // gloabal variable

// int main(){

//     int age = 60; // local variable >  gloabal variable

//     printf("Your age : %d\n",age);

//     printf("The value of num is : %0.2f\n",NUM);

// }

// #include<stdio.h>

// #define NUM 36.58  // gloabal variable

// int age = 30;  // gloabal variable

// int main(){

//     // int age = 60; // local variable >  gloabal variable

//     printf("Your age : %d\n",age);

//     printf("The value of num is : %0.2f\n",NUM);

// }

// scanf() -> user se input -> formate specifier
// syntax -> scanf("%d",&variablename)

// #include <stdio.h>

// int main()
// {

//     int num;
//     printf("Enter num : ");
//     scanf("%d", &num);

//     printf("The value of num is :%d\n", num);
//     float price;

//     printf("Enter Price : ");
//     scanf("%f", &price);

//     printf("The value of price is :%0.2f\n", price);
//     double PI;
//     printf("Enter PI : ");
//     scanf("%lf", &PI);

//     printf("The value of PI is :%0.3lf\n", PI);
//     char ch;
//     printf("Enter ch : ");
//     scanf("%c",ch);

//     printf("The value of ch is :%c\n", ch);
// }


// #include <stdio.h>

// int main()
// {
//     char ch;
//     printf("Enter ch : ");
//     scanf("%c",&ch);

//     printf("The value of ch is :%c",ch);
// }



// #include <stdio.h>

// int main()
// {
//    char username[1];
//    printf(" Username size : %d\n",sizeof(username));
//    printf("Enter username :");

//    scanf("%[^\n]s",&username);

//     printf("The value of username is :%s",username);
    
// }



// #include <stdio.h>

// int main()
// {
//    char username[5];
//    printf(" Username size : %d\n",sizeof(username));
//    printf("Enter username :");

//    gets(username);

//     printf("The value of username is :%s",username);
    
// }


// #include <stdio.h>

// int main()
// {
//    char *username;
//    printf(" Username size : %d\n",sizeof(username));
//    printf("Enter username :");

//    gets(username);

//     printf("The value of username is :%s",username);
    
// }

// #include <stdio.h>

// int main()
// {
//    char *username;
//    printf(" Username size : %d\n",sizeof(username));
//    printf("Enter username :");

//  scanf("%[^\n]s",username);

//     printf("The value of username is :%s",username);
    
// }


// #include <stdio.h>

// int main()
// {
//    char *username;
//    printf(" Username size : %d\n",sizeof(username));
//    printf("Enter username :");

//  scanf("%[^\n]s",username);

//  puts(username);
    
// }



