#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x[]={0,0,1,1};
    int y[]={0,1,0,1};
    while(5)
    {
        int choice;
        printf("1. Truth table of OR\n");
        printf("2. Truth table of AND\n");
        printf("3. Truth table of XOR\n");
        printf("4. Truth table of NOT\n");
        printf("5. Truth table of NOR\n");
        printf("6. Truth table of NAND\n");
        printf("7. EXIT\n");
        printf("\nPlease, Select any one option:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                for(int i=0;i<4;i++)
                printf("%d OR %d = %d\n",x[i],y[i],x[i]|y[i]); break;
            case 2:
                for(int i=0;i<4;i++)
                printf("%d AND %d = %d\n",x[i],y[i],x[i]&y[i]); break;
            case 3:
                for(int i=0;i<4;i++)
                printf("%d XOR %d = %d\n",x[i],y[i],x[i]^y[i]); break;
            case 4:
                for(int i=0;i<2;i++)
                printf("NOT of %d = %d\n",i,!i); break;
            case 5:
                for(int i=0;i<4;i++)
                printf("%d NOR %d = %d\n",x[i],i[y],!(x[i]|y[i])); break;
            case 6:
                for(int i=0;i<4;i++)
                printf("%d NAND %d = %d\n",x[i],i[y],!(x[i]&y[i])); break;
            case 7:
            exit(1);
            default:
            printf("\nplz, choose correct one\n");
        }
    }
  return 0;
}