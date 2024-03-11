void read(int n, int x[70])
{
    int i;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x[i]);
    }
 return;
}
void display(int n, int x[70])
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\t",x[i]);
    }
 return;
}
int  search(int n, int x[70], int key)
{
    int i;
    for(i=1;i<=n;i++)
    {
       if(x[i]==key)
        return 1;
    }

    return 0;

}
int main()
{
    int n,x[70],key,L,s;
    scanf("%d",&n);
    read(n,x);
    scanf("%d",&key);
    if(n>0)
    {

        display(n,x);
        s=search(n,x,key);
        if(L==1)
     printf("\nSearch successfull. %d found in list.",key);
        else
    printf("\nSearch unsuccessfull. %d not found in list.",key);
    }
    else
        printf("array should be greater than 0.");
   return 0;
}
