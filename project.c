#include<stdio.h>
#include<string.h>
#include<conio.h>

void create_record();
void add_new_record(int id, char *name, char *department, char *father_name, char *mother_name, char *guardiant_name, char *province, char *district, char *blood_group, char *nic);
void view_all_record();
void search_record(int find_id);
void update_record(int find_id, char *new_name, char *new_department, char *new_father_name, char *new_mother_name, char *new_guardiant_name, char *new_province, char *new_district, char *new_blood_group, char *new_nic);
void delete_record(int find_id);
void delete_all_students();



typedef struct
    {
        int id;
        char name[200];
        char department[50];
        char father_name[200];
        char mother_name[200];
        char guardiant_name[200];
        char province[50];
        char district[50];
        char blood_group[10];
        char nic[15];
        //

        int find_id;
        char new_name[200];
        char new_department[50];
        char new_father_name[200];
        char new_mother_name[200];
        char new_guardiant_name[200];
        char new_province[50];
        char new_district[50];
        char new_blood_group[10];
        char new_nic[15];
        //
        char ans;

    }student;

void main()
{
    system("color A");
    student new;

    //create_record(12, "Hashan Madhuranga", "ICT");
    //char ans;
    //add_new_record(10, "Isashan Madhusanka", "ICT");
    //view_all_record();
    //search_record(11);
    //update_record(5,"Nuwan Ekanay","BST");
    //delete_record(10);
    //delete_all_students();

        int choise;
        char ans;
        printf("***********************Students Record Management System***********************\n\n");
        printf("                              1.Create Record                                        \n");
        printf("                              2.Add new Record                                       \n");
        printf("                              3.View all Record                                      \n");
        printf("                              4.Search Record                                        \n");
        printf("                              5.Update Record                                        \n");
        printf("                              6.Delete Record                                        \n");
        printf("                              7.Delete All Record                                    \n");
        printf("                              8.Guide Line                                           \n");
        printf("                              9.About Us                                           \n\n");

        printf("------------------------------------------------------------------------------------ \n\n");

        printf("Enter the Choise: ");
        scanf("%d",&choise);
        printf("\n\n");
        system("cls");


        if(choise==1)
        {
            create_record();
        }




        else if(choise==2)
        {
            printf("Enter ID1: ");
            scanf("%d", &new.id);
            getchar(); // To consume the newline character left by scanf()

            printf("Enter Name1: ");
            scanf("%199[^\n]", new.name);
            getchar(); // To consume the newline character left by scanf()

            printf("Enter department1: ");
            scanf("%199[^\n]", new.department);
            getchar();

            //
            printf("Enter Student's Father Name: ");
            scanf("%199[^\n]", new.father_name);
            getchar();

            printf("Enter Student's Mother Name: ");
            scanf("%199[^\n]", new.mother_name);
            getchar();

            printf("Enter Student's Guardiant Name: ");
            scanf("%199[^\n]", new.guardiant_name);
            getchar();

            printf("Enter Student's Provice: ");
            scanf("%49[^\n]", new.province);
            getchar();

            printf("Enter Student's District: ");
            scanf("%49[^\n]", new.district);
            getchar();

            printf("Enter Student's Blood Group(A+/A-/B+/B-/O+/O-/AB+/AB-): ");
            scanf("%9[^\n]", new.blood_group);
            getchar();

            printf("Enter Student's NIC Number: ");
            scanf("%14[^\n]", new.nic);
            getchar();

        add_new_record(new.id, new.name, new.department, new.father_name, new.mother_name, new.guardiant_name, new.province, new.district, new.blood_group, new.nic);
        }



        else if (choise==3)
        {
           view_all_record();
        }


        else if(choise==4)
        {
            printf("Please Enter the student ID: ");
            scanf("%d", &new.find_id);
            getchar(); // To consume the newline character left by scanf()

            search_record(new.find_id);
        }



        else if(choise==5)
        {
            printf("Enter ID1: ");
            scanf("%d", &new.find_id);
            getchar(); // To consume the newline character left by scanf()

            printf("Enter Name: ");
            scanf("%199[^\n]", new.new_name);
            getchar(); // To consume the newline character left by scanf()

            printf("Enter department1: ");
            scanf("%199[^\n]", new.new_department);
            getchar();

            //
            printf("Enter Student's Father Name: ");
            scanf("%199[^\n]", new.new_father_name);
            getchar();

            printf("Enter Student's Mother Name: ");
            scanf("%199[^\n]", new.new_mother_name);
            getchar();

            printf("Enter Student's Guardiant Name: ");
            scanf("%199[^\n]", new.new_guardiant_name);
            getchar();

            printf("Enter Student's Provice: ");
            scanf("%49[^\n]", new.new_province);
            getchar();

            printf("Enter Student's District: ");
            scanf("%49[^\n]", new.new_district);
            getchar();

            printf("Enter Student's Blood Group(A+/A-/B+/B-/O+/O-/AB+/AB-): ");
            scanf("%9[^\n]", new.new_blood_group);
            getchar();

            printf("Enter Student's NIC Number: ");
            scanf("%14[^\n]", new.new_nic);
            getchar();


            update_record(new.find_id, new.new_name, new.new_department, new.new_father_name, new.new_mother_name, new.new_guardiant_name, new.new_province, new.new_district, new.new_blood_group, new.new_nic);
        }

        else if(choise==6)
        {
            printf("Enter ID2: ");
            scanf("%d", &new.find_id);
            getchar(); // To consume the newline character left by scanf()

             delete_record(new.find_id);
        }

        else if(choise==7)
        {
            delete_all_students();
        }



}

/////////////////////////////////////////////////111
void create_record(int id, char *name, char *department, char *father_name, char *mother_name, char *guardiant_name, char *province, char *district, char *blood_group, char *nic)
{
        char ans;
        student create;
        do{
            printf("Enter ID: ");
            scanf("%d", &create.id);
            getchar();

            printf("Enter Name: ");
            scanf("%199[^\n]", create.name);
            getchar();

            printf("Enter department: ");
            scanf("%199[^\n]", create.department);
            getchar();

            printf("Enter Student's Father Name: ");
            scanf("%199[^\n]", create.father_name);
            getchar();

            printf("Enter Student's Mother Name: ");
            scanf("%199[^\n]", create.mother_name);
            getchar();

            printf("Enter Student's Guardiant Name: ");
            scanf("%199[^\n]", create.guardiant_name);
            getchar();

             printf("Enter Student's Provice: ");
            scanf("%49[^\n]", create.province);
            getchar();

             printf("Enter Student's District: ");
            scanf("%49[^\n]", create.district);
            getchar();

             printf("Enter Student's Blood Group(A+/A-/B+/B-/O+/O-/AB+/AB-): ");
            scanf("%9[^\n]", create.blood_group);
            getchar();

             printf("Enter Student's NIC Number: ");
            scanf("%14[^\n]", create.nic);
            getchar();


            FILE *file=fopen("student_record.txt","a");
            fprintf(file, "%d, %s, %s, %s, %s, %s, %s, %s, %s, %s,\n", create.id, create.name, create.department, create.father_name, create.mother_name, create.guardiant_name, create.province, create.district, create.blood_group, create.nic);
            fclose(file);
            printf("********************\n");

            printf("\n\nAre you want to add another students details?(Y/N): ");
            scanf(" %c", &ans);
            printf("\n");


            }while(ans=='Y' || ans=='y');//if want user can again new record this part
            system("cls");
            main();

}

/////////////////////////////////////////////////222
void add_new_record(int id, char *name, char *department, char *father_name, char *mother_name, char *guardiant_name, char *province, char *district, char *blood_group, char *nic)
{
    FILE *file=fopen("student_record.txt","a");
    fprintf(file,"%d, %s, %s, %s, %s, %s, %s, %s, %s, %s,\n", id, name, department, father_name, mother_name, guardiant_name, province, district, blood_group, nic);
    fclose(file);
    system("cls");
    main();
}


////////////////////////////////////////////////333
void view_all_record()
{
    char a;
    FILE *file=fopen("student_record.txt","r");
    char content[1000];
    printf("*********************************************         All Records          ********************************************\n\n");

    while(fgets(content,1000,file)!=NULL)
    {
        printf("                                               %s\n", content);

    }
    printf("***********************************************************************************************************************");
    fclose(file);
    char c;
    printf("\nDo you want to Home page(Yes(y)/No(n)):");
    scanf(" %s",&c);
    system("cls");
    main();
}

//////////////////////////////////////////////////444
void search_record(int find_id)
{
    int id;
    char name[200];
    char dept[200];
    char f_name[200];
    char m_name[200];/////////////////////////////////////////////////////////
    char guardiant[200];
    char province[50];
    char district[50];
    char blood_g[10];
    char nic[15];

    FILE *file=fopen("student_record.txt","r");
    char content[300];
    while(!feof(file))
    {
        fgets(content,300,file);
        sscanf(content,"%d, %s, %s, %s, %s, %s, %s, %s, %s, %s,\n", &id, name, dept, f_name, m_name, guardiant, province, district, blood_g, nic);  //Allocate variable

        if(id==find_id)
        {
            printf("\n\n*************************************\n");
            printf("Student ID=%d\n",id);
            printf("Student Name=%s\n",name);
            printf("Student Department=%s\n",dept);
            printf("Student's Father Name=%s\n",f_name);
            printf("Student's Father Name=%s\n",m_name);
            printf("Student's Guardiant Name=%s\n",guardiant);
            printf("Province=%s\n",province);
            printf("District=%s\n",district);
            printf("Blood Group=%s\n",blood_g);
            printf("Student's NIC Number=%s\n",nic);
            printf("*************************************\n");
            break;
        }
    }
    fclose(file);
    printf("\nTap to R:");
    scanf(" %c");
    system("cls");
    main();
}


////////////////////////////////////////////////555
void update_record(int find_id, char *new_name, char *new_department, char *new_father_name, char *new_mother_name, char *new_guardiant_name, char *new_province, char *new_district, char *new_blood_group, char *new_nic)
{
    FILE *file=fopen("student_record.txt","r");
    FILE *file_new=fopen("student_record_new.txt","w");

    int id;
    char name[200];
    char dept[200];
    char f_name[200];
    char m_name[200];
    char guardiant[200];
    char province[50];
    char district[50];
    char blood_g[10];
    char nic[15];
    char content[1000];

    while(fgets(content,1000,file)!=NULL)
    {
        sscanf(content, "%d, %s, %s, %s, %s, %s, %s, %s, %s, %s,\n", &id, name, dept, f_name, m_name, guardiant, province, district, blood_g, nic);

        if(find_id==id)
        {
            fprintf(file_new, "%d, %s, %s, %s, %s, %s, %s, %s, %s, %s,\n", find_id, new_name, new_department, new_father_name, new_mother_name, new_guardiant_name, new_province, new_district, new_blood_group, new_nic);
            continue;
        }
        else
        {
            fprintf(file_new, "%d, %s, %s, %s, %s, %s, %s, %s, %s, %s\n", id, name, dept, f_name, m_name, guardiant, province, district, blood_g, nic);
        }
    }
    fclose(file);
    fclose(file_new);

    remove("student_record.txt");
    rename("student_record_new.txt", "student_record.txt");
    system("cls");
    main();
}


////////////////////////////////////////////6666
void delete_record(int find_id)
{
    FILE *file = fopen("student_record.txt","r");
    FILE *file_new = fopen("student_record_new.txt","w");

    int id;
    char name[200];
    char dept[200];
    char f_name[200];
    char m_name[200];
    char guardiant[200];
    char province[50];
    char district[50];
    char blood_g[10];
    char nic[15];
    char content[1000];

    while (fgets(content, 1000, file) != NULL)
    {
        sscanf(content, "%d, %s, %s, %s, %s, %s, %s, %s, %s, %s,\n", &id, name, dept, f_name, m_name, guardiant, province, district, blood_g, nic);

        if (find_id == id)
        {
           continue;
        }
        else
        {
            fprintf(file_new, "%d, %s, %s, %s, %s, %s, %s, %s, %s, %s\n", id, name, dept, f_name, m_name, guardiant, province, district, blood_g, nic);
        }
    }
    fclose(file);
    fclose(file_new);

    remove("student_record.txt");
    rename("student_record_new.txt", "student_record.txt");
    system("cls");
    main();
}


///////////////////////////////////////////////7777
void delete_all_students()
{
    remove("student_record.txt");
    system("cls");
    main();
}

