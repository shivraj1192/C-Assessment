#include <stdio.h>

int bookTicket(int, int*);
int cancleTicket(int, int*);


int aTickets = 100, seat = 1;

int main() {
	int booking_choice, noOfTicket, booked_tickets = 0;
	extern int aTickets, seat;
	char concern;

	HOME:
	printf("\nWelcome to ticket booking platform!!\n\n");
	printf("Please Select an option displayed follow\n\n");
	printf("Options : \n1. Book Ticket\n2. Cancle Ticket\n3. Check Status of Tickets\n\n");
	printf("Enter Choice : ");
	scanf("%d", &booking_choice);

	switch (booking_choice) {
	case 1:
		printf("\n\nAvailable Tickets are : %d\n\n", aTickets);
		printf("For booking ticket Fill following informations\n");
		do {
			printf("\nHow many tickets do you want to book?\nEnter no. of tickets : ");
			scanf("%d", &noOfTicket);
			if (noOfTicket > aTickets) {
				printf("Entered no. of tickets should be less than available tickets\nEnter Again!!\n\n");
			}
		}while (noOfTicket > aTickets);
		printf("\n\n!!!Alert!!!\n\nDo you want to 'BOOK' %d tickets?\n\n if yes then type 'y' : ", noOfTicket);
        printf("\n");
		scanf(" %c", &concern);
		if (concern == 'y' || concern == 'Y') {
			bookTicket(noOfTicket,&booked_tickets);
		}
		else {
			printf("Thanks For Visiting");
		}
		printf("\n\nDo you want to visit Home Page?\n\n if yes then type 'y' : ", noOfTicket);
        printf("\n");
		scanf(" %c", &concern);
		if (concern == 'y' || concern == 'Y') {
			printf("\n\n\n");
			goto HOME;
		}
		else {
			printf("Thanks For Visiting");
		}

		break;

	case 2:
		printf("Booked tickets are : %d\n\n", booked_tickets);
		do {
			printf("How many tickets do you want to cancle?\nEnter no. of tickets : ");
			scanf("%d", &noOfTicket);
			if (noOfTicket > booked_tickets) {
				printf("Entered no. of tickets should be less than booked tickets\nEnter Again!!\n\n");
			}
		} while (noOfTicket > booked_tickets);
		printf("\n\n!!!Alert!!!\n\nDo you want to 'CANCLE' %d tickets?\n\n if yes then type 'y' : ", noOfTicket);
        printf("\n");
		scanf(" %c", &concern);
		if (concern == 'y' || concern == 'Y') {
			cancleTicket(noOfTicket,&booked_tickets);
		}
		else {
			printf("Thanks For Visiting");
		}
		printf("\n\nDo you want to visit Home Page?\n\n if yes then type 'y' : ", noOfTicket);
        printf("\n");
		scanf(" %c", &concern);
		if (concern == 'y' || concern == 'Y') {
			printf("\n\n\n");
			goto HOME;
		}
		else {
			printf("Thanks For Visiting");
		}
		break;

	case 3:
		printf("\n\nAvailable Tickets are : %d\n\n", aTickets);
		printf("Booked Tickets are : %d\n\n", booked_tickets);
		printf("\n\nDo you want to visit Home Page?\n\n if yes then type 'y' : ");
        printf("\n");
		scanf(" %c", &concern);
		if (concern == 'y' || concern == 'Y') {
			printf("\n\n\n");
			goto HOME;
		}
		else {
			printf("Thanks For Visiting");
		}
		break;

	default:
		printf("Invalid Input\n\n");
		printf("\n\nDo you want to visit Home Page?\n\n if yes then type 'y'", noOfTicket);
        printf("\n");
		scanf(" %c", &concern);
		if (concern == 'y' || concern == 'Y') {
			printf("\n\n\n");
			goto HOME;
		}
		else {
			printf("Thanks For Visiting");
		}

	}
  
  return 0;

}





int bookTicket(int noOfTicket, int* booked_Tickets) {
	extern int aTickets, seat;
	printf("Booking Successfull!!!\n\n");
	aTickets -= noOfTicket;
	*booked_Tickets += noOfTicket;
	printf("Your booked tickets are : ");
	for (int i = 1; i <= noOfTicket; i++) {
		printf("%d  ", seat);
		seat++;
	}
	printf("\n\nThank you for visiting!\nVisit Again!!\n\n");
	printf("**********************************************************************************************************\n\n\n");
}




int cancleTicket(int noOfTicket, int* booked_Tickets) {
	extern int aTickets, seat;
	printf("Cnacelation of ticket Successfull!!!\n\n");
	aTickets += noOfTicket;
	*booked_Tickets -= noOfTicket;
	printf("Your cancled ticket nos. are : ");
	seat--;
	for (int i = 1; i <= noOfTicket; i++) {
		printf("%d  ", seat);
		seat--;
	}
	seat++;
	printf("\n\nThank you for visiting!\nVisit Again!!\n\n");
	printf("**********************************************************************************************************\n\n\n");
}
