/*
 * Author:Jorge Sirias
 * I affirm that I wrote this program myself without any help from any other people or resources on the internet.
 * Purpose: The purpose of this program is to create a program in C that is able to calculate the GPA of a student.
 * 1/22/2019
 * COP 4338
 * */

#include <stdio.h>
#include <string.h>

int main()
{

    const int MAX_CHAR_COURSE_NAME = 50; //The max number of characters a course name has
    const int NUM_COURSES          = 6;  //The number of courses taken thus semester

    char coursesTaken[NUM_COURSES][MAX_CHAR_COURSE_NAME];//String array that hold the courses taken in a semester

    //Populating array with courses
    strcpy(coursesTaken[0],"Programming 3");
    strcpy(coursesTaken[1],"Data Structures");
    strcpy(coursesTaken[2],"Windows Programming");
    strcpy(coursesTaken[3],"Web Application Programming");
    strcpy(coursesTaken[4],"Discrete Structures");
    strcpy(coursesTaken[5],"OS For IT");


    char studentFirstName[20] = "Jorge";     //Hard coded value
    char studentLastName[20]  = "Sirias";    //Hard coded value
    char pantherID[11]        = "123456789"; //Hard coded value

    int courseCredit = 3;  //All courses for this semester share the same credit amount
    double courseGrade[6] = {4.00, 2.90, 3.50, 3.10, 2.78, 3.74};  //An array of course grade for the semester

    printf("\nStudent Name: %s %s\n", studentFirstName, studentLastName);
    printf("PantherI:D: %s\n", pantherID);
    printf(" ________________________________________________________________________________\n");
    printf("|Course                             | Credits |    Grade|     Grade Points Earned|\n");
    printf(" --------------------------------------------------------------------------------\n");
    printf("|%s                      ", coursesTaken[0]);
    printf("|    %d    ", courseCredit);
    printf("|     %.2lf", courseGrade[0]);
    printf("|                   %.2lf|\n", courseCredit * courseGrade[0]);    
    printf(" --------------------------------------------------------------------------------\n");
    printf("|%s                    ", coursesTaken[1]);
    printf("|    %d    ", courseCredit);
    printf("|     %.2lf", courseGrade[1]);
    printf("|                   %5.2lf|\n", courseCredit * courseGrade[1]);    
    printf(" --------------------------------------------------------------------------------\n");
    printf("|%s                ", coursesTaken[2]);
    printf("|    %d    ", courseCredit);
    printf("|     %.2lf", courseGrade[2]);
    printf("|                   %.2lf|\n", courseCredit * courseGrade[2]);
    printf(" --------------------------------------------------------------------------------\n");
    printf("|%s        ", coursesTaken[3]);
    printf("|    %d    ", courseCredit);
    printf("|     %.2lf", courseGrade[3]);
    printf("|                   %5.2lf|\n", courseCredit * courseGrade[3]);
    printf(" --------------------------------------------------------------------------------\n");
    printf("|%s                ", coursesTaken[4]);
    printf("|    %d    ", courseCredit);
    printf("|     %.2lf", courseGrade[4]);
    printf("|                   %5.2lf|\n", courseCredit * courseGrade[4]);
    printf(" --------------------------------------------------------------------------------\n");
    printf("|%s                          ", coursesTaken[5]);
    printf("|    %d    ", courseCredit);
    printf("|     %.2lf", courseGrade[5]);
    printf("|                   %5.2lf|\n", courseCredit * courseGrade[5]);
    printf(" --------------------------------------------------------------------------------\n");
    printf("|Total                              ");
    printf("|    %d   ", courseCredit * 6);
    printf("|         ");
    printf("|                   %5.2lf|\n", (courseCredit * courseGrade[0]) + (courseCredit * courseGrade[1]) + (courseCredit * courseGrade[2]) + (courseCredit * courseGrade[3]) + (courseCredit * courseGrade[4]) + (courseCredit * courseGrade[5]));
    printf(" --------------------------------------------------------------------------------\n");

    return 0;

}
    

