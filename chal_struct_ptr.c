/* declaring a structure with a pointer, allocating dynamic memory to it and 
                        using pointers to address elements of structures.  */
#include <stdio.h>
#include <stdlib.h>
struct item
{
    char *itemName;
    int qty;
    float price;
    float amount;
};
void readItem(struct item *);
void printItem(struct item *);
int main()
{
    struct item object, *pObject;
    pObject = &object;
    pObject->itemName = (char *)malloc(30 * sizeof(char));
    readItem(pObject);
    printItem(pObject);
    free(pObject->itemName);
    pObject->itemName = NULL;
    return 0;
}
void readItem(struct item *obj)
{
    printf("Enter the name of the product : ");
    scanf("%s", obj->itemName);
    printf("Enter the price of the product : ");
    scanf("%f", &obj->price);
    printf("Enter the quantity of item : ");
    scanf("%d", &obj->qty);
    obj->amount = obj->price * (float)obj->qty;
}
void printItem( struct item *obj)
{
    printf("\n\n");
    printf("Name of the Product          : %s\n", obj->itemName);
    printf("Price of the Product         : %.2f\n", obj->price);
    printf("Quantity of the product      : %d\n", obj->qty);
    printf("Total Amount for the Product : %.2f\n", obj->amount);
}
