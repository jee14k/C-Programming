#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	char ch,v,nv,p,m;
	float gst;
	int totprice,j,i;
	int pricev[13],qtyv[13],veg[25],vprice=0;     // pricev = price for 1 pizza, vprice = total price 
	int pricenv[12],qtynv[12],nveg[25],nvprice=0;
	for(j=0;j<25;j++)
	{
		veg[j]=0;
		nveg[j]=0;
	}
		
	printf("\n\t       @   @   @    @  @   @       @   @ @@@@@ @   @ @   @       ");
	printf("\n\t=====  @@ @@  @ @   @  @@  @       @@ @@ @     @@  @ @   @  =====");
	printf("\n\t=====  @ @ @ @@@@@  @  @ @ @       @ @ @ @@@@  @ @ @ @   @  =====");
	printf("\n\t=====  @   @ @   @  @  @  @@       @   @ @     @  @@ @   @  =====");
	printf("\n\t       @   @ @   @  @  @   @       @   @ @@@@@ @   @  @@@\n\n");
	printf(" WELCOME TO HERSHEY'S PIZZA ");
	printf("\n ************************************");
	printf("\n Delicious sides, always by your side!");
	printf("\n ************************************");
	printf("\n Servings - ");
	printf("\n 1. Regular - 1 person");
	printf("\n 2. Medium - 2 people");
	printf("\n 3. Large - 4 people");
	printf("\n --------------------------------------");
	do
	{
	printf("\n VEG PIZZAS(V) || NON - VEG PIZZAS(N)   ");
	fflush(stdin);
	scanf("\n %c",&ch);
	switch(ch)
	{
		case 'v':
		case 'V': printf("\n VEGETARIAN PIZZAS ");
				  printf("\n ------------------------");
				  printf("\n SIMPLY VEG - ");
				  printf("\n ------------------------");
				  printf("\n 1. Margherita  (Single Cheese Topping)                                                                                    - 200               300               400");
				  printf("\n VEG TREAT - ");
				  printf("\n ------------------------");
				  printf("\n 2. Spicy Triple Tango (Golden corn,Jalapeno,Red paprika)                                                                  - 200               300               400");
				  printf("\n 3. Double Cheese Margherita (Loaded with extra cheese)                                                                    - 200               300               400");
				  printf("\n 4. Farmhouse (Onion,Crisp Capsicum,Mushroom & Fresh Tomato)                                                               - 200               300               400");
				  printf("\n 5. Country Special (Onion,Crisp Capsicum & Fresh Tomato)                                                                  - 200               300               400");
				  printf("\n VEG SPECIAL - ");
				  printf("\n ------------------------");	
				  printf("\n 6. Mexican Green Wave (Onion,Crisp Capsicum,Fresh Tomato & Jalapeno,sprinkled with exotic Mexican herbs)                  - 200               300               400 ");
				  printf("\n 7. Peppy Paneer (Paneer,Crisp Capsicum & Red Paprika)                                                                     - 200               300               400 ");
				  printf("\n 8. Veggie Paradise (Babycorn,Black olives,Crisp Capsicum & Red Paprika)                                                   - 200               300               400 ");
				  printf("\n 9. 5 Pepper (Capsicum,Yellow Bell pepper,Red bell Pepper,\n Jalapeno & Red Paprika,sprinkled with Exotic herbs)           - 200               300               400 ");
				  printf("\n 10. Delux Veggie (Onion,Crisp Capsicum,Mushroom,Golden Corn & Paneer)                                                     - 200               300               400 ");
				  printf("\n VEG FEAST PIZZAS - ");
				  printf("\n ------------------------");
				  printf("\n 11. Veg Extravaganza (Black Olives,Onion Crisp Capsicum,Mushroom,\n Fresh Tomato,Golden corn,Jalapeno & Extra cheese)     - 200               300               400 ");  
				  printf("\n 12. Cloud 9 (Onion,Tomato,Babycorn,Paneer,Crisp Capsicum & Jalapeno)                                                      - 200               300               400 ");
				  printf("\n 13. Chef's Veg Wonder (Mushroom,Jalapeno,Babycorn,\n Crisp Capsicum,Red Papirika & Paneer)                                - 200               300               400 ");
				  
				  //SELECTION:
				  for(i=0; i<13;i++ )
				 	{
				  
					  printf("\n\n\tEnter the option you want to select:");
					  scanf("%d",&veg[i]);
					  printf("\tEnter the size of the pizza(regular-r||medium-m||large-l):");
					  fflush(stdin);
					  scanf("%c",&v);
					  switch(v)
					  {
					  	case 'r':
					  	case 'R':
					  		pricev[i]=200;
					  		break;
					  	case 'm':
					  	case 'M':
					  		pricev[i]=300;
					  		break;
					  	case 'l':
					  	case 'L':
					  		pricev[i]=400;
					  		break;
					  		
					  }
					  printf("\n\tenter the quantity of pizza:");
					  scanf("%d",&qtyv[i]);
					  printf("\n\twant to try another pizza(y/n)?");
					  fflush(stdin);
					  scanf("%c",&p);
					  vprice=(qtyv[i]*pricev[i])+vprice;
					  if (p=='n') 
					  {
					   break;
					  }
					  
					}
				  break;
		case 'n':
		case 'N': printf("\n NON - VEG PIZZAS ");
				  printf("\n ------------------------");
		          printf("\n SIMPLY NON VEG - ");
		          printf("\n ------------------------");
		          printf("\n 1. Cheese & Barbeque Chicken                                                                                             - 295               395               495 ");
		          printf("\n 2. Chicken Salami Special (Cheese & Exotic Chicken Salami                                                                - 295               395               495 ");
		          printf("\n NON - VEG TREAT - ");
		          printf("\n ------------------------");
		          printf("\n 3. Barbeque Chicken (Onion & Barbeque Chicken)                                                                           - 295               395               495 ");
		          printf("\n 4. Chicken Fiesta (Chunky Chicken,Spicy Chicken,Onion & Capsicum)                                                        - 295               395               495 ");
		          printf("\n 5. Spicy Chicken (Red Paprika & Hot 'n' Spicy Chicken)                                                                   - 295               395               495 ");
		          printf("\n NON - VEG SPECIAL -  ");
		          printf("\n ------------------------");
		          printf("\n 6. Chicken Lovers (Chicken Italian Sausage,Barbeque Chicken,Capsicum & Red Paprika)                                      - 295               395               495 ");
		          printf("\n 7. Chicken Mexicana (Onion,Fresh Tomato,Red Paprika & Hot 'n' Spicy Chicken)                                             - 295               395               495 ");
		          printf("\n 8. Chicken Golden Delight (Golden Corn,Double Barbeque chicken & extra cheese)                                           - 295               395               495 ");
		          printf("\n 9. Chef's Chicken Choice (Double Grilled Chicken Rashers,Black Olives,Crisp Capsicum & Red Papirika)                     - 295               395               495 ");
		          printf("\n NON - VEG FEAST PIZZAS - ");
		          printf("\n ------------------------");
		          printf("\n 10. Chicken Dominator (Grilled Chicken Rashers,Double Barbeque chicken,Exotic Chicken Salami,\n Hot 'n' Spicy Chicken & Chicken Italian Sausage)  -  295               395               495 ");
		          printf("\n 11. Seventh Heaven (Double Grilled Chicken Rashers,Double Barbeque Chicken,Onion,\n Yellow Bell Pepper, Red Bell Pepper & Jalapeno)               -  295               395               495 ");
		          printf("\n 12. Non - Veg Supreme (Black Olives,Onion,Crisp Capsicum,Mushroom,\n Hot 'n' Spicy Chicken,Barbeque Chicken & Chunky Chicken)                     -  295               395               495 ");                 
				  
				  //SELECTION:
				  for(i=0; i<12;i++ )
				 	{
				  
					  printf("\n\n\tEnter the option you want to select:");
					  scanf("%d",&nveg[i]);
					  printf("\tEnter the size of the pizza(regular-r||medium-m||large-l):");
					  fflush(stdin);
					  scanf("%c",&nv);
					  switch(nv)
					  {
					  	case 'r':
					  	case 'R':
					  		pricenv[i]=295;
					  		break;
					  	case 'm':
					  	case 'M':
					  		pricenv[i]=395;
					  		break;
					  	case 'l':
					  	case 'L':
					  		pricenv[i]=495;
					  		break;
					  		
					  }
					  printf("\n\tenter the quantity of pizza:");
					  scanf("%d",&qtynv[i]);
					  printf("\n\twant to try another pizza(y/n)?");
					  fflush(stdin);
					  scanf("%c",&p);
					  nvprice=(qtynv[i]*pricenv[i])+nvprice;
					  if (p=='n') 
					  {
					   break;
					  }
				}
					  break;
	}
	printf("want to select veg(y/n)??");
	fflush(stdin);
	scanf("%c",&m);
	
	}while(m=='y');
	system("cls");
	totprice=vprice+nvprice;
		
	
		printf("\n\n\n\t***************************************************************\n");
		printf("\t	              CUSTOMER INVOICE                               \n");
		printf("\t***************************************************************\n");
		
		//bill for veg pizza
		
		printf("\n\tpizza selection \t\t quantity * price \t\t total price");
		for(i=0; veg[i]!=0;i++)
				 	{
                      if(i==0)
					  printf("\n\tBILL FOR VEG PIZZA");
					  printf("\n\t");
					  switch(veg[i])
					  {
					  	case 1:
					  		printf("1. Margherita");
					  		break;
					  	case 2:
					  		printf("2. Spicy Triple Tango");
							break;
						case 3:
							printf("3. Double Cheese Margherita");
							break;
						case 4:
							printf("4. Farmhouse");
							break;
						case 5:
							printf("5. Country Special");
							break;
						case 6:
						    printf("6. Mexican Green Wave");
						    break;
						case 7:
							printf("7. Peppy Paneer");
							break;
						case 8:
							printf("8. Veggie Paradise");
							break;
						case 9:
							printf("9. 5 Pepper Jalapeno & Red Paprika");
							break;
						case 10:
							printf("10. Delux Veggie");
							break;
						case 11:
							printf("11. Veg Extravaganza");
							break;
						case 12:
							printf("12. Cloud 9");
							break;
						case 13:
							printf("13. Chef's Veg Wonder");
				    }				  
					  printf("\t\t\t%d * %d \t= %d",qtyv[i],pricev[i],qtyv[i]*pricev[i]);
					  
					}

		for(i=0; nveg[i]!=0;i++)
				 	{
				                if(i==0)
					  printf("\n\tBILL FOR non VEG PIZZA");	
					  printf("\n\t");			  
					  switch(nveg[i])
					  {
					  	case 1:
					  		printf("1. Chesse & Barbeque chicken");
					  		break;
					  	case 2:
					  		printf("2. Chicken Salami special");
							break;
						case 3:
							printf("3. Barbeque Chicken");
							break;
						case 4:
							printf("4. Chicken Fiesta");
							break;
						case 5:
							printf("5. Spicy Chicken");
							break;
						case 6:
						    printf("6. Chicken Lovers");
						    break;
						case 7:
							printf("7. Chicken Mexicana");
							break;
						case 8:
							printf("8. Chicken Golden Delight");
							break;
						case 9:
							printf("9. Chef's Chicken Choice'");
							break;
						case 10:
							printf("10. Chicken Dominator");
							break;
						case 11:
							printf("11. Seventh Heaven");
							break;
						case 12:
							printf("12. Non Veg Supreme");
							break;
						
				    }
					  printf("\t\t\t%d * %d \t= %d",qtynv[i],pricenv[i],qtynv[i]*pricenv[i]);
					  
					}		  
		printf("\n\n\t\t\t||TOTAL PRICE=%d||",totprice);
		printf("\n\t\t\t  GST       =18%% ");
		gst=(0.18*totprice)+totprice;
		printf("\n\t\t\t  TOTAL PRICE=%0.2f",gst);
	getch();
	return 0;
	}

