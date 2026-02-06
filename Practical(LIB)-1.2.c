#include<stdio.h>
#include<string.h>

struct book
{
    int id;
    char title[20];
    char author[20];
    int noc;
};

struct book b[50];
int i,n;

void addbook()
{

  printf("Enter no.of books: ");
  scanf("%d",&n);

    for(int i=0;i<n;i++)
        {
            printf(" Book %d\n",i+1);

            printf("Enter book id: ");
            scanf("%d",&b[i].id);
            printf("Enter book title: ");
            scanf("%s",&b[i].title);
            printf("Enter book author: ");
            scanf("%s",&b[i].author);
            printf("Enter book copies: ");
            scanf("%d",&b[i].noc);
        }
}

void issue()
{
  int id;
  printf("Enter book id to issue: ");
  scanf("%d",&id);

  for(i=0;i<n;i++)
  {
      if(b[i].id==id && b[i].noc>0)
      {
          b[i].noc--;
          printf("Book issued successfully: \n");
          return;
      }
  }
          printf("Book not available: \n");
}

void returnbook()
{
    int id;
    printf("Enter book id to return: ");
    scanf("%d",&id);

    for(i=0;i<n;i++)
    {
        if(b[i].id==id)
        {
            b[i].noc++;
            printf("Book returned successfully: \n");
            return;
        }
    }
}

void display()
{
    printf("List of books:\n");

    for(i=0;i<n;i++)
    {
    printf("Book id:");
    printf("%d\n",b[i].id);
    printf("Book title:");
    printf("%s\n",b[i].title);
    printf("Book author:");
    printf("%s\n",b[i].author);
    printf("Book copies:");
    printf("%d\n",b[i].noc);
    }
}



int main()
{
  addbook();
  issue();
  returnbook();
  display();
return 0;
}
