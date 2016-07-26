#include <stdio.h>
main()
{
int PRODUCTID, QUANTITY; 
/*
  PRODUCTID = Product identity number
  QUANTITY  = Quantity of product"
*/
double TOTAL1,PRICE, TOTAL,DISCOUNT;
/*
  PRICE = Price for each product
  TOTAL1 = Total purchased price
  TOTAL = Total price for each product purchased
*/
/*             Interface for retail store stock                              */
/*             This interface aims to provide necessary information for user */
printf("==============================================================================\n");
printf("Item                     Price    Type                Discount    Input Number\n");
printf("Shoes                    150.00   Wearable products   30%\t\b         (1)\n");
printf("Shirts                   100.00   Wearable products   25%\t\b         (2)\n");
printf("Pants                    80.00    Wearable products   20%\t\b         (3)\n");
printf("Kitchenware              200.00   Utensils            25%\t\b         (4)\n");
printf("Toys                     50.00    Entertainment       40%\t\b         (5)\n");
printf("Stationaries             80.00    Writting materials  10%\t\b         (6)\n");
printf("Electrical appliances    150.00   Utensils            15%\t\b         (7)\n");
printf("\n");
printf("*******************************************************************************\n");
printf("Note: GST will be charge for (Wearable product) and (Writing Material)\n");
printf("Note: GST will be charge with any purchase of one category item with price \n higher them RM300\n");
printf("*******************************************************************************\n");
printf("\a");
/*             Create beep to alert user                 */
while ((PRODUCTID !=0) || (QUANTITY !=0))
{
/* 
   Sentinel value is:
   PRODUCTID =0
   QUANTITY = 0
*/
TOTAL1 += TOTAL;
/*
  The process to create a total of the entire purchased.
*/
printf("Enter Item ID Number : ");
scanf("%d", &PRODUCTID);
/*
  Input for product identity number.
*/
printf("Enter quantity of product purchase : ");
scanf("%d", &QUANTITY);
/*
  Input for quantity of purchased.
*/
if (PRODUCTID == 1)
{ 
   printf("Product selected is Shoes \n");
/*
  Print choosen type of product.
*/
   printf("Quantity:%d \n", QUANTITY); 
/*
  Print quantity of purchased
*/
   PRICE = 150;
   DISCOUNT = 0.3; 
   TOTAL = (((PRICE - (PRICE*DISCOUNT))*1.06)*QUANTITY);
/*5

  To calculate the total price of the choosen product with GST
*/
   printf("Total price is RM%4.2f. GST is applied. \n", TOTAL);
/*
  To print the total price of the choosen product with GST.
*/
}
  if (PRODUCTID ==2)
  { 
   printf("Product selected is Shirts \n");
/*
  Print choosen type of product.
*/
   printf("Quantity:%d \n", QUANTITY); 
/*
  Print quantity of purchased
*/
   PRICE = 100;
   DISCOUNT = 0.25; 
   TOTAL = (((PRICE - (PRICE*DISCOUNT))*1.06)*QUANTITY);
/*
  To calculate the total price of the choosen product with GST
*/
   printf("Total price is RM%4.2f. GST is applied. \n", TOTAL);
/*
  To print the total price of the choosen product with GST.
*/
}
    if (PRODUCTID ==3)
{ 
   printf("Product selected is Pants \n");
/*
  Print choosen type of product.
*/
   printf("Quantity:%d \n", QUANTITY); 
/*
  Print quantity of purchased
*/
   PRICE = 80;
   DISCOUNT = 0.2; 
   TOTAL = (((PRICE - (PRICE*DISCOUNT))*1.06)*QUANTITY);
/*
  To calculate the total price of the choosen product with GST.
*/
   printf("Total price is RM%4.2f. GST is applied. \n", TOTAL);
/*
  To print the total price of the choosen product with GST.
*/
}
    if (PRODUCTID ==4)
{ 
   printf("Product selected is Kitchenware \n");
/*
  Print choosen type of product.
*/
   printf("Quantity:%d \n", QUANTITY); 
/*
  Print quantity of purchased
*/
   PRICE = 200;
   DISCOUNT = 0.25; 
   TOTAL = ((PRICE - (PRICE*DISCOUNT))*QUANTITY);
/*
  To calculate the total price of the choosen product without GST.
*/
   printf("Total price is RM%4.2f.\n", TOTAL);
    if ((PRODUCTID == 4)&& (TOTAL > 300))
   TOTAL = TOTAL * 1.06;   
/*
  To calculate the total price of the choosen product with GST.
*/
   printf("Calculating GST. Please wait...\nNew total price is RM%4.2f. \nGST is applied.", TOTAL);
/*
  To print the total price of the choosen product with GST.
*/
}
   
     if (PRODUCTID == 5)
{ 
   printf("Product selected is Toys. \n");
/*
  Print choosen type of product.
*/
   printf("Quantity:%d \n", QUANTITY); 
/*
  Print quantity of purchased.
*/
   PRICE = 50;
   DISCOUNT = 0.4; 
   TOTAL = ((PRICE - (PRICE*DISCOUNT))*QUANTITY);
/*
  To calculate the total price of the choosen product without GST.
*/
   printf("Total price is RM%4.2f.\n", TOTAL);
/*
  To print total price for the choosen product type without GST.
*/   
   
      if ((PRODUCTID == 5)&& (TOTAL > 300))
   TOTAL = TOTAL * 1.06;
/*
  To calculate the total price of the choosen product with GST.
*/
   printf("Calculating GST. Please wait...\nNew total price is RM%4.2f. \nGST is applied.", TOTAL);
/*
  To print the total price of the choosen product with GST.
*/
}

     if (PRODUCTID == 6)
{ 
   printf("Product selected is Stationaries. \n");
/*
  Print choosen type of product.
*/
   printf("Quantity:%d \n", QUANTITY); 
/*
  Print quantity of purchased
*/
   PRICE = 50;
   DISCOUNT = 0.4; 
   TOTAL = (((PRICE - (PRICE*DISCOUNT))*QUANTITY)*1.06);
/*
  To calculate the total price of the choosen product with GST.
*/
   printf("Total price is RM%4.2f. GST is applied. \n", TOTAL); 
/*
  To print total price for the choosen product type.
*/   

}
     if (PRODUCTID ==7)
{ 
   printf("Product selected is Electrical Appliances. \n");
/*
  Print choosen type of product.
*/
   printf("Quantity:%d \n", QUANTITY); 
/*
  Print quantity of purchased
*/
   PRICE = 150;
   DISCOUNT = 0.15; 
   TOTAL = ((PRICE - (PRICE*DISCOUNT))*QUANTITY);
/*
  To calculate the total price of the choosen product without GST.
*/
   printf("Total price is RM%4.2f.\n", TOTAL);
/*
  To print the total price of the choosen product without GST.
*/ 
      if ((PRODUCTID == 7)&& (TOTAL > 300))
   TOTAL = TOTAL * 1.06;
/*
  To calculate the total price of the choosen product with GST.
*/
   printf("Calculating GST. Please wait...\nNew total price is RM%4.2f. \nGST is applied.", TOTAL);
/*
  To print the total price of the choosen product with GST.
*/
}
}      
printf("The total of purchase is %4.2f \n", TOTAL1);
/*
  Print total of the entire purchase
*/ 
system ("pause");
return (0);
}