#include <stdio.h>
#include <stdlib.h>

void display()
{
    system("cls");
    printf("=========================================================================================================\n");
    printf("==================================\t((((MyShop.Com))))\t=================================");
    printf("\n=========================================================================================================\n");
}

void entry()
{
    int n;
    FILE *fp1;
    fp1 = fopen("entry.txt","a");
    printf("Enter the number of product do you want to enter : ");
    scanf("%d",&n);
    int *price = malloc(n*sizeof(int));
    char (*product)[50] = malloc(n*sizeof(*product));
    for(int i=0;i<n;i++){
         printf("%d : Enter new product : ",i+1);
         scanf("%s",&product[i]);
         printf("%d : Enter price : ",i+1);
         scanf("%d",&price[i]);
    }
    for(int i=0;i<n;i++){
       fprintf(fp1,"%s\n",product[i]);
       fprintf(fp1,"%d\n",price[i]);
    }
    printf("Succesfully Added ");
}

void invoice()
{
    int i,n,sum=0;
    printf("Enter the number of the products : ");
    scanf("%d",&n);
    int *price = malloc(n*sizeof(int));
    char (*product)[50] = malloc(n*sizeof(*product));
    for(i=0;i<n;i++){
        printf("%d : Enter Product Name : ",i+1);
        scanf("%s",product[i]);
        printf("%d : Enter Price : ",i+1);
        scanf("%d",&price[i]);
    }
    system("cls");
    printf("\n================================================================================\n");
    printf("================================(((MY DUKAN NAME)))=============================\n");
    printf("================================================================================\n");
    printf("|\tS.No.\t:\tProduct Name\t:\tPrice\t\t\t\t|\n");
    printf("--------------------------------------------------------------------------------\n");
    for(i=0;i<n;i++){
        printf("|\t%d\t:\t%s\t:\t%d\t\t\t\t|\n",i+1,product[i],price[i]);
        sum = sum + price[i];
    }
    printf("\n-------------------------------------------------------------------------------\n");
    printf("\t\t\tTotal Amount : %d\t\t\t\t\t|",sum);
    printf("\n================================================================================\n");
}

int main()
{
    int n;
    display();
       printf("created by Sagar Maurya\n");
    printf("      ****Welcome****\n");
    printf("\t\t\t1.Entry New Products\n");
    printf("\t\t\t2.Generate Bill\n");
    printf("\t\t\t3.Exit\n");
    printf("Enter your choice : ");
    scanf("%d",&n);
    if(n==1){
        system("cls");
        display();
        entry();
    }
    else if(n==2){ 
        system("cls");
        display();
        invoice();
    }
    else if(n==3){
        system("cls");
        printf("Exit");
        return 1;
    }
    else{
        system("cls");
        printf("Enter A Valid Choice");
    }
    return 0;
}
