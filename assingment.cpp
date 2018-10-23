/***************************************************
Code written by Muhammad Huzaifah Mahmud for CBCP2202
****************************************************/

#include <stdio.h>          /*include information about standard library*/
#include <stdlib.h>

/***************************************************
 				main loop 
 ***************************************************/
main()

{
/***************declaration of variable***************/
    int
		total_stud,         /* total_stud is the total number of student that plan to key in */
        total_course,       /* total_course is the total number of course that plan to key in */
        no_stud;            /* no_stud is to calculate the amount of student that the data had been key in */
        
/************ assignment statements *******************/
    no_stud = 0;            /* number of student is set to zero for initial value as nil student's mark was being key in*/

    printf("SIMPLE GRADING SYSTEM\n");
    printf("\n");
    printf(">>Enter no of students : ");
    scanf("%d", &total_stud);
	printf(">>Enter no of courses : ");
    scanf("%d", &total_course);
    
	while (total_stud != no_stud)
	/***************************************
	The condition is tested. if is is true (no_stud is not equal to total_stud), 
	the following is executed. it will loop until the statement is false (no_stud is equal to total_stud)
	*****************************************/
    { 
    
    	/***************declaration of variable***************/
    	int
	        course_no;          /* course_no is to calculate the amount of course that the mark had been key in */
		float
            mark,               /* mark is the input of mark for each course of each student */
            total_mark,         /* total_mark is sum of all mark for each student */
            average_mark;       /* average_mark is result of total_mark divide with total_course */
    	char
            id_stud[5]; 		/* id_stud is the Identification Number of each student */
	
        /***************assignment statements******************/
        course_no = 0;              /* number of course will be reset to zero for new student @ new loop */
        total_mark = 0;             /* total mark will be reset to zero for new student @ new loop */

        no_stud++; 				     /* no of student will be increase by 1 for each new student */
        printf("\t>>Enter student ID :");
        scanf("%s", &id_stud);      		/* save input as id_stud for student id */
        printf("\n");
        printf("\t>>Enter mark for %s :\n",id_stud); /*utilize echoing input id_stud in order to be an alert for any potential wrong student’s id */
		printf("\t>>course_no adalah %d :\n", course_no);
		printf("\t>>total_course adalah %d :\n", total_course);
        while (course_no != total_course) 
		/***************************************
		*  The condition is tested. if is is true (course_no is not equal to total_course), 
		*  the following is executed. it will loop until the statement is false (course_no is not equal to total_course)
		*****************************************/
		{
			printf("\t>>course_no sblm adalah %d :\n", course_no);
            course_no++;
			printf("\t>>course_no slps adalah %d :\n", course_no);
            printf("\t\t>>Enter mark for course #%.0f : ", course_no);
            scanf("%i", mark);
            
			{
				if (100 > mark);
			    	printf("Please enter valid mark");
			    	return (0);
            	if (0 > mark)
            		printf("Please enter valid mark ooo");
            		return(0);
			}
			
            total_mark = total_mark + mark;

            {
                if (mark >= 80)
                    printf("\t\tGrade A\n");
                else if (mark >= 70)
                    printf("\t\tGrade B\n");
                else if (mark >= 60)
                    printf("\t\tGrade C\n");
                else if (mark >= 50)
                    printf("\t\tGrade D\n");
                else if (mark >= 40)
                    printf("\t\tGrade E\n");
                else if (mark <= 39)
                    printf("\t\tGrade F");

            }
        
		}
        
		average_mark = (total_mark / total_course);
        printf("\n");
            /*printf("Total course : %i\n", total_course);*/
        printf("\tTotal marks : %.2f\n", total_mark);
        printf("\tAverage marks : %.2f\n", average_mark);
        printf("\n");
        if (average_mark >= 40)
            {
                printf("\tPROCEED TO NEXT SEMESTER... \n");
            }
        else
            {
                printf("\tFAILURE\n");
            }
        printf("\n");


    /* printf("no_stud : %.0f\n", no_stud);
    printf("total_stud : %f.0i\n", total_stud); */
    }


}
  
