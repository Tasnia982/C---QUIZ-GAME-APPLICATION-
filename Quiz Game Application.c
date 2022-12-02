#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>
void mainmenu();
void help();
void start();
void quit();
void r_esult();
void instruction();
void Mathematics();
void Physics();
void Chemistry();
void C_program();
void General_Knowledge();
void last_menu();
int result=0;




COORD coord={0,0};
void gotoxy(int x ,int y){

  coord.X=x;
  coord.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}


void last_menu()

{
    system("cls");


    system("color F6");
    int op;
    //printf(" # Home Page  \t\t\t # Start Again \n\n");
    gotoxy(25,2);
    printf("Are you want to go Home Page or again play with another topic ?");
    gotoxy(30,4);
    printf("If you Want to go home page press 1 !!!");
    gotoxy(30,6);
    printf(" If you Want play again  press 2 !!!");
    gotoxy(30,4);
    printf("1.Home Page \t\t\t 2.Start Again ");
    gotoxy(30,8);
    printf("->");
    scanf("%d",&op);
    if(op==1)
    {
        system ("cls");
        mainmenu();
    }
    else if (op==2)
    {
        system ("cls");
        start();

    }
    else
    {
        printf("\n Wrong Option!!!!\n\n");

        printf(" Enter Right option \n\n");

        void start();

    }

}

void  Mathematics()
{
    system("cls");
    fflush(stdin);
      system("color F1");
    int cho,count = 0;
    int op;
    char name[30];
    gotoxy(30,0);
    printf("  Please enter your  nick name only - \n");
    gotoxy(30,2);
    printf("->");
    gets(name);
     gotoxy(30,4);
    printf(" Player name : %s ",name);

    system("cls");

    gotoxy(30,4);
    printf(" *******************Welcome %s in this Game ************************",name);


    char Answer1,Answer2,Answer3,Answer4,Answer5,Answer6,Answer7,Answer8,Answer9,Answer10;
    gotoxy(20,6);
    printf(" ***************************Welcome  In Mathematics  World  **************************\n\n");

   printf(" 1. For some integer n, the odd integer is represented in the form of ?\n ");
    printf(" a.n^2 \t\t b.2n \t\t c.2n+1 \t\t d.2n-1 \t\t \n");
    printf("->");
    scanf("%s",&Answer1);
    if(Answer1!='c')
    {
        printf(" Wrong!!\n\n");
        printf("Right is -> c.\n\n");

    }
    else
       {
    printf("Congratulation !! Right **\n\n");
    count++;
       }
    printf(" 2.HCF of 26 and 91 is ?\n ");
    printf(" a.12 \t\t b.13 \t\t c.20 \t\t d.35 \t\t \n");
    scanf("%s",&Answer2);
    printf("->");
    if(Answer2!='b')
    {
        printf(" Wrong!!\n\n");
        printf("Right is -> b.\n\n");
         printf("Explanation: The prime factorial of 26 and 91 is;\n 26 = 2 x 13 \n 91 = 7 x 13 \n Hence, HCF (26, 91) = 13");
    }
    else
    {
   printf("Congratulation !! Right **\n\n");
     count++;
   }
   printf(" 3.The mean of the data: 4, 10, 5, 9, 12 is ? \n ");
    printf(" a.20 \t\t b.4 \t\t c.10 \t\t d.8 \t\t \n");
    scanf("%s",&Answer3);
    printf("->");
    if(Answer3!='d')
    {
        printf(" Wrong!!\n\n");
        printf("Right is -> d.\n\n");
          printf("Explanation: mean = (4 + 10 + 5 + 9 + 12)/5 = 40/5 = 8\n");
    }
    else
    {
    printf("Congratulation !! Right **\n\n");
      count++;
    }
    printf(" 4.Construction of a cumulative frequency table is useful in determining the ?\n ");
    printf(" a.mean \t\t b.mode \t\t c.median \t\t d.none \t\t \n");
    scanf("%s",&Answer4);
    printf("->");
    if(Answer4!='c')
    {
        printf(" Wrong!!\n\n");
        printf("Right is -> c.\n\n");
    }
    else{
    printf("Congratulation !! Right **\n\n");
      count++;
      }
    printf("5.If x1, x2, x3,….., xn are the observations of a given data. Then the mean of the observations will be ?\n ");
    printf(" a.Sum of observations/number of observations\t\t b.Sum of observations/Total number of observations\n");
    printf("c.Total number of observations/Sum of observations \t\t d.None of the above\t\t \n");
    scanf("%s",&Answer5);
    printf("->");
    if(Answer5!='b')
    {
     printf(" Wrong!!\n\n");
     printf("Right is -> b.\n\n");
     }
    else{
    printf("Congratulation !! Right **\n\n");
      count++;}
    printf("6.A circle has a number of tangents equal to?\n ");
    printf(" a.2 \t\t b.6 \t\t c.4 \t\t d. Infinite \t\t \n");
    scanf("%s",&Answer6);
    printf("->");
    if(Answer6!='d')
    {
        printf(" Wrong!!\n\n");
        printf("Right is -> d.\n\n");

    }
    else{
        printf("Congratulation !! Right **\n");
          count++;
          }
    printf("7.A tangent intersects the circle at ?\n ");
    printf(" a. One point \t\t b.three point \t\t c.many \t\t d.none avobe \t\t \n");
    scanf("%s",&Answer7);
    printf("->");
    if(Answer7!='a')
    {
        printf(" Wrong!!\n\n");
        printf("Right is -> a.\n\n");
    }
    else{
        printf("Congratulation !! Right **\n\n");
          count++;
    }
    printf(" 8.What is the value of π?\n ");
    printf(" a.3.1416 \t\t b.3.00 \t\t c.2.992 \t\t d.1.22 \t\t \n");
    scanf("%s",&Answer8);
    printf("->");
    if(Answer8!='b')
    {
        printf(" Wrong!!\n\n");
        printf("Right is -> b.\n\n");

    }
    else{
        printf("Congratulation !! Right **\n\n");
          count++;
    }
         printf(" 9.How many Number in number system ?\n ");
    printf(" a.7 \t\t b.9 \t\t c.10 \t\t d.15 \t\t \n");
    scanf("%s",&Answer9);
    printf("->");
    if(Answer9!='b')
    {
        printf(" Wrong!!\n\n");
        printf("Right is -> b.\n\n");

    }
    else{
        printf("Congratulation !! Right **\n");
          count++;
        }
         printf(" 10.how to define algebra math?\n ");
    printf(" a.7 \t\t b.9 \t\t c.1 \t\t d.a,b\t\t \n");
    scanf("%s",&Answer10);
    printf("->");
    if(Answer10!='d')
    {
        printf(" Wrong!!\n");
        printf("Right is -> d.\n\n");

    }
    else{
        printf("Congratulation !! Right **\n");
          count++;

        }
getch();

    system("cls");

  gotoxy(30,0);
   printf(" ********************************** WELCOME *********************************************");

    result = count;


  char str[50] = "Your Result is: ";

        //open file sample.txt in write mode
        FILE *fptr = fopen("D://Quiz Game.txt", "w");
        if (fptr == NULL)
        {
            printf("Could not open file");
            return 0;
        }

            fprintf(fptr,"%s%d\n", str,result);

        fclose(fptr);


    r_esult();


    getch();



    fflush(stdin);


}









void  Physics()
{



    system("cls");
    fflush(stdin);
     system("color F1");
    int cho,count = 0,result;
    int op;
    char name[30];
    gotoxy(30,0);
    printf(" Please enter your  nick name only - ");
    gotoxy(30,2);
    printf("->");
    gets(name);
    system("cls");

    gotoxy(30,4);
    printf(" **************Welcome %s in this Game **************************",name);


    char Answer1,Answer2,Answer3,Answer4,Answer5,Answer6,Answer7,Answer8,Answer9,Answer10;
    gotoxy(25,6);
    printf(" ***************************Welcome  In Physics  World  **************************\n\n");

   printf(" 1.When a ball is tossed straight up, it momentarily comes to a stop at the top of its path. Is it in equilibrium during this brief moment ?\n ");
    printf(" a.No, because it is weightless.\t\t b.Yes, because there are no net forces acting on it.\t\t c.No, because its motion is changing.\t\t d.Yes, because it is not moving. \t\t \n");
    printf("->");
    scanf("%s",&Answer1);
    if(Answer1!='c')
    {
       printf(" Wrong!!\n");
       printf("Right is -> c.\n\n");
    }

    else
    {
        printf("\n Congratulation !! Right **\n\n");
        count++;
    }


    printf(" 2.A hockey puck slides across the ice at a constant speed. Is it in equilibrium?\n ");
    printf(" a.There is no force acting on the book.\t\t b.No, because it is moving\t\t c.No, because it has inertia. \t\t d.Yes, because there are no net forces acting on it.\t\t \n");
    printf("->");
    scanf("%s",&Answer2);
    if(Answer2!='d')
    {
       printf(" Wrong!!\n");
       printf("Right is -> d.\n\n");
    }

    else
    {
        printf("\n Congratulation !! Right **\n\n");
        count++;

    }


    printf(" 3.A book is at rest on top of a table. Which of the following is correct?\n ");
    printf(" a.No, because friction is slowing it down.\t\t b. The book is in equilibrium.\t\t c.The inertia of the book is equal to the inertia of the table.\t\t d.There is no force acting on the table.\t\t \n");
    printf("->");
    scanf("%s",&Answer3);
    if(Answer3!='b')
    {
       printf(" Wrong!!\n");
       printf("Right is -> b.\n\n");
    }
    else
    {
        printf("Congratulation !! Right **\n\n");
        count++;

    }


    printf(" 4.The total momentum before a collision is equal to the total momentum after the collision.\n ");
    printf(" a.This is true only for collisions between objects moving in the same direction.\t\t b.This is true for elastic collisions but not for inelastic collisions.\t\t c.This is true for any collision.\t\t d.. This is not true for any collisions.\t\t \n");
    printf("->");
    scanf("%s",&Answer4);
    if(Answer4!='c')
    {
       printf(" Wrong!!\n");
       printf("Right is -> c.\n\n");
    }
    else
    {


        printf("Congratulation !! Right **\n\n");
        count++;

    }

     printf(" 5.An elastic collision is one in which\n ?");
    printf(" a.no lasting deformation of either object occurs.\t\t b.both of the two colliding objects are made of a rubbery material.\t\t c.lasting deformation occurs for both of the colliding objects. \t\t d.asting deformation occurs for one of the two colliding objects\t\t \n");
    printf("->");
    scanf("%s",&Answer5);
    if(Answer5!='a')
    {
       printf(" Wrong!!\n");
       printf("Right is -> a.\n\n");
    }

    else
    {

        printf("Congratulation !! Right **\n\n");
        count++;
    }

    printf(" 6.An inelastic collision is one in which?\n ");
    printf(" a.both of the two colliding objects are made of a very rigid material\t\t b.both of the two colliding objects are made of a rubbery material.\t\t c.the two colliding objects deform, generate heat, or stick together.\t\t d.no lasting deformation of either object occurs\t\t \n");
    printf("->");
    scanf("%s",&Answer6);
    if(Answer6!='c')
    {
       printf(" Wrong!!\n");
       printf("Right is -> c.\n\n");
    }
    else
    {

        printf("\n Congratulation !! Right **\n\n");
        count++;

    }


   printf(" 7.Which of these is the most accurate statement about momentum in a collision between two objects?\n ");
    printf(" a.Momentum is only conserved if the colliding objects bounce apart.\t\t b. Momentum is only conserved if the collision is elastic.\t\t c.Momentum is never conserved.\t\t d.Momentum is always conserved.\t\t \n");
    printf("->");
    scanf("%s",&Answer7);
    if(Answer7!='d')
    {
       printf(" Wrong!!\n");
       printf("Right is -> d.\n\n");
    }

    else
    {

        printf("Congratulation !! Right **\n\n");
        count++;
    }


    printf(" 8.The net charge of an atom is determined by the number of _____ it has.\n");
    printf(" a.neutrons \t\t b.protons and electrons \t\t c.. protons \t\t d.electrons and neutrons\t\t \n");
    printf("->");
    scanf("%s",&Answer8);
    if(Answer8!='b')
    {
       printf(" Wrong!!\n");
       printf("Right is -> b.\n\n");
    }

    else
    {

        printf("Congratulation !! Right **\n\n");
        count++;
    }


    printf(" 9.In general, when a solid is cooled,\n ");
    printf(" a.it will contract at a lesser rate than a liquid.\t\t b.it will expand at a greater rate than a liquid.\t\t c.it will neither expand nor contract.\t\t d.it will contract at a greater rate than a liquid\t\t \n");
    printf("->");
    scanf("%s",&Answer9);
    if(Answer9!='a')
    {
       printf(" Wrong!!\n");
       printf("Right is -> a.\n\n");
    }

    else
    {
        printf("Congratulation !! Right **\n\n");

    }

    printf(" 10.A device that stores separated electrical charges is called ____ .?\n ");
    printf(" a.a resistor.\t\t b.a conductor.\t\t c.a wire. \t\t d.a capacitor.\t\t \n");
    printf("->");
    scanf("%s",&Answer10);
    if(Answer10!='d')
    {
       printf(" Wrong!!\n");
       printf("Right is -> d.\n\n");
    }

    else
    {
        printf("Congratulation !! Right **\n\n");
        count++;
    }
    getch();

    system("cls");

   gotoxy(25,4);
   printf(" ********************************** WELCOME *********************************************");

    result=count;

     char str[50] = "Your Result is: ";

        //open file sample.txt in write mode
        FILE *fptr = fopen("D://Quiz Game.txt", "w");
        if (fptr == NULL)
        {
            printf("Could not open file");
            return 0;
        }

            fprintf(fptr,"%s%d\n", str,result);

        fclose(fptr);


    r_esult();


    getch();


    fflush(stdin);





}





void Chemistry()
{

    system("cls");
    fflush(stdin);
     system("color F1");
    int cho,count = 0,result;
    int op;
    char name[30];
    gotoxy(30,2);
    printf("  Please enter your  nick name only - ");
    gotoxy(30,4);
    printf("->");
    gets(name);

    system("cls");

     gotoxy(30,2);
    printf(" **************Welcome %s in this Game **************************",name);


    char Answer1,Answer2,Answer3,Answer4,Answer5,Answer6,Answer7,Answer8,Answer9,Answer10;
    gotoxy(30,4);
    printf(" ***************************Welcome  In Chemistry  World  **************************\n\n");
    printf("  1. The nucleus of an atom consists of -- \n ");
    printf(" a. electrons and neutrons \t\t b.electrons and protons \t\t c. protons and neutrons \t\t d.All of the above \t\t \n");
    printf("->");
    scanf("%s",&Answer1);
    if(Answer1!='c')
    {
        printf(" Wrong!!\n");
        printf("Right is -> c.\n\n");

    }
    else
    {
        printf("\n Congratulation !! Right **\n\n");
        count++;
    }

    printf(" \n 2. The number of moles of solute present in 1 kg of a solvent is called its -- \n ");
    printf(" \n a.molality \t\t b.molarity \t\t c.normality \t\t d.formality \t\t \n");
    printf("->");
    scanf("%s",&Answer2);
    if(Answer2!='a')
    {
        printf(" \n Wrong!!\n");
        printf("Right is -> a.\n\n");

    }
    else
    {
        printf("\n Congratulation !! Right **\n\n");
        count++;

    }

    printf(" \n \n 3.The number of waves in n x 10th Bohr's orbit are \n ");
    printf(" a.n2 \t\t b.n \t\t c.n-2 \t\t d.n3 \t\t \n");
    printf("->");
    scanf("%s",&Answer3);
    if(Answer3!='b')
    {
        printf(" Wrong!!\n");
        printf("Right is -> b.\n\n");
        printf(" \n Explanation: mean = (4 + 10 + 5 + 9 + 12)/5 = 40/5 = 8\n\n\n");
    }
    else
    {
        printf("Congratulation !! Right **\n\n");
        count++;

    }

    printf(" \n\n 4.The items amenable to detection by soft x-rays are-- \n ");
    printf(" a.contrabands \t\t b.lead in bullets \t\t c. narcotics \t\t d.genuine coins from counterfeit coins \t\t \n");
    printf("->");
    scanf("%s",&Answer4);
    if(Answer4!='d')
    {
        printf(" Wrong!!\n");
        printf("Right is -> d.\n\n");
    }
    else
    {
        printf("Congratulation !! Right **\n\n");
        count++;

    }

    printf("\n 5.The mass number of a nucleus is = \n ");
    printf(" a.Sum of observations/number of observations\t\t b.the sum of the number of protons and neutrons present in the nucleus\n");
    printf("c.Total number of observations/Sum of observations \t\t d.None of the above\t\t \n");
    printf("->");
    scanf("%s",&Answer5);
    if(Answer5!='b')
    {
        printf(" Wrong!!\n");
        printf("Right is -> b.\n\n");
    }
    else
    {

        printf("Congratulation !! Right **\n\n");
        count++;
    }

    printf("\n 6.The gas used in the manufacture of vanaspati from vegetable oil is -- \n ");

    printf("\n  a.hydrogen \t\t b. oxygen\t\t c.nitrogen \t\t d.carbon dioxide \t\t \n");
      printf("->");
    scanf("%s",&Answer6);
    if(Answer6!='a')
    {
        printf(" Wrong!!\n");
        printf("Right is -> a.\n\n");

    }
    else
    {

        printf("\n Congratulation !! Right **\n\n");
        count++;

    }

    printf("7.The ionic radii of N3-, O2-, F- and Na+ follows the order\n ");

    printf(" \n a.N3 -> O2 -> F -> Na+ \t\t b. N3 -> Na+ -> O2 -> F-\t\t c.Na+ -> O2 -> N3 -> F- \t\t d.none above \t\t \n");
     printf("->");
    scanf("%s",&Answer7);
    if(Answer7!='a')
    {
        printf(" Wrong!!\n");
        printf("Right is -> c.\n\n");
    }
    else
    {

        printf("Congratulation !! Right **\n\n");
        count++;
    }

    printf(" 8.The first metal used by man was \n ");

    printf(" a.iron \t\t b.copper \t\t c.gold \t\t d.bronze \t\t \n");
    printf("->");
    scanf("%s",&Answer8);
    if(Answer8!='b')
    {
        printf(" Wrong!!\n");
        printf("Right is -> b.\n\n");

    }
    else
    {

        printf("Congratulation !! Right **\n\n");
        count++;
    }


    printf(" 9.The hydronium ion is -- \n ");

    printf(" a.H+ \t\t b.HO - \t\t c.H2+ \t\t d. H3O+ \t\t \n");
      printf("->");
    scanf("%s",&Answer9);

    if(Answer9!='d')
    {
        printf(" Wrong!!\n");
        printf("Right is -> d.\n\n");

    }
    else
    {
        printf("Congratulation !! Right **\n\n");
        count++;

    }

    printf("10.The most electropositive elements among the following is \n ");

    printf(" a.Na \t\t b.Ca \t\t c.K \t\t d.Cs \t\t \n");
    printf("->");
    scanf("%s",&Answer10);
    if(Answer10!='d')
    {
        printf(" Wrong!!\n");
        printf("Right is -> d.\n\n");

    }
    else
    {
        printf("Congratulation !! Right **\n\n");
        count++;
    }

     getch();
    system("cls");

  gotoxy(30,4);
   printf(" ********************************** WELCOME *********************************************");

    result=count;

   char str[50] = "Your Result is: ";

        //open file sample.txt in write mode
        FILE *fptr = fopen("D://Quiz Game.txt", "w");
        if (fptr == NULL)
        {
            printf("Could not open file");
            return 0;
        }

            fprintf(fptr,"%s%d\n", str,result);

        fclose(fptr);


    r_esult();


    getch();


    fflush(stdin);


}




void C_program()
{


    system("cls");
    fflush(stdin);
     system("color F1");
    int cho,count = 0,result;
    int op;
    char name[30];
    gotoxy(30,0);
    printf("  Please enter your  nick name only - \n");
    gets(name);


    system("cls");

    gotoxy(30,4);
    printf(" **************Welcome %s in this Game **************************",name);


    char Answer1,Answer2,Answer3,Answer4,Answer5,Answer6,Answer7,Answer8,Answer9,Answer10;
    gotoxy(25,6);
    printf(" ***************************Welcome  In C-Program  World  **************************\n\n");
    printf("1.Who is the father of C language? \n ");
    printf(" \n a.Steve Jobs \t\t b.James Gosling \t\t c.Dennis Ritchie \t\t d. Rasmus Lerdorf \t\t \n");
    printf("->");
    scanf("%s",&Answer1);
    if(Answer1!='c')
    {
        printf(" Wrong!!\n");
        printf("Right is -> c.\n\n");

    }
    else
    {
        printf("\n Congratulation !! Right **\n\n");

        count++;
    }

    printf("2. Which of the following is not a valid C variable name? \n ");
    printf(" \n a.int number; \t\t b.float rate; \t\t c.int variable_count; \t\t d.int $main; \t\t \n");
     printf("->");
    scanf("%s",&Answer2);
    if(Answer2!='d')
    {
        printf(" \n Wrong!!\n");
        printf("Right is -> d.\n\n");
        printf(" \n Explanation: The prime factorial of 26 and 91 is;\n 26 = 2 x 13 \n 91 = 7 x 13 \n Hence, HCF (26, 91) = 13 \n ");
    }
    else
    {
        printf("\n Congratulation !! Right **\n\n");
        count++;

    }

    printf(" 3.All keywords in C are in ____________  \n ");
    printf(" a.LowerCase letters \t\t b. UpperCase letters \t\t c. CamelCase letters \t\t d.None of the mentioned \t\t \n");
     printf("->");
    scanf("%s",&Answer3);
    if(Answer3!='a')
    {
        printf(" Wrong!!\n");
        printf("Right is -> a.\n\n");


    }
    else
    {
        printf("Congratulation !! Right **\n\n");
        count++;

    }

    printf(" 4.Which is valid C expression? \n ");
    printf(" a.int my_num = 100,000; \t\t b.int my_num = 100000; \t\t c. int my num = 1000;\t\t d.int $my_num = 10000; \t\t \n");
     printf("->");
    scanf("%s",&Answer4);
    if(Answer4!='b')
    {
        printf(" Wrong!!\n");
        printf("Right is -> b.\n\n");
    }
    else
    {


        printf("Congratulation !! Right **\n\n");
        count++;

    }

    printf("\n 5.What is and oparators ?\n ");
    printf(" a.|| \t\t b.&& \n");

    printf("c."" \t\t d.% \t\t \n");
     printf("->");
    scanf("%s",&Answer5);
    if(Answer5!='b')
    {
        printf(" Wrong!!\n");
        printf("Right is -> b.\n\n");
    }
    else
    {

        printf("Congratulation !! Right **\n\n");
        count++;
    }

    printf("6.  Which of the following cannot be a variable name in C? \n ");

    printf("\n  a.volatile \t\t b. true \t\t c.friend \t\t d. export \t\t \n");
     printf("->");
    scanf("%s",&Answer6);
    if(Answer6!='a')
    {
        printf(" Wrong!!\n");
        printf("Right is -> a.\n\n");

    }
    else
    {

        printf("\n Congratulation !! Right **\n\n");
        count++;

    }

    printf("7. Which keyword is used to prevent any changes in the variable within a C program? \n ");

    printf(" \n a. immutable \t\t b.mutable \t\t c. const \t\t d.volatile \t\t \n");
     printf("->");
    scanf("%s",&Answer7);
    if(Answer7!='c')
    {
        printf(" Wrong!!\n");
        printf("Right is -> c.\n\n");
    }
    else
    {

        printf("Congratulation !! Right **\n");
        count++;
    }

    printf(" 8.What is an example of iteration in C? \n ");

    printf(" a.for \t\t b. while \t\t c.do-while \t\t d. all of the mentioned \t\t \n");
     printf("->");
    scanf("%s",&Answer8);
    if(Answer8!='d')
    {
        printf(" Wrong!!\n");
        printf("Right is -> d.\n\n");

    }
    else
    {

        printf("Congratulation !! Right **\n\n");
        count++;
    }


    printf(" 9. Functions can return enumeration constants in C? \n ");

    printf(" a. true \t\t b.false \t\t c.depends on the compiler \t\t d. depends on the standard \t\t \n");
     printf("->");

    scanf("%s",&Answer9);

    if(Answer9!='a')
    {
        printf(" Wrong!!\n");
        printf("Right is -> a.\n\n");

    }
    else
    {
        printf("Congratulation !! Right **\n\n");

    }

    printf("10.Functions in C Language are always _________ \n ");

    printf(" a. Internal \t\t b.External \t\t c.Both Internal and External \t\t d.External and Internal are not valid terms for functions \t\t \n");
     printf("->");
    scanf("%s",&Answer10);
    if(Answer10!='b')
    {
        printf(" Wrong!!\n");
        printf("Right is -> b.\n\n");

    }
    else
    {
        printf("Congratulation !! Right **\n\n");
        count++;
    }

    system("cls");

   gotoxy(25,0);
   printf(" ********************************** WELCOME *********************************************");

    result=count;

     char str[50] = "Your Result is: ";

        //open file sample.txt in write mode
        FILE *fptr = fopen("D://Quiz Game.txt", "w");
        if (fptr == NULL)
        {
            printf("Could not open file");
            return 0;
        }

            fprintf(fptr,"%s%d\n", str,result);

        fclose(fptr);


    r_esult();


    getch();


    fflush(stdin);



}


void General_Knowledge()
{

    system("cls");
    fflush(stdin);
     system("color F1");
    int cho,count = 0,result;
    int op;
    char name[30];
    gotoxy(30,2);
    printf(" Please enter your  nick name only :- ");
    gets(name);

    system("cls");
    gotoxy(30,2);
    printf(" ********************Welcome %s in this Game **************************",name);


    char Answer1,Answer2,Answer3,Answer4,Answer5,Answer6,Answer7,Answer8,Answer9,Answer10;
    gotoxy(25,4);
    printf(" ***************************Welcome  In Mathematics  World  **************************");
    printf("\n\n\ 1.Grand Central Terminal, Park Avenue, New York is the world's-- \n ");
    printf(" \n a.largest railway station \t\t b.highest railway station \t\t c. longest railway station\t\t d.None of the above \t\t \n");
    printf("->");
    scanf("%s",&Answer1);
    if(Answer1!='a')
    {
        printf(" Wrong!!\n");
        printf("Right is -> a\n\n");

    }
    else
    {
        printf("\n Congratulation !! Right **\n\n");

        count++;
    }

    printf(" \n 2.Entomology is the science that studies -- \n ");
    printf(" \n a.Behavior of human beings \t\t b.Insects \t\t c.The origin and history of technical and scientific terms \t\t d.None \t\t \n");
    printf("->");
    scanf("%s",&Answer2);
    if(Answer2!='b')
    {
        printf(" \n Wrong!!\n");
        printf("Right is -> b\n\n");


    }
    else
    {
        printf("\n Congratulation !! Right **\n\n");
        count++;

    }

    printf(" \n \n 3.Garampani sanctuary is located at -  \n ");
    printf(" a. Junagarh, Gujarat \t\t b.Diphu, Assam \t\t c.Kohima, Nagaland \t\t d.Gangtok, Sikkim \t\t \n");
    printf("->");
    scanf("%s",&Answer3);
    if(Answer3!='b')
    {
        printf(" Wrong!!\n");
         printf("Right is -> b\n\n");

    }
    else
    {
        printf("Congratulation !! Right **\n\n");
        count++;

    }

    printf(" 4.Hitler party which came into power in 1933 is known as --  \n ");
    printf(" a.Labour Party \t\t b.Nazi Party \t\t c.Ku-Klux-Klan \t\t d.Democratic Party \t\t \n");
    printf("->");
    scanf("%s",&Answer4);
    if(Answer4!='b')
    {
        printf(" Wrong!!\n");
         printf("Right is -> b\n\n");
    }
    else
    {


        printf("Congratulation !! Right **\n\n");
        count++;

    }

    printf("\n 5.The chief constituent of gobar gas is -  \n ");
    printf(" a.ethane \t\t b.methane \n");
    printf("c.hydrogen \t\t d.carbon dioxide \t\t \n");
    printf("->");
    scanf("%s",&Answer5);
    if(Answer5!='b')
    {
        printf(" Wrong!!\n");
         printf("Right is -> b\n\n");
    }
    else
    {

        printf("Congratulation !! Right **\n\n");
        count++;
    }

    printf("\n 6.The Enron project is a -- \n ");
    printf("\n  a.hydro-electric project \t\t b.thermal power project \t\t c. atomic power project \t\t d.gas-fired power project \t\t \n");
     printf("->");
    scanf("%s",&Answer6);
    if(Answer6!='d')
    {
        printf(" Wrong!!\n");
         printf("Right is -> d\n\n");

    }
    else
    {

        printf("\n Congratulation !! Right **\n\n");
        count++;

    }

    printf("\n 7.The first chairman of the Africa fund committee was \n ");
    printf(" \n a. Late Rajiv Gandhi \t\t b.Late Indira Gandhi \t\t c. Late Pt. Jawaharlal Nehru\t\t d.None of the above \t\t \n");
    printf("->");
    scanf("%s",&Answer7);
    if(Answer7!='a')
    {
        printf(" Wrong!!\n");
         printf("Right is -> a\n\n");
    }
    else
    {

        printf("Congratulation !! Right **\n\n");
        count++;
    }

    printf(" 8.The first women to climb Mt. Everest was ? \n ");
    printf(" a.Junko Taibei \t\t b.Karoline mikkelson \t\t c.Valentina Tereshkova \t\t d. None of the above\t\t \n");
    printf("->");
    scanf("%s",&Answer8);
    if(Answer8!='a')
    {
        printf(" Wrong!!\n");
         printf("Right is -> a\n\n");

    }
    else
    {

        printf("Congratulation !! Right **\n\n");
        count++;
    }


    printf(" 9.The common pesticides which are in use consist of -- \n ");
    printf(" a.PCBs \t\t b.organochlorines \t\t c.olefins \t\t d.heterocyclic compounds \t\t \n");
    printf("->");
    scanf("%s",&Answer9);

    if(Answer9!='c')
    {
        printf(" Wrong!!\n");
         printf("Right is -> c\n\n");

    }
    else
    {
        printf("Congratulation !! Right **\n\n");

    }

    printf(" \n 10.The first Asian Games were held in 1951 at -- \n ");
    printf(" a.New Delhi, India \t\t b.Manila, Philippines \t\t c.Tokyo, Japan \t\t d.Jakarata, Indonesia \t\t \n");
     printf("->");
    scanf("%s",&Answer10);
    if(Answer10!='a')
    {
        printf(" Wrong!!\n");
         printf("Right is -> a\n\n");

    }
    else
    {
        printf("Congratulation !! Right **\n");
        count++;
    }

    system("cls");

    gotoxy(25,10);
   printf(" ********************************** WELCOME *********************************************");

    result=count;

     char str[50] = "Your Result is: ";

        //open file sample.txt in write mode
        FILE *fptr = fopen("D://Quiz Game.txt", "w");
        if (fptr == NULL)
        {
            printf("Could not open file");
            return 0;
        }

            fprintf(fptr,"%s%d\n", str,result);

        fclose(fptr);


    r_esult();


    getch();



    fflush(stdin);





}


void start()
{

    system("cls");
    fflush(stdin);
    system("color F3");
    int cho;
    char name[30];
     gotoxy(30,0);
    printf("  Please enter your  nick name only - \n");
     gotoxy(30,2);
     printf("->");
    gets(name);
     gotoxy(30,4);
    printf(" Player name : %s \n\n",name);
    system("cls");
     gotoxy(30,6);
    printf(" **************Welcome %s in this Game **************************\n",name);
     gotoxy(30,8);
    printf(" ****************Choice  Your Topic ***************\n");
     gotoxy(30,10);
    printf("1.Mathematics ");
     gotoxy(30,12);
    printf("2.Physics ");
    gotoxy(30,14);
    printf("3.Chemistry");
    gotoxy(30,16);
    printf("4.C program");
    gotoxy(30,18);
    printf("5.General Knowledge");
    gotoxy(30,20);
    printf("6.Home page");
    gotoxy(30,22);
    printf("->");
    scanf("%d",&cho);

    switch (cho)
    {
    case 1 :
        Mathematics();
        break;
    case 2 :
        Physics();
        break;
    case 3 :
        Chemistry();
        break;
    case 4 :
        C_program();
        break;
    case 5 :
        General_Knowledge();
        break;
    case 6 :
         mainmenu();
         break;
    default:
        gotoxy(30,26);
        printf("Wrong Input");
        gotoxy(30,28);
        printf("Enter any key");
        getch();
        start();
    }
}

void help()
{
    system ("cls");
     system("color F2");
    int option,op;
    char a[100];
    gotoxy(25,0);
    printf("----------------  How can we help You? --------------");
     gotoxy(30,5);
    printf(" 1.Want to know how you use it ?");
     gotoxy(30,8);
    printf(" 2.Are You want to Give some suggestion ?");
     gotoxy(35,10);
    printf(" Please Choice your option !!");
     gotoxy(45,12);
     printf("->");
     gotoxy(47,12);
   scanf("%d",&option);
     gotoxy(24,15);
      printf("***************************************************************\n");

    if(option== 1 || option== 2)
    {
        switch (option)
        {
        case 1 :
            system("cls");
             gotoxy(25,0);
            printf(" Want to know how you use it ?");
            gotoxy(25,2);
            printf(" If you want to play this game . Then You must choice S to Start game .");
            gotoxy(25,4);
            printf(" Then you get some topic . Choose Your topic You want to play.");
             gotoxy(25,6);
            printf(" Then ans the all question . Then you find your result  and base your result you get some suggestion .");
            gotoxy(25,8);

            printf(" After playing  any topic then you also check your marks  by home page though  Result option .");
            gotoxy(30,12);
            printf(" Please enter any key to go next page !!!!!!!!!!!!!!!!!!!");
            getch();
            system("cls");

            gotoxy(30,0);
            printf("Are you want to go Home Page ?");
            gotoxy(30,2);
            printf(" 1.Yes \t\t\t 2.No");
            gotoxy(35,4);
            printf("->");
            gotoxy(35,5);
            scanf("%d",&op);
            if(op==1)
            {
                system ("cls");
                mainmenu();
            }
            else if(op==2)
            {
                system ("cls");
                help();
            }
            else
            {
                gotoxy(30,8);
                printf(" please choice valid option!!! ");
            }
            break;
        case 2 :
            system("cls");
             gotoxy(30,0);
            printf(" Are You want to Give some suggestion ? ");
             gotoxy(30,2);
            printf(" Please Say us : ");
            scanf("%s",a);
             gotoxy(35,4);
            printf("Thank You for your feedback !!!!");
             gotoxy(30,6);
            printf("Please  enter any key to go next page !!!!");

            getch();
            system("cls");
             gotoxy(30,0);
            printf("Are you want to go Home Page ?");
             gotoxy(30,2);
            printf(" 1.Yes \t\t\t 2.No");
             gotoxy(35,4);
             printf("->");
            scanf("%d",&op);
            if(op==1)
            {
                system ("cls");
                mainmenu();
            }
            else if(op==2)
            {
                system ("cls");
                help();
            }
            else
            {
                 gotoxy(35,6);
                printf(" please choice valid option!!! ");
                help();
            }
            break;
        }
    }
    else{
        system("cls");
         gotoxy(30,5);
        printf(" Please Choice Right Option !!");
        getch();
        help();
        }
        //      /// /    decoration finished/////////
 }
void quit()
{

    system("cls");
    fflush(stdin);
    system("color F4");
    int op;
    gotoxy(30,2);
    printf(" Are you want to exit this page ?\n");
    gotoxy(30,4);
    printf(" 1.Yes \t\t\t 2.No\n\n");
    gotoxy(35,6);
    printf("->");
    scanf("%d",&op);
    if(op==1)
    {
        system ("cls");
        gotoxy(35,10);
        printf(" Enter any key to exit!!-->");
    }
    else if(op==2)
    {
        system ("cls");

        mainmenu();
    }
    else
    {
        gotoxy(30,10);
        printf(" please choice valid option!!! ");
        getch();
        quit();
    }
}
void instruction()
{

    system("cls");
    fflush(stdin);
    system("color F3");
    int op;
    gotoxy(20,0);
    printf(" ******************Welcome in our quiz Game**********************");
    gotoxy(20,2);
    printf("1.If you want to play this game First of all please Enter your name.");
    gotoxy(20,4);
    printf("2.You find some topic . Select your topic you want to play .");
    gotoxy(20,6);
    printf("3.After select this topic you find some question . ");
    gotoxy(20,8);
    printf("4.Solve this question . Here no negative mark include.");
    gotoxy(20,10);
    printf("5.After solve all question you can check Your marks.");
    gotoxy(20,12);
    printf("6.This process you can jazz your knowledge.");
    gotoxy(30,14);
    printf("Are you want to play now ?");
    gotoxy(30,16);
    printf("1.Yes  \t\t\t 2.No ");
    gotoxy(30,18);
    printf("->");    //finished
    scanf("%d",&op);
    if(op==1)
    {
        start();
    }
    else
    {
        system("cls");
       // gotoxy(30,10);
       // printf("Enter any key to exit --->>");
        quit();
    }
}
void r_esult(){


  system("cls");
FILE * file_pointer;
        char c;
     gotoxy(32,10);
       printf("-----------Now Your  Quiz Game result-------------- ");

        file_pointer = fopen("D://Quiz Game.txt", "r"); //reset the pointer
        gotoxy(30,15);
        while ((c = getc(file_pointer)) != EOF) printf("%c", c);

        fclose(file_pointer);


 getch();
 last_menu();

}

void mainmenu()
{
    system("cls");
    fflush(stdin);
    system("color F1");
    char ch;
    gotoxy(25,0);
    printf("******************** Welcome in our quiz game ****************** ");
     gotoxy(45,5);
    printf(" Press H to help ");
     gotoxy(45,7);
    printf(" Press S to start quiz game ");
     gotoxy(45,9);
    printf(" Press Q to quit game ");
    gotoxy(45,11);
    printf(" Press R to see result");
     gotoxy(45,13);
    printf(" Press I for some instruction that help you to win the game ");
     gotoxy(45,15);
     printf("->");
    scanf("%c",&ch);
     gotoxy(45,16);
    if(ch=='H' || ch=='h')
    {
        help();

    }
    else if(ch=='S' || ch=='s')
    {
        start();


    }
    else if(ch=='Q' || ch=='q')
    {
        quit();


    }
    else   if(ch=='R' || ch=='r')
    {
         r_esult();
        //printf(" Want to see your result ?\n");


    }
    else if(ch=='I' || ch=='i')
    {
        instruction();

    }
    else
    {
        gotoxy(45,20);
        printf(" Invalid  Choice !!!  ");
        gotoxy(45,22);
        printf(" Choice valid option !! ");

        mainmenu();

    }

}



int main()
{
    mainmenu();
}

