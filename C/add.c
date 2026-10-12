#include <stdio.h>

struct Address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
int main()
{
    struct Address add[5];

    printf("Enter information for person 1 : ");
    scanf("%d", &add[0].houseNo);
    scanf("%d", &add[0].block);
    scanf("%s", &add[0].city);
    scanf("%s", &add[0].state);

    printf("Enter information for person 2 : ");
    scanf("%d", &add[1].houseNo);
    scanf("%d", &add[1].block);
    scanf("%s", &add[1].city);
    scanf("%s", &add[1].state);

    printf("Enter information for person 3 : ");
    scanf("%d", &add[2].houseNo);
    scanf("%d", &add[2].block);
    scanf("%s", &add[2].city);
    scanf("%s", &add[2].state);

    printf("Enter information for person 4 : ");
    scanf("%d", &add[3].houseNo);
    scanf("%d", &add[3].block);
    scanf("%s", &add[3].city);
    scanf("%s", &add[3].state);

    printf("Enter information for person 5 : ");
    scanf("%d", &add[4].houseNo);
    scanf("%d", &add[4].block);
    scanf("%s", &add[4].city);
    scanf("%s", &add[4].state);

    for (int i = 0; i < 5; i++)
    {
        printf("Address %d : %d, %d, %s, %s \n", i, add[i].houseNo, add[i].block, add[i].city, add[i].state);
    }
    return 0;
}