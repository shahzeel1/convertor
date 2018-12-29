#include <stdio.h>

int main()
{
	//intitalize variables
	char convert, type_of_conversion;
	float in_value;
			
	// loop until user decides to exit the program
	do{

		printf("1.Convert between Kilometer and Mile \n");
		printf("2.Convert between Meters and Feet \n");
		printf("3.Convert between Centimeter and Inches \n");
		printf("4.Convert between Celsius and Fahrenheit \n");
		printf("5. Quit \n");
		printf("What would you like to do? (Enter the number): ");
		scanf(" %c", &convert);// store user's choice
		printf("\n");
		
		// these if statements check which option the user chooses 
		if (convert == '1'){
			
				//loop until the user chooses the direction of conversion (Capitals letters only) 
				do{
					printf("Enter the conversion direction \n");
					printf("K for Kilometer to Mile \n");
					printf("M for Mile to Kilometer: ");
					scanf(" %c", &type_of_conversion);
					if (type_of_conversion == 'K') {
                    				printf("Enter the kilometer value: ");
                    				scanf("%f", &in_value);
                    				printf("%f Kilometers = %f Miles.\n", in_value, (in_value / 1.609 ));
 		               		}	 

					else if (type_of_conversion == 'M'){	
                   			 	printf("Enter the mile value: ");
                   			 	scanf("%f", &in_value);
                   			 	printf("%f Mile = %f Kilometers.\n", in_value, (in_value * 1.609));
                			}
				
					else{
						printf("Invalid character input, please try again");
					}
				}	
				 while(type_of_conversion !='K' &&  type_of_conversion !='M');
		}



		else  if (convert == '2'){

                                do{
                                	printf("Enter the conversion direction \n");
                                	printf("M for Meter to Feet \n");
                                	printf("F for Feet to Meter: ");
                                	scanf(" %c", &type_of_conversion);
                                	
					if (type_of_conversion == 'F') {
                                        	printf("Enter the feet  value: ");
                                        	scanf("%f", &in_value);
                                        	printf("%f Feet = %f Meters.\n", in_value, (in_value /3.281));
                                 	}	

                                	else if (type_of_conversion == 'M'){
                                         	printf("Enter the meter value: ");
                                         	scanf("%f", &in_value);
                                         	printf("%f Meter = %f Feet.\n", in_value, (in_value * 3.281));
                               		 }
			
                        	        else{
                                        	printf("Invalid character input, please try again");
                                	}

				}	
        			while(type_of_conversion !='F' &&  type_of_conversion !='M');
                        }
 
		else  if (convert == '3'){

                                do{
                                	printf("Enter the conversion direction \n");
                                	printf("C for Centimeter to Inch\n");
                                	printf("I for Inch to Centimeter: ");
                                	scanf(" %c", &type_of_conversion);
                                	if (type_of_conversion == 'C') {
                                        	printf("Enter the centimeter  value: ");
                                        	scanf("%f", &in_value);
                                        	printf("%f Centimeters = %f Inches.\n", in_value, (in_value /2.54));
                               }

                                else if (type_of_conversion == 'I'){
                                         printf("Enter the inch value: ");
                                         scanf("%f", &in_value);
                                         printf("%f Inches = %f Centimeter.\n", in_value, (in_value * 2.54));
                                }

                                else{
                                        printf("Invalid character input, please try again");
                                }

				}
        			while(type_of_conversion !='I' &&  type_of_conversion !='C');
                 }
		else  if (convert == '4')
                        {

                                do{
                	                printf("Enter the conversion direction \n");
                        	        printf("C for Celsius to Fahrenheit \n");
                                	printf("F for Fahrenheit to Celsius: ");
                                	scanf(" %c", &type_of_conversion);
                                	
					if (type_of_conversion == 'F') {
                                        	printf("Enter the fahrenheit  value: ");
                                        	scanf("%f", &in_value);
                                        	printf("%f Fahrenheit = %f Celsius.\n", in_value, ((in_value-32)*(5.0/9.0)));
                               		}	

                                	else if (type_of_conversion == 'C'){
                                         	printf("Enter the celsius value: ");
                             		      	 scanf("%f", &in_value);
                          	               printf("%f Celsius = %f Fahrenheit.\n", in_value, ((in_value*(9.0/5.0)+32)));
                                	}

                               		else {
                                        	printf("Invalid character input, please try again");
                                	}

				}
        			while(type_of_conversion !='F' &&  type_of_conversion !='C');
                        }
 		


		else if (convert!='5'){	
			printf("Invalid option selected, please try again");
		} 
	
	}
	while (convert!='5');

        return 0;        	
}

