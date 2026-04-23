#include<stdio.h>
#include<string.h>

struct EMPLOYEE{
    char name[20],dsg[20],gender[1],doj[10];
    float salary;
};e[3];

int main()
{
    int i,tot_emp, male = 0, female = 0;

    for(i=0;i<3;i++){
        printf("Enter name, designation, gender(M/F), DOJ(dd-mm-yyyy), salary:\n");
        scanf("%s %s %c %s %f",e[i].name, e[i].designation, &e[i].gender, e[i].doj, &e[i].salary);

        e[i].gender[0] = toupper(e[i].gender[0]);
        tot_emp=male+female;

        if(strcmp(e[i].gender, "M") == 0)
            male++;
        else if(strcmp(e[i].gender, "F") == 0)
            female++;
    }
    for(i=0;i<3;i++)
    {
        printf("Total employees are: %d",tot_emp);
        printf("Male = %d\nFemale = %d\n", male, female);

        printf("\nEmployees with salary > 10000:\n");
            for(i = 0; i < 3; i++) {
                if(e[i].salary > 10000)
                    printf("%s\n", e[i].name);
            }
        printf("\nEmployees with designation AsstManager:\n");
            for(i = 0; i < 3; i++) {
                if(strcmp(e[i].designation, "AsstManager") == 0)
                    printf("%s\n", e[i].name);
            }

    }
    return 0;
}
