# include <stdio.h>

int main()
{
    float cost, sell, profit;
    
    printf("What is the cost of producing the item?\n");
    scanf("%f", &cost);
    
    printf("What is the selling price of item?\n");
    scanf("%f", &sell);

    profit = sell - cost;

    if(profit < 0)
    {
        printf("Your item has a loss of %f dollars\n", profit);
    }

    else
    {
        printf("Your item has a profit of %f dollars\n", profit);
    }



    return 0;
}