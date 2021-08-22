// https://github.com/A7madhatem/GPA
# include <stdio.h>
# include <stdlib.h>
struct student{
	float sgpa[2];
	int courses[2];
};
struct courses{
	float student_score[2];
	int credit_hours[2]={3,4};
};
float GPA (float math,float prog){
	struct courses credit1;
    float gpa = ((math*credit1.credit_hours[0])+(prog*credit1.credit_hours[1]))/7;
    return gpa;
}
int main(){
float m,p;
struct courses course1;
printf("Enter your score in math : \n");
scanf("%f",&m);
course1.student_score[0]=m;
printf("Enter your score in programming : \n");
scanf("%f",&p);
course1.student_score[1]=p;
printf("Your GPA is : %f\n",GPA(course1.student_score[0],course1.student_score[1]));
system ("pause");
return 0;
}

