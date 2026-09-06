#include <stdio.h>
#include <string.h>

int main() {
    char incident_id[50];
    char analyst_name[50];
    int affected_systems;
    double recovery_cost;
    double downtime;

    // Gathering input
    printf("Enter Incident ID: ");
    scanf("%49s", incident_id);

    printf("Enter Analyst Name: ");
    scanf(" %[^\n]", analyst_name); // Reads full name including spaces

    printf("Enter Number of Affected Systems: ");
    scanf("%d", &affected_systems);

    printf("Enter Recovery Cost: ");
    scanf("%lf", &recovery_cost);

    printf("Enter Downtime in hours: ");
    scanf("%lf", &downtime);

    // Calculation: Total Recovery Cost = Affected Systems * Recovery Cost
    double total_cost = affected_systems * recovery_cost;

    // Displaying report matching requested output
    printf("\n=================================\n");
    printf("SECURITY INCIDENT REPORT\n");
    printf("=================================\n");
    printf("Incident ID : %s\n", incident_id);
    printf("Analyst : %s\n", analyst_name);
    printf("Affected Systems : %d\n", affected_systems);
    printf("Recovery Cost : %.0f\n", recovery_cost);
    printf("Total Cost : %.0f\n", total_cost);
    printf("Downtime : %.2f hours\n", downtime);
    printf("=================================\n");

    return 0;
}
