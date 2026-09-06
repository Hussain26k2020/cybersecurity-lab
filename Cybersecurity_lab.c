#include <stdio.h>

int main() {
    char lab_name[100];
    int num_computers;
    int num_network_devices;
    int num_security_tools;
    double cost_per_computer;
    double cost_per_network_device;
    double software_cost;

    // Gathering user input
    printf("Enter Lab Name: ");
    scanf(" %[^\n]", lab_name);

    printf("Enter Number of Computers: ");
    scanf("%d", &num_computers);

    printf("Enter Number of Network Devices: ");
    scanf("%d", &num_network_devices);

    printf("Enter Number of Security Tools: ");
    scanf("%d", &num_security_tools);

    printf("Enter Cost per Computer: ");
    scanf("%lf", &cost_per_computer);

    printf("Enter Cost per Network Device: ");
    scanf("%lf", &cost_per_network_device);

    printf("Enter Annual Security Software Cost: ");
    scanf("%lf", &software_cost);

    // Processing calculations
    double computer_cost = num_computers * cost_per_computer;
    double network_cost = num_network_devices * cost_per_network_device;
    double total_investment = computer_cost + network_cost + software_cost;

    // Displaying formatted report
    printf("\n========================================\n");
    printf("CYBERSECURITY LAB REPORT\n");
    printf("========================================\n");
    printf("Lab Name             : %s\n\n", lab_name);
    printf("Computers            : %d\n", num_computers);
    printf("Network Devices      : %d\n", num_network_devices);
    printf("Security Tools       : %d\n", num_security_tools);
    printf("Computer Cost        : %.0f\n", computer_cost);
    printf("Network Device Cost  : %.0f\n", network_cost);
    printf("Software Cost        : %.0f\n", software_cost);
    printf("----------------------------------------\n");
    printf("Total Lab Investment : %.0f\n", total_investment);
    printf("----------------------------------------\n");
    printf("========================================\n");

    return 0;
}
