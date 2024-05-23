#include "Manager.h"

int main(void)
{
    struct Manager manager = Manager.new("Håkon", "Hallingstad", 3);
    struct Employee employee = Employee.new("Håkon", "Hallingstad");
    struct Employee *polymorph = &manager.Employee;
    char buf[50];
    printf("%s\n", employee.print(&employee, sizeof(buf), buf));
    printf("%s\n", polymorph->print(polymorph, sizeof(buf), buf));
    return 0;
}