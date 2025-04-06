#include<stdio.h>

int main()
{
char name[50];
int phone_number;
int customer_id;

int body_soap;
int hair_cream;
int hair_spray;
int body_spray;

int sugar;
int tea;
int coffee;
int rice;
int wheat;

int pepsi;
int sprite;
int coke;
int thumbs_up;

int total;
int cosmetics_total;
int grocery_total;
int beverage_total;

printf("-------------\n");
printf("BILLING SYSTEM\n");
printf("-------------\n");
printf("CUSTOMER DETAILS\n\n");

 printf("CUSTOMER NAME:");
 scanf("%s",&name);
 printf("CUSTOMER NUMBER:");
 scanf("%d",&phone_number);
 printf("CUSTOMER ID:");
 scanf("%d",&customer_id);

 printf("-------------\n");

 printf("COSMETICS\n\n");

 printf("body_soap(RS 10):");
 scanf("%d",&body_soap);
 printf("hair_cream(RS 25): ");
 scanf("%d",&hair_cream);
 printf("hair_spray(RS 55):");
 scanf("%d",&hair_spray);
 printf("body_spray(RS 63):");
 scanf("%d",&body_spray);

printf("-------------\n");

printf("GROCERIES\n\n");

printf("sugar(RS 55):");
scanf("%d",&sugar);
printf("tea(RS 240):");
scanf("%d",&tea);
printf("coffee(RS 50):");
scanf("%d",&coffee);
printf("rice(RS 150):");
scanf("%d",&rice);
printf("wheat(RS 200):");
scanf("%d",&wheat);

printf("-------------\n");

printf("BEVERAGES\n\n");

printf("pepsi(RS 50):");
scanf("%d",&pepsi);
printf("sprite(RS 55):");
scanf("%d",&sprite);
printf("coke(RS 30):");
scanf("%d",&coke);
printf("thumbs_up(RS 77):");
scanf("%d",&thumbs_up);

printf("-------------\n");

int boso;
int hc;
int hs;
int bs;

boso =10*body_soap;
hc = 25*hair_cream;
hs = 55*hair_spray;
bs = 63*body_spray;
cosmetics_total = boso+hc+hs+bs;


printf("body soap:");
printf("%d RS\n",boso);
printf("hair cream:");
printf("%d RS\n",hc);
printf("hair spray:");
printf("%d RS\n",hs);
printf("body spray:");
printf("%d RS\n",bs);
printf("total cosmetics price:");
printf("%d RS\n",cosmetics_total);

printf("-------------\n");

int s;
int t;
int c;
int r;
int w;

s = 55*sugar;
t = 240*tea;
c = 50*coffee;
r = 150*rice;
w = 200*wheat;
grocery_total = s+t+c+r+w;

printf("sugar:");
printf("%d RS\n",s);
printf("tea:");
printf("%d RS\n",t);
printf("coffee:");
printf("%d RS\n",c);
printf("rice:");
printf("%d RS\n",r);
printf("wheat:");
printf("%d RS\n",w);
printf("total grocery price:");
printf("%d Rs\n",grocery_total);

printf("-------------\n");

int pep;
int spr;
int cok;
int thu;

pep = 50*pepsi;
spr = 55*sprite;
cok = 30*coke;
thu = 77*thumbs_up;
beverage_total = pep+spr+cok+thu;

printf("pepsi:");
printf("%d RS\n",pep);
printf("sprite:");
printf("%d RS\n",spr);
printf("coke:");
printf("%d RS\n",cok);
printf("thumbs_up:");
printf("%d RS\n",thu);
printf("total beverage price:");
printf("%d RS\n",beverage_total);

printf("-------------\n");

total = cosmetics_total+grocery_total+beverage_total;

printf("Total Amount:");
printf("%d RS\n",total);

printf("-------------\n");

printf("---------------------------------------------\n");

printf("PIET CANTEEN\n\n");

printf("Customer Name:");
printf("%s\n",name);
printf("Customer Phone Number:");
printf("%d\n",phone_number);
printf("Customer Id:");
printf("%d\n",customer_id);

printf("Product Name                Quantity                Price\n\n");
printf("body soap                     %d                      %d\n",body_soap,boso);
printf("hair cream                    %d                      %d\n",hair_cream,hc);
printf("hair spray                    %d                      %d\n",hair_spray,hs);
printf("body spray                    %d                      %d\n",body_spray,bs);
printf("sugar                         %d                      %d\n",sugar,s);
printf("tea                           %d                      %d\n",tea,t);
printf("coffee                        %d                      %d\n",coffee,c);
printf("rice                          %d                      %d\n",rice,r);
printf("wheat                         %d                      %d\n",wheat,w);
printf("pepsi                         %d                      %d\n",pepsi,pep);
printf("sprite                        %d                      %d\n",sprite,spr);
printf("coke                          %d                      %d\n",coke,cok);
printf("thumbs_up                     %d                      %d\n",thumbs_up,thu);

printf("Grocery Total Price: %d\n\n",grocery_total);

printf("Cosmetic Total Price: %d\n\n",cosmetics_total);

printf("Beverages Total Price: %d\n\n",beverage_total);

printf("Total price: %d\n\n",total);

printf("---------------------------------------------\n");

return 0;

}