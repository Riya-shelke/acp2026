#include <stdio.h>
#include <string.h>

typedef struct {
    int flight_number;
    char destination[50];
    int available_seats;
} Flight_t;

void readFlights(int n, Flight_t f[]);
void searchByDestination(int n, Flight_t f[], char searchDest[]);

int main() {
    int n=4;
    Flight_t flights[4];
    char searchDest[50];
   
    // Read flight details
    readFlights(n,flights);

    // Search for flight
    printf("Enter destination to search\n");
    scanf("%s",searchDest);
    searchByDestination(n, flights, searchDest);

    return 0;
}

void readFlights(int n, Flight_t f[]) {
    // Write code here to read flight_number, destination and available_seats
    for(int i=0;i<n;i++)
    {
        printf("Enter the details for the filght %d\n",i+1);
        
        printf("Flight Number: ");
        scanf("%d",&f[i].flight_number);
        
        printf("Destination:\n");
        scanf("%s",f[i].destination);
        
        printf("Available Seats:\n");
        scanf("%d",&f[i].available_seats);
    }
}

void searchByDestination(int n, Flight_t f[], char searchDest[]) {
    // Write code here to search flight by destination
    int found=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(f[i].destination,searchDest)==0)
        {
        printf("Flight available: %d\n",f[i].flight_number);
        found=1;
        }
    }
  if(found==0)
  {
    printf("No flight available");
  }
} 
